void *Camera;
bool shooting;

monoArray<void **> *(*PhotonNetwork_get_OtherPlayers)();
void* GetClosestPlayer()
{
    float closestDistance = 999999.0f;
    void* closestEnemy;
    auto playerlist = PhotonNetwork_get_OtherPlayers();
    for (int i = 0; i < playerlist->getLength(); ++i) {
        auto player = playerlist->getPointer()[i];
        auto playerscript = *(void**)((uint64_t)player + 0x10);
        auto myplayerscript = *(void**)((uint64_t)PhotonNetwork.get_player() + 0x10);
        LOGD("playerscript: %p", playerscript);
        if(player == 0x0 || playerscript == 0x0 || myplayerscript == 0x0 || (long)playerscript < 0x50000000)
        {
            LOGD("PLAYER WASN'T INSTANTIATED YET SKIPPING");
            continue;
        }
        if(!PlayerUtils.IsPlayerOnTeam(playerscript, myplayerscript) && PlayerScript.PlayerAlive(playerscript, false))
        {
            auto mypos = UnityEngine::Transform.get_position(UnityEngine::Component.get_transform(myplayerscript));
            LogAddress(&mypos, "My Pos");
            auto enemyPos = UnityEngine::Transform.get_position(UnityEngine::Component.get_transform(playerscript));
            LogAddress(&enemyPos, "Enemy Pos");
            auto enemyDistance = Vector3::Distance(enemyPos, mypos);
            if(closestDistance > enemyDistance) {
                LogAddress(playerscript, "New Closest Enemy");
                closestDistance = enemyDistance;
                closestEnemy = playerscript;
            }
        }
    }
    return closestEnemy;
}
void DoAimBot()
{
    auto myPlayerScript = *(void**)((uint64_t)PhotonNetwork.get_player() + 0x10);
    if(myPlayerScript == 0x0) return;
    void* closestEnemy = GetClosestPlayer();
    LogAddress(closestEnemy, "Closest Enemy");
    if(closestEnemy == 0x0 || (long)closestEnemy < 0x50000000)
    {
        return;
    }
    auto myPos = UnityEngine::Transform.get_position(UnityEngine::Component.get_transform(myPlayerScript));
    LogAddress(&myPos, "My Aimbot Pos");
    if (!PlayerScript.PlayerAlive(closestEnemy, true)) return;
    auto enemyComponent = UnityEngine::Component.get_transform(closestEnemy);
    LogAddress(enemyComponent, "Enemy Component");
    if(enemyComponent == 0x0) return;
    auto enemyPos = UnityEngine::Transform.get_position(enemyComponent);
    LogAddress(&myPos, "Enemy Aimbot Pos");
    auto rotation = Quaternion::LookRotation(enemyPos - Vector3(0, 1, 0) - myPos);
    *(Quaternion*)((uint64_t)myPlayerScript + 0x7C4) = rotation;

}
void Telekill()
{
    auto myPlayerScript = *(void**)((uint64_t)PhotonNetwork.get_player() + 0x10);
    if(myPlayerScript == 0x0) return;
    void* closestEnemy = GetClosestPlayer();
    if(closestEnemy == 0x0|| (long)closestEnemy < 0x50000000)
    {
        return;
    }
    auto enemyPos = UnityEngine::Transform.get_position(UnityEngine::Component.get_transform(closestEnemy)) - Vector3(0, 0, -1);
    UnityEngine::Transform.set_position(UnityEngine::Component.get_transform(myPlayerScript), enemyPos);

}
void TriggerBot()
{
    auto myPlayerScript = *(void**)((uint64_t)PhotonNetwork.get_player() + 0x10);
    if(myPlayerScript == 0x0) return;
    auto aimingat = PlayerScript.GetPlayerAimingAt(myPlayerScript);
    if(aimingat && !PlayerUtils.IsPlayerOnTeam(aimingat, myPlayerScript) && PlayerScript.PlayerAlive(aimingat, true))
    {
        PlayerScript.Shoot(myPlayerScript);
    }
}
void NoSpread()
{
    auto myPlayerScript = *(void**)((uint64_t)PhotonNetwork.get_player() + 0x10);
    if(myPlayerScript == 0x0) return;
    *(float *) ((uint64_t) myPlayerScript + 0x828) = 0;
}
bool (*old_IsMine)(void* instance);
bool IsMine(void *instance)
{
    if (instance && PhotonNetwork.get_player() != 0x0)
    {
        auto photonplayer = PhotonView.get_owner(instance);
        auto otherPlayerScript = *(void**)((uint64_t)photonplayer + 0x10);
        auto myPlayerScript = *(void**)((uint64_t)PhotonNetwork.get_player() + 0x10);
        if (old_IsMine(instance))
        {

        } else if(PhotonNetwork.get_player() != 0x0 && photonplayer != 0x0)
        {
            if(!PlayerUtils.IsPlayerOnTeam(otherPlayerScript, myPlayerScript))
            {
                if(isAimbot)
                {
                    DoAimBot();
                }
                if(isTriggerBot)
                {
                    TriggerBot();
                }
                if(isNoSpread)
                {
                    NoSpread();
                }
                if(isTelekill)
                {
                    Telekill();
                }
            }
        }
    }
    return old_IsMine(instance);
}
void nop(DWORD offset)
{
    Patch::Setup((void*)offset,  STRING_OBFUSCATE("\x00\x00\xa0\xe3\x1e\xff\x2f\xe1"), 8)->Apply();
}
void CustomMatchMakerUI_PromptPassword(void *instance)
{
    if(instance)
    {
        CustomMatchMakerUI.SetTypedPassword(instance, *(monoString**)((uint64_t)instance + 0xD4));
        CustomMatchMakerUI.TryPassword(instance);
    }
}
