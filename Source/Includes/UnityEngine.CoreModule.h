namespace AOT{
struct MonoPInvokeCallbackAttribute {
}MonoPInvokeCallbackAttribute;
}
namespace JetBrainsAnnotations{
struct CanBeNullAttribute {
}CanBeNullAttribute;
struct NotNullAttribute {
}NotNullAttribute;
struct MeansImplicitUseAttribute {
DWORD ctor1Offset;
void (*ctor1)(void *_instance, int useKindFlags, int targetFlags);
}MeansImplicitUseAttribute;
struct PublicAPIAttribute {
}PublicAPIAttribute;
}
namespace UnityCollections{
struct NativeLeakDetection {
DWORD InitializeOffset;
void (*Initialize)();
}NativeLeakDetection;
}
namespace UnityCollectionsLowLevelUnsafe{
struct NativeContainerAttribute {
}NativeContainerAttribute;
struct NativeContainerSupportsMinMaxWriteRestrictionAttribute {
}NativeContainerSupportsMinMaxWriteRestrictionAttribute;
struct NativeContainerSupportsDeallocateOnJobCompletionAttribute {
}NativeContainerSupportsDeallocateOnJobCompletionAttribute;
struct NativeContainerSupportsDeferredConvertListToArray {
}NativeContainerSupportsDeferredConvertListToArray;
struct WriteAccessRequiredAttribute {
}WriteAccessRequiredAttribute;
struct NativeDisableUnsafePtrRestrictionAttribute {
}NativeDisableUnsafePtrRestrictionAttribute;
struct NativeArrayUnsafeUtility {
}NativeArrayUnsafeUtility;
struct UnsafeUtility {
}UnsafeUtility;
}
namespace UnityJobs{
struct JobHandle {
DWORD ScheduleBatchedJobsOffset;
void (*ScheduleBatchedJobs)();
}JobHandle;
}
namespace UnityEngine{
struct SortingLayer {
DWORD GetLayerValueFromIDOffset;
int (*GetLayerValueFromID)(int id);
DWORD NameToIDOffset;
int (*NameToID)(monoString *name);
DWORD IDToNameOffset;
monoString *(*IDToName)(int id);
DWORD IsValidOffset;
bool (*IsValid)(int id);
}SortingLayer;
struct Keyframe {
DWORD ctor1Offset;
void (*ctor1)(void *_instance, float time, float value, float inTangent, float outTangent);
DWORD get_timeOffset;
float (*get_time)(void *_instance);
DWORD get_valueOffset;
float (*get_value)(void *_instance);
DWORD get_inTangentOffset;
float (*get_inTangent)(void *_instance);
DWORD get_outTangentOffset;
float (*get_outTangent)(void *_instance);
}Keyframe;
struct AnimationCurve {
DWORD FinalizeOffset;
void (*Finalize)(void *_instance);
DWORD EvaluateOffset;
float (*Evaluate)(void *_instance, float time);
DWORD get_keysOffset;
DWORD get_ItemOffset;
int(*get_Item)(void *_instance, int index);
DWORD get_lengthOffset;
int (*get_length)(void *_instance);
DWORD GetKeyOffset;
int(*GetKey)(void *_instance, int index);
DWORD GetKeysOffset;
DWORD EaseInOutOffset;
void *(*EaseInOut)(float timeStart, float valueStart, float timeEnd, float valueEnd);
DWORD ctor1Offset;
void (*ctor1)(void *_instance);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, void *other);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
}AnimationCurve;
struct Application {
DWORD QuitOffset;
void (*Quit)(int exitCode);
DWORD Quit1Offset;
void (*Quit1)();
DWORD get_isPlayingOffset;
bool (*get_isPlaying)();
DWORD get_isFocusedOffset;
bool (*get_isFocused)();
DWORD get_runInBackgroundOffset;
bool (*get_runInBackground)();
DWORD set_runInBackgroundOffset;
void (*set_runInBackground)(bool value);
DWORD get_dataPathOffset;
monoString *(*get_dataPath)();
DWORD get_streamingAssetsPathOffset;
monoString *(*get_streamingAssetsPath)();
DWORD get_persistentDataPathOffset;
monoString *(*get_persistentDataPath)();
DWORD get_temporaryCachePathOffset;
monoString *(*get_temporaryCachePath)();
DWORD get_absoluteURLOffset;
monoString *(*get_absoluteURL)();
DWORD ExternalEvalOffset;
void (*ExternalEval)(monoString *script);
DWORD Internal_ExternalCallOffset;
void (*Internal_ExternalCall)(monoString *script);
DWORD get_unityVersionOffset;
monoString *(*get_unityVersion)();
DWORD get_versionOffset;
monoString *(*get_version)();
DWORD get_cloudProjectIdOffset;
monoString *(*get_cloudProjectId)();
DWORD OpenURLOffset;
void (*OpenURL)(monoString *url);
DWORD get_targetFrameRateOffset;
int (*get_targetFrameRate)();
DWORD set_targetFrameRateOffset;
void (*set_targetFrameRate)(int value);
DWORD SetLogCallbackDefinedOffset;
void (*SetLogCallbackDefined)(bool defined);
DWORD GetStackTraceLogTypeOffset;
int(*GetStackTraceLogType)(int logType);
DWORD get_platformOffset;
int(*get_platform)();
DWORD get_isMobilePlatformOffset;
bool (*get_isMobilePlatform)();
DWORD get_isConsolePlatformOffset;
bool (*get_isConsolePlatform)();
DWORD get_systemLanguageOffset;
int(*get_systemLanguage)();
DWORD get_internetReachabilityOffset;
int(*get_internetReachability)();
DWORD CallLowMemoryOffset;
void (*CallLowMemory)();
DWORD add_logMessageReceivedOffset;
void (*add_logMessageReceived)(void *value);
DWORD remove_logMessageReceivedOffset;
void (*remove_logMessageReceived)(void *value);
DWORD CallLogCallbackOffset;
void (*CallLogCallback)(monoString *logString, monoString *stackTrace, int type, bool invokedOnMainThread);
DWORD Internal_ApplicationWantsToQuitOffset;
bool (*Internal_ApplicationWantsToQuit)();
DWORD Internal_ApplicationQuitOffset;
void (*Internal_ApplicationQuit)();
DWORD InvokeOnBeforeRenderOffset;
void (*InvokeOnBeforeRender)();
DWORD InvokeFocusChangedOffset;
void (*InvokeFocusChanged)(bool focus);
DWORD InvokeDeepLinkActivatedOffset;
void (*InvokeDeepLinkActivated)(monoString *url);
DWORD get_levelCountOffset;
int (*get_levelCount)();
DWORD get_loadedLevelOffset;
int (*get_loadedLevel)();
DWORD LoadLevelOffset;
void (*LoadLevel)(int index);
DWORD LoadLevel1Offset;
void (*LoadLevel1)(monoString *name);
DWORD LoadLevelAsyncOffset;
void *(*LoadLevelAsync)(monoString *levelName);
DWORD LoadLevelAdditiveAsyncOffset;
void *(*LoadLevelAdditiveAsync)(monoString *levelName);
DWORD get_isEditorOffset;
bool (*get_isEditor)();
}Application;
struct BootConfigData {
}BootConfigData;
struct CachedAssetBundle {
DWORD get_nameOffset;
monoString *(*get_name)(void *_instance);
DWORD get_hashOffset;
int(*get_hash)(void *_instance);
}CachedAssetBundle;
struct Caching {
DWORD get_readyOffset;
bool (*get_ready)();
}Caching;
struct Camera {
DWORD get_nearClipPlaneOffset;
float (*get_nearClipPlane)(void *_instance);
DWORD set_nearClipPlaneOffset;
void (*set_nearClipPlane)(void *_instance, float value);
DWORD get_farClipPlaneOffset;
float (*get_farClipPlane)(void *_instance);
DWORD set_farClipPlaneOffset;
void (*set_farClipPlane)(void *_instance, float value);
DWORD get_fieldOfViewOffset;
float (*get_fieldOfView)(void *_instance);
DWORD set_fieldOfViewOffset;
void (*set_fieldOfView)(void *_instance, float value);
DWORD get_renderingPathOffset;
int(*get_renderingPath)(void *_instance);
DWORD set_renderingPathOffset;
void (*set_renderingPath)(void *_instance, int value);
DWORD get_allowHDROffset;
bool (*get_allowHDR)(void *_instance);
DWORD set_allowHDROffset;
void (*set_allowHDR)(void *_instance, bool value);
DWORD get_allowMSAAOffset;
bool (*get_allowMSAA)(void *_instance);
DWORD set_allowMSAAOffset;
void (*set_allowMSAA)(void *_instance, bool value);
DWORD set_orthographicSizeOffset;
void (*set_orthographicSize)(void *_instance, float value);
DWORD get_orthographicOffset;
bool (*get_orthographic)(void *_instance);
DWORD set_orthographicOffset;
void (*set_orthographic)(void *_instance, bool value);
DWORD get_depthOffset;
float (*get_depth)(void *_instance);
DWORD set_depthOffset;
void (*set_depth)(void *_instance, float value);
DWORD get_aspectOffset;
float (*get_aspect)(void *_instance);
DWORD set_aspectOffset;
void (*set_aspect)(void *_instance, float value);
DWORD get_cullingMaskOffset;
int (*get_cullingMask)(void *_instance);
DWORD set_cullingMaskOffset;
void (*set_cullingMask)(void *_instance, int value);
DWORD get_eventMaskOffset;
int (*get_eventMask)(void *_instance);
DWORD set_layerCullSphericalOffset;
void (*set_layerCullSpherical)(void *_instance, bool value);
DWORD set_useOcclusionCullingOffset;
void (*set_useOcclusionCulling)(void *_instance, bool value);
DWORD set_backgroundColorOffset;
void (*set_backgroundColor)(void *_instance, Color value);
DWORD get_clearFlagsOffset;
int(*get_clearFlags)(void *_instance);
DWORD set_clearFlagsOffset;
void (*set_clearFlags)(void *_instance, int value);
DWORD get_depthTextureModeOffset;
int(*get_depthTextureMode)(void *_instance);
DWORD set_depthTextureModeOffset;
void (*set_depthTextureMode)(void *_instance, int value);
DWORD set_rectOffset;
void (*set_rect)(void *_instance, int value);
DWORD get_pixelRectOffset;
int(*get_pixelRect)(void *_instance);
DWORD set_pixelRectOffset;
void (*set_pixelRect)(void *_instance, int value);
DWORD get_pixelWidthOffset;
int (*get_pixelWidth)(void *_instance);
DWORD get_pixelHeightOffset;
int (*get_pixelHeight)(void *_instance);
DWORD get_targetTextureOffset;
void *(*get_targetTexture)(void *_instance);
DWORD set_targetTextureOffset;
void (*set_targetTexture)(void *_instance, void *value);
DWORD get_targetDisplayOffset;
int (*get_targetDisplay)(void *_instance);
DWORD get_worldToCameraMatrixOffset;
int(*get_worldToCameraMatrix)(void *_instance);
DWORD set_worldToCameraMatrixOffset;
void (*set_worldToCameraMatrix)(void *_instance, int value);
DWORD get_projectionMatrixOffset;
int(*get_projectionMatrix)(void *_instance);
DWORD set_projectionMatrixOffset;
void (*set_projectionMatrix)(void *_instance, int value);
DWORD ResetWorldToCameraMatrixOffset;
void (*ResetWorldToCameraMatrix)(void *_instance);
DWORD WorldToScreenPointOffset;
Vector3 (*WorldToScreenPoint)(void *_instance, Vector3 position, int eye);
DWORD WorldToViewportPointOffset;
Vector3 (*WorldToViewportPoint)(void *_instance, Vector3 position, int eye);
DWORD ScreenToWorldPointOffset;
Vector3 (*ScreenToWorldPoint)(void *_instance, Vector3 position, int eye);
DWORD WorldToScreenPoint1Offset;
Vector3 (*WorldToScreenPoint1)(void *_instance, Vector3 position);
DWORD WorldToViewportPoint1Offset;
Vector3 (*WorldToViewportPoint1)(void *_instance, Vector3 position);
DWORD ScreenToWorldPoint1Offset;
Vector3 (*ScreenToWorldPoint1)(void *_instance, Vector3 position);
DWORD ScreenToViewportPointOffset;
Vector3 (*ScreenToViewportPoint)(void *_instance, Vector3 position);
DWORD ViewportPointToRayOffset;
int(*ViewportPointToRay)(void *_instance, Vector2 pos, int eye);
DWORD ViewportPointToRay1Offset;
int(*ViewportPointToRay1)(void *_instance, Vector3 pos, int eye);
DWORD ViewportPointToRay2Offset;
int(*ViewportPointToRay2)(void *_instance, Vector3 pos);
DWORD ScreenPointToRayOffset;
int(*ScreenPointToRay)(void *_instance, Vector2 pos, int eye);
DWORD ScreenPointToRay1Offset;
int(*ScreenPointToRay1)(void *_instance, Vector3 pos, int eye);
DWORD ScreenPointToRay2Offset;
int(*ScreenPointToRay2)(void *_instance, Vector3 pos);
DWORD get_mainOffset;
void *(*get_main)();
DWORD get_currentOffset;
void *(*get_current)();
DWORD get_stereoEnabledOffset;
bool (*get_stereoEnabled)(void *_instance);
DWORD GetStereoViewMatrixOffset;
int(*GetStereoViewMatrix)(void *_instance, int eye);
DWORD GetStereoProjectionMatrixOffset;
int(*GetStereoProjectionMatrix)(void *_instance, int eye);
DWORD SetStereoProjectionMatrixOffset;
void (*SetStereoProjectionMatrix)(void *_instance, int eye, int matrix);
DWORD SetStereoViewMatrixOffset;
void (*SetStereoViewMatrix)(void *_instance, int eye, int matrix);
DWORD GetAllCamerasCountOffset;
int (*GetAllCamerasCount)();
DWORD get_allCamerasCountOffset;
int (*get_allCamerasCount)();
DWORD get_allCamerasOffset;
DWORD RenderToCubemapImplOffset;
bool (*RenderToCubemapImpl)(void *_instance, void *tex, int faceMask);
DWORD RenderToCubemapOffset;
bool (*RenderToCubemap)(void *_instance, void *cubemap);
DWORD RenderToCubemap1Offset;
bool (*RenderToCubemap1)(void *_instance, void *cubemap);
DWORD RenderOffset;
void (*Render)(void *_instance);
DWORD RenderWithShaderOffset;
void (*RenderWithShader)(void *_instance, void *shader, monoString *replacementTag);
DWORD CopyFromOffset;
void (*CopyFrom)(void *_instance, void *other);
DWORD FireOnPreCullOffset;
void (*FireOnPreCull)(void *cam);
DWORD FireOnPreRenderOffset;
void (*FireOnPreRender)(void *cam);
DWORD FireOnPostRenderOffset;
void (*FireOnPostRender)(void *cam);
DWORD WorldToScreenPoint_InjectedOffset;
void (*WorldToScreenPoint_Injected)(void *_instance, Vector3 *position, int eye, Vector3 *ret);
DWORD WorldToViewportPoint_InjectedOffset;
void (*WorldToViewportPoint_Injected)(void *_instance, Vector3 *position, int eye, Vector3 *ret);
DWORD ScreenToWorldPoint_InjectedOffset;
void (*ScreenToWorldPoint_Injected)(void *_instance, Vector3 *position, int eye, Vector3 *ret);
DWORD ScreenToViewportPoint_InjectedOffset;
void (*ScreenToViewportPoint_Injected)(void *_instance, Vector3 *position, Vector3 *ret);
}Camera;
struct CullingGroup {
DWORD FinalizeOffset;
void (*Finalize)(void *_instance);
DWORD DisposeInternalOffset;
void (*DisposeInternal)(void *_instance);
DWORD DisposeOffset;
void (*Dispose)(void *_instance);
DWORD set_targetCameraOffset;
void (*set_targetCamera)(void *_instance, void *value);
DWORD SetBoundingSphereCountOffset;
void (*SetBoundingSphereCount)(void *_instance, int count);
DWORD FinalizerFailureOffset;
void (*FinalizerFailure)(void *_instance);
}CullingGroup;
struct ReflectionProbe {
DWORD CallReflectionProbeEventOffset;
void (*CallReflectionProbeEvent)(void *probe, int probeEvent);
DWORD CallSetDefaultReflectionOffset;
void (*CallSetDefaultReflection)(void *defaultReflectionCubemap);
}ReflectionProbe;
struct DebugLogHandler {
DWORD Internal_LogOffset;
void (*Internal_Log)(int level, int options, monoString *msg, void *obj);
DWORD Internal_LogExceptionOffset;
void (*Internal_LogException)(void *exception, void *obj);
DWORD LogExceptionOffset;
void (*LogException)(void *_instance, void *exception, void *context);
}DebugLogHandler;
struct Debug {
DWORD get_unityLoggerOffset;
void *(*get_unityLogger)();
DWORD DrawLineOffset;
void (*DrawLine)(Vector3 start, Vector3 end, Color color, float duration);
DWORD DrawLine1Offset;
void (*DrawLine1)(Vector3 start, Vector3 end, Color color);
DWORD DrawLine2Offset;
void (*DrawLine2)(Vector3 start, Vector3 end, Color color, float duration, bool depthTest);
DWORD BreakOffset;
void (*Break)();
DWORD LogExceptionOffset;
void (*LogException)(void *exception);
DWORD LogException1Offset;
void (*LogException1)(void *exception, void *context);
DWORD get_isDebugBuildOffset;
bool (*get_isDebugBuild)();
DWORD CallOverridenDebugHandlerOffset;
bool (*CallOverridenDebugHandler)(void *exception, void *obj);
}Debug;
struct DynamicGI {
DWORD UpdateEnvironmentOffset;
void (*UpdateEnvironment)();
}DynamicGI;
struct Bounds {
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, int other);
DWORD get_centerOffset;
Vector3 (*get_center)(void *_instance);
DWORD set_centerOffset;
void (*set_center)(void *_instance, Vector3 value);
DWORD get_sizeOffset;
Vector3 (*get_size)(void *_instance);
DWORD set_sizeOffset;
void (*set_size)(void *_instance, Vector3 value);
DWORD get_extentsOffset;
Vector3 (*get_extents)(void *_instance);
DWORD set_extentsOffset;
void (*set_extents)(void *_instance, Vector3 value);
DWORD get_minOffset;
Vector3 (*get_min)(void *_instance);
DWORD get_maxOffset;
Vector3 (*get_max)(void *_instance);
DWORD op_EqualityOffset;
bool (*op_Equality)(int lhs, int rhs);
DWORD op_InequalityOffset;
bool (*op_Inequality)(int lhs, int rhs);
DWORD SetMinMaxOffset;
void (*SetMinMax)(void *_instance, Vector3 min, Vector3 max);
DWORD EncapsulateOffset;
void (*Encapsulate)(void *_instance, Vector3 point);
DWORD Encapsulate1Offset;
void (*Encapsulate1)(void *_instance, int bounds);
DWORD IntersectsOffset;
bool (*Intersects)(void *_instance, int bounds);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
DWORD ContainsOffset;
bool (*Contains)(void *_instance, Vector3 point);
DWORD SqrDistanceOffset;
float (*SqrDistance)(void *_instance, Vector3 point);
}Bounds;
struct GeometryUtility {
DWORD CalculateFrustumPlanesOffset;
}GeometryUtility;
struct Plane {
DWORD get_normalOffset;
Vector3 (*get_normal)(void *_instance);
DWORD get_distanceOffset;
float (*get_distance)(void *_instance);
DWORD set_distanceOffset;
void (*set_distance)(void *_instance, float value);
DWORD GetDistanceToPointOffset;
float (*GetDistanceToPoint)(void *_instance, Vector3 point);
DWORD GetSideOffset;
bool (*GetSide)(void *_instance, Vector3 point);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
}Plane;
struct Ray {
DWORD get_originOffset;
Vector3 (*get_origin)(void *_instance);
DWORD get_directionOffset;
Vector3 (*get_direction)(void *_instance);
DWORD GetPointOffset;
Vector3 (*GetPoint)(void *_instance, float distance);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
}Ray;
struct Rect {
DWORD ctor1Offset;
void (*ctor1)(void *_instance, Vector2 position, Vector2 size);
DWORD ctor2Offset;
void (*ctor2)(void *_instance, int source);
DWORD get_zeroOffset;
int(*get_zero)();
DWORD MinMaxRectOffset;
int(*MinMaxRect)(float xmin, float ymin, float xmax, float ymax);
DWORD SetOffset;
void (*Set)(void *_instance, float x, float y, float width, float height);
DWORD get_xOffset;
float (*get_x)(void *_instance);
DWORD set_xOffset;
void (*set_x)(void *_instance, float value);
DWORD get_yOffset;
float (*get_y)(void *_instance);
DWORD set_yOffset;
void (*set_y)(void *_instance, float value);
DWORD get_positionOffset;
Vector2 (*get_position)(void *_instance);
DWORD get_centerOffset;
Vector2 (*get_center)(void *_instance);
DWORD set_centerOffset;
void (*set_center)(void *_instance, Vector2 value);
DWORD get_minOffset;
Vector2 (*get_min)(void *_instance);
DWORD get_maxOffset;
Vector2 (*get_max)(void *_instance);
DWORD get_widthOffset;
float (*get_width)(void *_instance);
DWORD set_widthOffset;
void (*set_width)(void *_instance, float value);
DWORD get_heightOffset;
float (*get_height)(void *_instance);
DWORD set_heightOffset;
void (*set_height)(void *_instance, float value);
DWORD get_sizeOffset;
Vector2 (*get_size)(void *_instance);
DWORD get_xMinOffset;
float (*get_xMin)(void *_instance);
DWORD set_xMinOffset;
void (*set_xMin)(void *_instance, float value);
DWORD get_yMinOffset;
float (*get_yMin)(void *_instance);
DWORD set_yMinOffset;
void (*set_yMin)(void *_instance, float value);
DWORD get_xMaxOffset;
float (*get_xMax)(void *_instance);
DWORD set_xMaxOffset;
void (*set_xMax)(void *_instance, float value);
DWORD get_yMaxOffset;
float (*get_yMax)(void *_instance);
DWORD set_yMaxOffset;
void (*set_yMax)(void *_instance, float value);
DWORD ContainsOffset;
bool (*Contains)(void *_instance, Vector2 point);
DWORD Contains1Offset;
bool (*Contains1)(void *_instance, Vector3 point);
DWORD OrderMinMaxOffset;
int(*OrderMinMax)(int rect);
DWORD OverlapsOffset;
bool (*Overlaps)(void *_instance, int other);
DWORD Overlaps1Offset;
bool (*Overlaps1)(void *_instance, int other, bool allowInverse);
DWORD op_InequalityOffset;
bool (*op_Inequality)(int lhs, int rhs);
DWORD op_EqualityOffset;
bool (*op_Equality)(int lhs, int rhs);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, int other);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
DWORD ToString1Offset;
monoString *(*ToString1)(void *_instance, monoString *format);
}Rect;
struct RectInt {
DWORD get_xOffset;
int (*get_x)(void *_instance);
DWORD get_yOffset;
int (*get_y)(void *_instance);
DWORD get_widthOffset;
int (*get_width)(void *_instance);
DWORD get_heightOffset;
int (*get_height)(void *_instance);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
DWORD EqualsOffset;
bool (*Equals)(void *_instance, int other);
}RectInt;
struct RectOffset {
DWORD FinalizeOffset;
void (*Finalize)(void *_instance);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
DWORD DestroyOffset;
void (*Destroy)(void *_instance);
DWORD InternalCreateOffset;
DWORD get_leftOffset;
int (*get_left)(void *_instance);
DWORD get_rightOffset;
int (*get_right)(void *_instance);
DWORD get_topOffset;
int (*get_top)(void *_instance);
DWORD get_bottomOffset;
int (*get_bottom)(void *_instance);
DWORD get_horizontalOffset;
int (*get_horizontal)(void *_instance);
DWORD get_verticalOffset;
int (*get_vertical)(void *_instance);
DWORD AddOffset;
int(*Add)(void *_instance, int rect);
DWORD RemoveOffset;
int(*Remove)(void *_instance, int rect);
}RectOffset;
struct Gizmos {
DWORD DrawLineOffset;
void (*DrawLine)(Vector3 from, Vector3 to);
DWORD DrawWireSphereOffset;
void (*DrawWireSphere)(Vector3 center, float radius);
DWORD DrawSphereOffset;
void (*DrawSphere)(Vector3 center, float radius);
DWORD DrawWireCubeOffset;
void (*DrawWireCube)(Vector3 center, Vector3 size);
DWORD DrawCubeOffset;
void (*DrawCube)(Vector3 center, Vector3 size);
DWORD set_colorOffset;
void (*set_color)(Color value);
DWORD set_matrixOffset;
void (*set_matrix)(int value);
DWORD DrawFrustumOffset;
void (*DrawFrustum)(Vector3 center, float fov, float maxRange, float minRange, float aspect);
DWORD DrawRayOffset;
void (*DrawRay)(Vector3 from, Vector3 direction);
DWORD DrawLine_InjectedOffset;
void (*DrawLine_Injected)(Vector3 *from, Vector3 *to);
DWORD DrawWireSphere_InjectedOffset;
void (*DrawWireSphere_Injected)(Vector3 *center, float radius);
DWORD DrawSphere_InjectedOffset;
void (*DrawSphere_Injected)(Vector3 *center, float radius);
DWORD DrawWireCube_InjectedOffset;
void (*DrawWireCube_Injected)(Vector3 *center, Vector3 *size);
DWORD DrawCube_InjectedOffset;
void (*DrawCube_Injected)(Vector3 *center, Vector3 *size);
DWORD DrawFrustum_InjectedOffset;
void (*DrawFrustum_Injected)(Vector3 *center, float fov, float maxRange, float minRange, float aspect);
}Gizmos;
struct BeforeRenderHelper {
DWORD InvokeOffset;
void (*Invoke)();
}BeforeRenderHelper;
struct Display {
DWORD get_renderingWidthOffset;
int (*get_renderingWidth)(void *_instance);
DWORD get_renderingHeightOffset;
int (*get_renderingHeight)(void *_instance);
DWORD get_systemWidthOffset;
int (*get_systemWidth)(void *_instance);
DWORD get_systemHeightOffset;
int (*get_systemHeight)(void *_instance);
DWORD RelativeMouseAtOffset;
Vector3 (*RelativeMouseAt)(Vector3 inputMouseCoordinates);
DWORD get_mainOffset;
void *(*get_main)();
DWORD FireDisplaysUpdatedOffset;
void (*FireDisplaysUpdated)();
}Display;
struct Screen {
DWORD get_widthOffset;
int (*get_width)();
DWORD get_heightOffset;
int (*get_height)();
DWORD get_dpiOffset;
float (*get_dpi)();
DWORD RequestOrientationOffset;
void (*RequestOrientation)(int orient);
DWORD GetScreenOrientationOffset;
int(*GetScreenOrientation)();
DWORD get_orientationOffset;
int(*get_orientation)();
DWORD set_orientationOffset;
void (*set_orientation)(int value);
DWORD SetOrientationEnabledOffset;
void (*SetOrientationEnabled)(int orient, bool enabled);
DWORD set_autorotateToPortraitOffset;
void (*set_autorotateToPortrait)(bool value);
DWORD set_autorotateToPortraitUpsideDownOffset;
void (*set_autorotateToPortraitUpsideDown)(bool value);
DWORD set_autorotateToLandscapeLeftOffset;
void (*set_autorotateToLandscapeLeft)(bool value);
DWORD set_autorotateToLandscapeRightOffset;
void (*set_autorotateToLandscapeRight)(bool value);
DWORD get_currentResolutionOffset;
int(*get_currentResolution)();
DWORD get_fullScreenOffset;
bool (*get_fullScreen)();
DWORD set_fullScreenOffset;
void (*set_fullScreen)(bool value);
DWORD get_fullScreenModeOffset;
int(*get_fullScreenMode)();
DWORD SetResolutionOffset;
void (*SetResolution)(int width, int height, int fullscreenMode, int preferredRefreshRate);
DWORD SetResolution1Offset;
void (*SetResolution1)(int width, int height, bool fullscreen, int preferredRefreshRate);
DWORD SetResolution2Offset;
void (*SetResolution2)(int width, int height, bool fullscreen);
}Screen;
struct Graphics {
DWORD Internal_GetMaxDrawMeshInstanceCountOffset;
int (*Internal_GetMaxDrawMeshInstanceCount)();
DWORD GetActiveColorBufferOffset;
int(*GetActiveColorBuffer)();
DWORD GetActiveDepthBufferOffset;
int(*GetActiveDepthBuffer)();
DWORD Internal_SetNullRTOffset;
void (*Internal_SetNullRT)();
DWORD Internal_SetRTSimpleOffset;
void (*Internal_SetRTSimple)(int color, int depth, int mip, int face, int depthSlice);
DWORD Internal_DrawMeshNow2Offset;
void (*Internal_DrawMeshNow2)(void *mesh, int subsetIndex, int matrix);
DWORD Internal_DrawMeshOffset;
void (*Internal_DrawMesh)(void *mesh, int submeshIndex, int matrix, void *material, int layer, void *camera, void *properties, int castShadows, bool receiveShadows, void *probeAnchor, int lightProbeUsage, void *lightProbeProxyVolume);
DWORD Internal_BlitMaterial5Offset;
void (*Internal_BlitMaterial5)(void *source, void *dest, void *mat, int pass, bool setRT);
DWORD Blit21Offset;
void (*Blit21)(void *source, void *dest);
DWORD SetRenderTargetImplOffset;
void (*SetRenderTargetImpl)(int colorBuffer, int depthBuffer, int mipLevel, int face, int depthSlice);
DWORD SetRenderTargetImpl1Offset;
void (*SetRenderTargetImpl1)(void *rt, int mipLevel, int face, int depthSlice);
DWORD SetRenderTargetOffset;
void (*SetRenderTarget)(void *rt, int mipLevel, int face, int depthSlice);
DWORD SetRenderTarget1Offset;
void (*SetRenderTarget1)(int colorBuffer, int depthBuffer, int mipLevel, int face, int depthSlice);
DWORD get_activeColorBufferOffset;
int(*get_activeColorBuffer)();
DWORD get_activeDepthBufferOffset;
int(*get_activeDepthBuffer)();
DWORD DrawTextureImplOffset;
void (*DrawTextureImpl)(int screenRect, void *texture, int sourceRect, int leftBorder, int rightBorder, int topBorder, int bottomBorder, Color color, void *mat, int pass);
DWORD DrawTextureOffset;
void (*DrawTexture)(int screenRect, void *texture, int sourceRect, int leftBorder, int rightBorder, int topBorder, int bottomBorder, void *mat, int pass);
DWORD DrawTexture1Offset;
void (*DrawTexture1)(int screenRect, void *texture, int leftBorder, int rightBorder, int topBorder, int bottomBorder, void *mat, int pass);
DWORD DrawTexture2Offset;
void (*DrawTexture2)(int screenRect, void *texture, void *mat, int pass);
DWORD DrawMeshNowOffset;
void (*DrawMeshNow)(void *mesh, int matrix, int materialIndex);
DWORD DrawMeshNow1Offset;
void (*DrawMeshNow1)(void *mesh, int matrix);
DWORD DrawMeshOffset;
void (*DrawMesh)(void *mesh, int matrix, void *material, int layer, void *camera, int submeshIndex, void *properties, int castShadows, bool receiveShadows, void *probeAnchor, int lightProbeUsage, void *lightProbeProxyVolume);
DWORD BlitOffset;
void (*Blit)(void *source, void *dest);
DWORD Blit1Offset;
void (*Blit1)(void *source, void *dest, void *mat, int pass);
DWORD Blit2Offset;
void (*Blit2)(void *source, void *dest, void *mat);
DWORD DrawMesh1Offset;
void (*DrawMesh1)(void *mesh, Vector3 position, int rotation, void *material, int layer, void *camera);
DWORD DrawMesh2Offset;
void (*DrawMesh2)(void *mesh, int matrix, void *material, int layer, void *camera, int submeshIndex, void *properties, bool castShadows, bool receiveShadows);
DWORD DrawTexture11Offset;
void (*DrawTexture11)(int screenRect, void *texture, int sourceRect, int leftBorder, int rightBorder, int topBorder, int bottomBorder, void *mat);
DWORD DrawTexture21Offset;
void (*DrawTexture21)(int screenRect, void *texture, void *mat);
DWORD SetRenderTarget11Offset;
void (*SetRenderTarget11)(void *rt);
DWORD SetRenderTarget2Offset;
void (*SetRenderTarget2)(int colorBuffer, int depthBuffer);
}Graphics;
struct GL {
DWORD Vertex3Offset;
void (*Vertex3)(float x, float y, float z);
DWORD VertexOffset;
void (*Vertex)(Vector3 v);
DWORD TexCoord3Offset;
void (*TexCoord3)(float x, float y, float z);
DWORD TexCoord2Offset;
void (*TexCoord2)(float x, float y);
DWORD MultiTexCoord3Offset;
void (*MultiTexCoord3)(int unit, float x, float y, float z);
DWORD MultiTexCoord2Offset;
void (*MultiTexCoord2)(int unit, float x, float y);
DWORD MultMatrixOffset;
void (*MultMatrix)(int m);
DWORD PushMatrixOffset;
void (*PushMatrix)();
DWORD PopMatrixOffset;
void (*PopMatrix)();
DWORD LoadIdentityOffset;
void (*LoadIdentity)();
DWORD LoadOrthoOffset;
void (*LoadOrtho)();
DWORD LoadProjectionMatrixOffset;
void (*LoadProjectionMatrix)(int mat);
DWORD GetGPUProjectionMatrixOffset;
int(*GetGPUProjectionMatrix)(int proj, bool renderIntoTexture);
DWORD GLLoadPixelMatrixScriptOffset;
void (*GLLoadPixelMatrixScript)(float left, float right, float bottom, float top);
DWORD LoadPixelMatrixOffset;
void (*LoadPixelMatrix)(float left, float right, float bottom, float top);
DWORD BeginOffset;
void (*Begin)(int mode);
DWORD EndOffset;
void (*End)();
DWORD GLClearOffset;
void (*GLClear)(bool clearDepth, bool clearColor, Color backgroundColor, float depth);
DWORD ClearOffset;
void (*Clear)(bool clearDepth, bool clearColor, Color backgroundColor);
DWORD ClearWithSkyboxOffset;
void (*ClearWithSkybox)(bool clearDepth, void *camera);
}GL;
struct LightmapData {
DWORD get_lightmapColorOffset;
void *(*get_lightmapColor)(void *_instance);
DWORD set_lightmapColorOffset;
void (*set_lightmapColor)(void *_instance, void *value);
DWORD get_lightmapDirOffset;
void *(*get_lightmapDir)(void *_instance);
DWORD set_lightmapDirOffset;
void (*set_lightmapDir)(void *_instance, void *value);
DWORD get_shadowMaskOffset;
void *(*get_shadowMask)(void *_instance);
DWORD set_shadowMaskOffset;
void (*set_shadowMask)(void *_instance, void *value);
}LightmapData;
struct LightmapSettings {
DWORD get_lightmapsOffset;
DWORD set_lightmapsModeOffset;
void (*set_lightmapsMode)(int value);
}LightmapSettings;
struct Resolution {
DWORD get_widthOffset;
int (*get_width)(void *_instance);
DWORD get_heightOffset;
int (*get_height)(void *_instance);
DWORD get_refreshRateOffset;
int (*get_refreshRate)(void *_instance);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
}Resolution;
struct QualitySettings {
DWORD set_pixelLightCountOffset;
void (*set_pixelLightCount)(int value);
DWORD get_shadowDistanceOffset;
float (*get_shadowDistance)();
DWORD set_shadowDistanceOffset;
void (*set_shadowDistance)(float value);
DWORD get_lodBiasOffset;
float (*get_lodBias)();
DWORD set_lodBiasOffset;
void (*set_lodBias)(float value);
DWORD set_anisotropicFilteringOffset;
void (*set_anisotropicFiltering)(int value);
DWORD set_masterTextureLimitOffset;
void (*set_masterTextureLimit)(int value);
DWORD set_particleRaycastBudgetOffset;
void (*set_particleRaycastBudget)(int value);
DWORD get_vSyncCountOffset;
int (*get_vSyncCount)();
DWORD set_vSyncCountOffset;
void (*set_vSyncCount)(int value);
DWORD get_antiAliasingOffset;
int (*get_antiAliasing)();
DWORD set_skinWeightsOffset;
void (*set_skinWeights)(int value);
DWORD get_activeColorSpaceOffset;
int(*get_activeColorSpace)();
}QualitySettings;
struct ImageEffectTransformsToLDR {
}ImageEffectTransformsToLDR;
struct ImageEffectAllowedInSceneView {
}ImageEffectAllowedInSceneView;
struct ImageEffectOpaque {
}ImageEffectOpaque;
struct TrailRenderer {
DWORD get_timeOffset;
float (*get_time)(void *_instance);
DWORD set_timeOffset;
void (*set_time)(void *_instance, float value);
DWORD set_startWidthOffset;
void (*set_startWidth)(void *_instance, float value);
DWORD set_endWidthOffset;
void (*set_endWidth)(void *_instance, float value);
DWORD ClearOffset;
void (*Clear)(void *_instance);
}TrailRenderer;
struct LineRenderer {
DWORD SetColorsOffset;
void (*SetColors)(void *_instance, Color start, Color end);
DWORD set_startColorOffset;
void (*set_startColor)(void *_instance, Color value);
DWORD set_endColorOffset;
void (*set_endColor)(void *_instance, Color value);
DWORD SetPositionOffset;
void (*SetPosition)(void *_instance, int index, Vector3 position);
DWORD SetPosition_InjectedOffset;
void (*SetPosition_Injected)(void *_instance, int index, Vector3 *position);
}LineRenderer;
struct MaterialPropertyBlock {
DWORD GetFloatImplOffset;
float (*GetFloatImpl)(void *_instance, int name);
DWORD GetVectorImplOffset;
int(*GetVectorImpl)(void *_instance, int name);
DWORD GetMatrixImplOffset;
int(*GetMatrixImpl)(void *_instance, int name);
DWORD GetTextureImplOffset;
void *(*GetTextureImpl)(void *_instance, int name);
DWORD SetFloatImplOffset;
void (*SetFloatImpl)(void *_instance, int name, float value);
DWORD SetVectorImplOffset;
void (*SetVectorImpl)(void *_instance, int name, int value);
DWORD SetColorImplOffset;
void (*SetColorImpl)(void *_instance, int name, Color value);
DWORD SetMatrixImplOffset;
void (*SetMatrixImpl)(void *_instance, int name, int value);
DWORD SetTextureImplOffset;
void (*SetTextureImpl)(void *_instance, int name, void *value);
DWORD CreateImplOffset;
DWORD ClearOffset;
void (*Clear)(void *_instance, bool keepMemory);
DWORD Clear1Offset;
void (*Clear1)(void *_instance);
DWORD FinalizeOffset;
void (*Finalize)(void *_instance);
DWORD DisposeOffset;
void (*Dispose)(void *_instance);
DWORD SetFloatOffset;
void (*SetFloat)(void *_instance, monoString *name, float value);
DWORD SetVectorOffset;
void (*SetVector)(void *_instance, monoString *name, int value);
DWORD SetVector1Offset;
void (*SetVector1)(void *_instance, int nameID, int value);
DWORD SetColorOffset;
void (*SetColor)(void *_instance, monoString *name, Color value);
DWORD SetMatrixOffset;
void (*SetMatrix)(void *_instance, monoString *name, int value);
DWORD SetMatrix1Offset;
void (*SetMatrix1)(void *_instance, int nameID, int value);
DWORD SetTextureOffset;
void (*SetTexture)(void *_instance, monoString *name, void *value);
DWORD SetTexture1Offset;
void (*SetTexture1)(void *_instance, int nameID, void *value);
DWORD GetFloatOffset;
float (*GetFloat)(void *_instance, int nameID);
DWORD GetVectorOffset;
int(*GetVector)(void *_instance, int nameID);
DWORD GetMatrixOffset;
int(*GetMatrix)(void *_instance, int nameID);
DWORD GetTextureOffset;
void *(*GetTexture)(void *_instance, int nameID);
}MaterialPropertyBlock;
struct Renderer {
DWORD set_castShadowsOffset;
void (*set_castShadows)(void *_instance, bool value);
DWORD get_boundsOffset;
int(*get_bounds)(void *_instance);
DWORD SetStaticLightmapSTOffset;
void (*SetStaticLightmapST)(void *_instance, int st);
DWORD GetMaterialOffset;
void *(*GetMaterial)(void *_instance);
DWORD GetSharedMaterialOffset;
void *(*GetSharedMaterial)(void *_instance);
DWORD SetMaterialOffset;
void (*SetMaterial)(void *_instance, void *m);
DWORD GetMaterialArrayOffset;
DWORD Internal_SetPropertyBlockOffset;
void (*Internal_SetPropertyBlock)(void *_instance, void *properties);
DWORD Internal_GetPropertyBlockOffset;
void (*Internal_GetPropertyBlock)(void *_instance, void *dest);
DWORD SetPropertyBlockOffset;
void (*SetPropertyBlock)(void *_instance, void *properties);
DWORD GetPropertyBlockOffset;
void (*GetPropertyBlock)(void *_instance, void *properties);
DWORD get_enabledOffset;
bool (*get_enabled)(void *_instance);
DWORD set_enabledOffset;
void (*set_enabled)(void *_instance, bool value);
DWORD get_isVisibleOffset;
bool (*get_isVisible)(void *_instance);
DWORD get_shadowCastingModeOffset;
int(*get_shadowCastingMode)(void *_instance);
DWORD set_shadowCastingModeOffset;
void (*set_shadowCastingMode)(void *_instance, int value);
DWORD set_receiveShadowsOffset;
void (*set_receiveShadows)(void *_instance, bool value);
DWORD set_lightProbeUsageOffset;
void (*set_lightProbeUsage)(void *_instance, int value);
DWORD set_reflectionProbeUsageOffset;
void (*set_reflectionProbeUsage)(void *_instance, int value);
DWORD get_sortingLayerIDOffset;
int (*get_sortingLayerID)(void *_instance);
DWORD set_sortingLayerIDOffset;
void (*set_sortingLayerID)(void *_instance, int value);
DWORD get_sortingOrderOffset;
int (*get_sortingOrder)(void *_instance);
DWORD set_sortingOrderOffset;
void (*set_sortingOrder)(void *_instance, int value);
DWORD set_staticBatchRootTransformOffset;
void (*set_staticBatchRootTransform)(void *_instance, void *value);
DWORD get_staticBatchIndexOffset;
int (*get_staticBatchIndex)(void *_instance);
DWORD SetStaticBatchInfoOffset;
void (*SetStaticBatchInfo)(void *_instance, int firstSubMesh, int subMeshCount);
DWORD get_isPartOfStaticBatchOffset;
bool (*get_isPartOfStaticBatch)(void *_instance);
DWORD get_worldToLocalMatrixOffset;
int(*get_worldToLocalMatrix)(void *_instance);
DWORD GetLightmapIndexOffset;
int (*GetLightmapIndex)(void *_instance, int lt);
DWORD SetLightmapIndexOffset;
void (*SetLightmapIndex)(void *_instance, int index, int lt);
DWORD GetLightmapSTOffset;
int(*GetLightmapST)(void *_instance, int lt);
DWORD get_lightmapIndexOffset;
int (*get_lightmapIndex)(void *_instance);
DWORD set_lightmapIndexOffset;
void (*set_lightmapIndex)(void *_instance, int value);
DWORD get_lightmapScaleOffsetOffset;
int(*get_lightmapScaleOffset)(void *_instance);
DWORD set_lightmapScaleOffsetOffset;
void (*set_lightmapScaleOffset)(void *_instance, int value);
DWORD get_realtimeLightmapScaleOffsetOffset;
int(*get_realtimeLightmapScaleOffset)(void *_instance);
DWORD GetSharedMaterialArrayOffset;
DWORD get_materialsOffset;
DWORD get_materialOffset;
void *(*get_material)(void *_instance);
DWORD set_materialOffset;
void (*set_material)(void *_instance, void *value);
DWORD get_sharedMaterialOffset;
void *(*get_sharedMaterial)(void *_instance);
DWORD set_sharedMaterialOffset;
void (*set_sharedMaterial)(void *_instance, void *value);
DWORD get_sharedMaterialsOffset;
}Renderer;
struct RenderSettings {
DWORD get_fogOffset;
bool (*get_fog)();
DWORD set_fogOffset;
void (*set_fog)(bool value);
DWORD get_fogStartDistanceOffset;
float (*get_fogStartDistance)();
DWORD get_fogEndDistanceOffset;
float (*get_fogEndDistance)();
DWORD get_fogModeOffset;
int(*get_fogMode)();
DWORD get_fogColorOffset;
Color (*get_fogColor)();
DWORD set_fogColorOffset;
void (*set_fogColor)(Color value);
DWORD get_fogDensityOffset;
float (*get_fogDensity)();
DWORD set_fogDensityOffset;
void (*set_fogDensity)(float value);
DWORD get_ambientModeOffset;
int(*get_ambientMode)();
DWORD set_ambientIntensityOffset;
void (*set_ambientIntensity)(float value);
DWORD set_ambientLightOffset;
void (*set_ambientLight)(Color value);
DWORD get_skyboxOffset;
void *(*get_skybox)();
DWORD set_skyboxOffset;
void (*set_skybox)(void *value);
DWORD get_ambientProbeOffset;
int(*get_ambientProbe)();
}RenderSettings;
struct Shader {
DWORD FindOffset;
void *(*Find)(monoString *name);
DWORD get_isSupportedOffset;
bool (*get_isSupported)(void *_instance);
DWORD EnableKeywordOffset;
void (*EnableKeyword)(monoString *keyword);
DWORD DisableKeywordOffset;
void (*DisableKeyword)(monoString *keyword);
DWORD get_disableBatchingOffset;
int(*get_disableBatching)(void *_instance);
DWORD PropertyToIDOffset;
int (*PropertyToID)(monoString *name);
DWORD SetGlobalFloatImplOffset;
void (*SetGlobalFloatImpl)(int name, float value);
DWORD SetGlobalVectorImplOffset;
void (*SetGlobalVectorImpl)(int name, int value);
DWORD SetGlobalMatrixImplOffset;
void (*SetGlobalMatrixImpl)(int name, int value);
DWORD SetGlobalTextureImplOffset;
void (*SetGlobalTextureImpl)(int name, void *value);
DWORD SetGlobalFloatOffset;
void (*SetGlobalFloat)(monoString *name, float value);
DWORD SetGlobalVectorOffset;
void (*SetGlobalVector)(monoString *name, int value);
DWORD SetGlobalVector1Offset;
void (*SetGlobalVector1)(int nameID, int value);
DWORD SetGlobalColorOffset;
void (*SetGlobalColor)(monoString *name, Color value);
DWORD SetGlobalMatrixOffset;
void (*SetGlobalMatrix)(int nameID, int value);
DWORD SetGlobalTextureOffset;
void (*SetGlobalTexture)(monoString *name, void *value);
DWORD SetGlobalTexture1Offset;
void (*SetGlobalTexture1)(int nameID, void *value);
}Shader;
struct Material {
DWORD CreateWithShaderOffset;
void (*CreateWithShader)(void *self, void *shader);
DWORD CreateWithMaterialOffset;
void (*CreateWithMaterial)(void *self, void *source);
DWORD CreateWithStringOffset;
void (*CreateWithString)(void *self);
DWORD ctor1Offset;
void (*ctor1)(void *_instance, void *source);
DWORD ctor2Offset;
void (*ctor2)(void *_instance, monoString *contents);
DWORD get_shaderOffset;
void *(*get_shader)(void *_instance);
DWORD set_shaderOffset;
void (*set_shader)(void *_instance, void *value);
DWORD get_colorOffset;
Color (*get_color)(void *_instance);
DWORD set_colorOffset;
void (*set_color)(void *_instance, Color value);
DWORD get_mainTextureOffset;
void *(*get_mainTexture)(void *_instance);
DWORD set_mainTextureOffset;
void (*set_mainTexture)(void *_instance, void *value);
DWORD get_mainTextureOffsetOffset;
DWORD set_mainTextureOffsetOffset;
DWORD get_mainTextureScaleOffset;
Vector2 (*get_mainTextureScale)(void *_instance);
DWORD set_mainTextureScaleOffset;
void (*set_mainTextureScale)(void *_instance, Vector2 value);
DWORD GetFirstPropertyNameIdByAttributeOffset;
int (*GetFirstPropertyNameIdByAttribute)(void *_instance, int attributeFlag);
DWORD HasPropertyOffset;
bool (*HasProperty)(void *_instance, int nameID);
DWORD HasProperty1Offset;
bool (*HasProperty1)(void *_instance, monoString *name);
DWORD get_renderQueueOffset;
int (*get_renderQueue)(void *_instance);
DWORD set_renderQueueOffset;
void (*set_renderQueue)(void *_instance, int value);
DWORD EnableKeywordOffset;
void (*EnableKeyword)(void *_instance, monoString *keyword);
DWORD DisableKeywordOffset;
void (*DisableKeyword)(void *_instance, monoString *keyword);
DWORD IsKeywordEnabledOffset;
bool (*IsKeywordEnabled)(void *_instance, monoString *keyword);
DWORD set_enableInstancingOffset;
void (*set_enableInstancing)(void *_instance, bool value);
DWORD get_passCountOffset;
int (*get_passCount)(void *_instance);
DWORD SetPassOffset;
bool (*SetPass)(void *_instance, int pass);
DWORD CopyPropertiesFromMaterialOffset;
void (*CopyPropertiesFromMaterial)(void *_instance, void *mat);
DWORD GetShaderKeywordsOffset;
DWORD get_shaderKeywordsOffset;
DWORD SetFloatImplOffset;
void (*SetFloatImpl)(void *_instance, int name, float value);
DWORD SetColorImplOffset;
void (*SetColorImpl)(void *_instance, int name, Color value);
DWORD SetMatrixImplOffset;
void (*SetMatrixImpl)(void *_instance, int name, int value);
DWORD SetTextureImplOffset;
void (*SetTextureImpl)(void *_instance, int name, void *value);
DWORD GetFloatImplOffset;
float (*GetFloatImpl)(void *_instance, int name);
DWORD GetColorImplOffset;
Color (*GetColorImpl)(void *_instance, int name);
DWORD GetTextureImplOffset;
void *(*GetTextureImpl)(void *_instance, int name);
DWORD GetTextureScaleAndOffsetImplOffset;
int(*GetTextureScaleAndOffsetImpl)(void *_instance, int name);
DWORD SetTextureOffsetImplOffset;
void (*SetTextureOffsetImpl)(void *_instance, int name, Vector2 offset);
DWORD SetTextureScaleImplOffset;
void (*SetTextureScaleImpl)(void *_instance, int name, Vector2 scale);
DWORD SetFloatOffset;
void (*SetFloat)(void *_instance, monoString *name, float value);
DWORD SetFloat1Offset;
void (*SetFloat1)(void *_instance, int nameID, float value);
DWORD SetIntOffset;
void (*SetInt)(void *_instance, monoString *name, int value);
DWORD SetColorOffset;
void (*SetColor)(void *_instance, monoString *name, Color value);
DWORD SetColor1Offset;
void (*SetColor1)(void *_instance, int nameID, Color value);
DWORD SetVectorOffset;
void (*SetVector)(void *_instance, monoString *name, int value);
DWORD SetVector1Offset;
void (*SetVector1)(void *_instance, int nameID, int value);
DWORD SetMatrixOffset;
void (*SetMatrix)(void *_instance, monoString *name, int value);
DWORD SetMatrix1Offset;
void (*SetMatrix1)(void *_instance, int nameID, int value);
DWORD SetTextureOffset;
void (*SetTexture)(void *_instance, monoString *name, void *value);
DWORD SetTexture1Offset;
void (*SetTexture1)(void *_instance, int nameID, void *value);
DWORD GetFloatOffset;
float (*GetFloat)(void *_instance, monoString *name);
DWORD GetFloat1Offset;
float (*GetFloat1)(void *_instance, int nameID);
DWORD GetColorOffset;
Color (*GetColor)(void *_instance, monoString *name);
DWORD GetColor1Offset;
Color (*GetColor1)(void *_instance, int nameID);
DWORD GetVectorOffset;
int(*GetVector)(void *_instance, monoString *name);
DWORD GetVector1Offset;
int(*GetVector1)(void *_instance, int nameID);
DWORD GetTextureOffset;
void *(*GetTexture)(void *_instance, monoString *name);
DWORD GetTexture1Offset;
void *(*GetTexture1)(void *_instance, int nameID);
DWORD SetTextureOffsetOffset;
DWORD SetTextureOffset1Offset;
void (*SetTextureOffset1)(void *_instance, int nameID, Vector2 value);
DWORD SetTextureScaleOffset;
void (*SetTextureScale)(void *_instance, monoString *name, Vector2 value);
DWORD SetTextureScale1Offset;
void (*SetTextureScale1)(void *_instance, int nameID, Vector2 value);
DWORD GetTextureOffsetOffset;
DWORD GetTextureOffset1Offset;
Vector2 (*GetTextureOffset1)(void *_instance, int nameID);
DWORD GetTextureScaleOffset;
Vector2 (*GetTextureScale)(void *_instance, monoString *name);
DWORD GetTextureScale1Offset;
Vector2 (*GetTextureScale1)(void *_instance, int nameID);
}Material;
struct LensFlare {
DWORD set_colorOffset;
void (*set_color)(void *_instance, Color value);
}LensFlare;
struct Projector {
DWORD get_materialOffset;
void *(*get_material)(void *_instance);
DWORD set_materialOffset;
void (*set_material)(void *_instance, void *value);
}Projector;
struct Light {
DWORD get_typeOffset;
int(*get_type)(void *_instance);
DWORD set_typeOffset;
void (*set_type)(void *_instance, int value);
DWORD get_spotAngleOffset;
float (*get_spotAngle)(void *_instance);
DWORD set_spotAngleOffset;
void (*set_spotAngle)(void *_instance, float value);
DWORD get_colorOffset;
Color (*get_color)(void *_instance);
DWORD set_colorOffset;
void (*set_color)(void *_instance, Color value);
DWORD get_intensityOffset;
float (*get_intensity)(void *_instance);
DWORD set_intensityOffset;
void (*set_intensity)(void *_instance, float value);
DWORD get_bounceIntensityOffset;
float (*get_bounceIntensity)(void *_instance);
DWORD set_bounceIntensityOffset;
void (*set_bounceIntensity)(void *_instance, float value);
DWORD get_rangeOffset;
float (*get_range)(void *_instance);
DWORD set_rangeOffset;
void (*set_range)(void *_instance, float value);
DWORD get_bakingOutputOffset;
int(*get_bakingOutput)(void *_instance);
DWORD set_bakingOutputOffset;
void (*set_bakingOutput)(void *_instance, int value);
DWORD set_cullingMaskOffset;
void (*set_cullingMask)(void *_instance, int value);
DWORD get_shadowsOffset;
int(*get_shadows)(void *_instance);
DWORD set_renderModeOffset;
void (*set_renderMode)(void *_instance, int value);
}Light;
struct MeshFilter {
DWORD DontStripMeshFilterOffset;
void (*DontStripMeshFilter)(void *_instance);
DWORD get_sharedMeshOffset;
void *(*get_sharedMesh)(void *_instance);
DWORD set_sharedMeshOffset;
void (*set_sharedMesh)(void *_instance, void *value);
DWORD get_meshOffset;
void *(*get_mesh)(void *_instance);
DWORD set_meshOffset;
void (*set_mesh)(void *_instance, void *value);
}MeshFilter;
struct SkinnedMeshRenderer {
DWORD get_updateWhenOffscreenOffset;
bool (*get_updateWhenOffscreen)(void *_instance);
DWORD set_updateWhenOffscreenOffset;
void (*set_updateWhenOffscreen)(void *_instance, bool value);
DWORD get_bonesOffset;
DWORD get_sharedMeshOffset;
void *(*get_sharedMesh)(void *_instance);
DWORD set_sharedMeshOffset;
void (*set_sharedMesh)(void *_instance, void *value);
DWORD SetLocalAABBOffset;
void (*SetLocalAABB)(void *_instance, int b);
DWORD set_localBoundsOffset;
void (*set_localBounds)(void *_instance, int value);
}SkinnedMeshRenderer;
struct MeshRenderer {
DWORD DontStripMeshRendererOffset;
void (*DontStripMeshRenderer)(void *_instance);
DWORD get_additionalVertexStreamsOffset;
void *(*get_additionalVertexStreams)(void *_instance);
DWORD set_additionalVertexStreamsOffset;
void (*set_additionalVertexStreams)(void *_instance, void *value);
}MeshRenderer;
struct LODGroup {
DWORD get_lodCountOffset;
int (*get_lodCount)(void *_instance);
DWORD RecalculateBoundsOffset;
void (*RecalculateBounds)(void *_instance);
DWORD GetLODsOffset;
}LODGroup;
struct LightProbeGroup {
DWORD get_probePositionsOffset;
}LightProbeGroup;
struct Mesh {
DWORD Internal_CreateOffset;
void (*Internal_Create)(void *mono);
DWORD FromInstanceIDOffset;
void *(*FromInstanceID)(int id);
DWORD GetTrianglesImplOffset;
DWORD GetIndicesImplOffset;
DWORD SetIndicesImplOffset;
void (*SetIndicesImpl)(void *_instance, int submesh, int topology, int indicesFormat, void *indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex);
DWORD PrintErrorCantAccessChannelOffset;
void (*PrintErrorCantAccessChannel)(void *_instance, int ch);
DWORD HasVertexAttributeOffset;
bool (*HasVertexAttribute)(void *_instance, int attr);
DWORD SetArrayForChannelImplOffset;
void (*SetArrayForChannelImpl)(void *_instance, int channel, int format, int dim, void *values, int arraySize, int valuesStart, int valuesCount);
DWORD GetAllocArrayFromChannelImplOffset;
void *(*GetAllocArrayFromChannelImpl)(void *_instance, int channel, int format, int dim);
DWORD GetBoneWeightsImplOffset;
DWORD get_bindposesOffset;
DWORD get_isReadableOffset;
bool (*get_isReadable)(void *_instance);
DWORD get_canAccessOffset;
bool (*get_canAccess)(void *_instance);
DWORD get_vertexCountOffset;
int (*get_vertexCount)(void *_instance);
DWORD get_subMeshCountOffset;
int (*get_subMeshCount)(void *_instance);
DWORD set_subMeshCountOffset;
void (*set_subMeshCount)(void *_instance, int value);
DWORD get_boundsOffset;
int(*get_bounds)(void *_instance);
DWORD set_boundsOffset;
void (*set_bounds)(void *_instance, int value);
DWORD ClearImplOffset;
void (*ClearImpl)(void *_instance, bool keepVertexLayout);
DWORD RecalculateBoundsImplOffset;
void (*RecalculateBoundsImpl)(void *_instance);
DWORD RecalculateNormalsImplOffset;
void (*RecalculateNormalsImpl)(void *_instance);
DWORD MarkDynamicImplOffset;
void (*MarkDynamicImpl)(void *_instance);
DWORD GetUVChannelOffset;
int(*GetUVChannel)(void *_instance, int uvIndex);
DWORD DefaultDimensionForChannelOffset;
int (*DefaultDimensionForChannel)(int channel);
DWORD SetSizedArrayForChannelOffset;
void (*SetSizedArrayForChannel)(void *_instance, int channel, int format, int dim, void *values, int valuesArrayLength, int valuesStart, int valuesCount);
DWORD get_verticesOffset;
DWORD get_normalsOffset;
DWORD get_tangentsOffset;
DWORD get_uvOffset;
DWORD get_uv2Offset;
DWORD get_uv3Offset;
DWORD get_uv4Offset;
DWORD get_colorsOffset;
DWORD get_colors32Offset;
DWORD PrintErrorCantAccessIndicesOffset;
void (*PrintErrorCantAccessIndices)(void *_instance);
DWORD CheckCanAccessSubmeshOffset;
bool (*CheckCanAccessSubmesh)(void *_instance, int submesh, bool errorAboutTriangles);
DWORD CheckCanAccessSubmeshTrianglesOffset;
bool (*CheckCanAccessSubmeshTriangles)(void *_instance, int submesh);
DWORD CheckCanAccessSubmeshIndicesOffset;
bool (*CheckCanAccessSubmeshIndices)(void *_instance, int submesh);
DWORD get_trianglesOffset;
DWORD GetTrianglesOffset;
DWORD GetTriangles1Offset;
DWORD GetIndicesOffset;
DWORD GetIndices1Offset;
DWORD CheckIndicesArrayRangeOffset;
void (*CheckIndicesArrayRange)(void *_instance, int valuesLength, int start, int length);
DWORD SetTrianglesImplOffset;
void (*SetTrianglesImpl)(void *_instance, int submesh, int indicesFormat, void *triangles, int trianglesArrayLength, int start, int length, bool calculateBounds, int baseVertex);
DWORD get_boneWeightsOffset;
DWORD ClearOffset;
void (*Clear)(void *_instance, bool keepVertexLayout);
DWORD Clear1Offset;
void (*Clear1)(void *_instance);
DWORD RecalculateBoundsOffset;
void (*RecalculateBounds)(void *_instance);
DWORD RecalculateNormalsOffset;
void (*RecalculateNormals)(void *_instance);
DWORD MarkDynamicOffset;
void (*MarkDynamic)(void *_instance);
}Mesh;
struct StaticBatchingHelper {
}StaticBatchingHelper;
struct BoneWeight {
DWORD get_weight0Offset;
float (*get_weight0)(void *_instance);
DWORD set_weight0Offset;
void (*set_weight0)(void *_instance, float value);
DWORD get_weight1Offset;
float (*get_weight1)(void *_instance);
DWORD set_weight1Offset;
void (*set_weight1)(void *_instance, float value);
DWORD get_weight2Offset;
float (*get_weight2)(void *_instance);
DWORD set_weight2Offset;
void (*set_weight2)(void *_instance, float value);
DWORD get_weight3Offset;
float (*get_weight3)(void *_instance);
DWORD set_weight3Offset;
void (*set_weight3)(void *_instance, float value);
DWORD get_boneIndex0Offset;
int (*get_boneIndex0)(void *_instance);
DWORD set_boneIndex0Offset;
void (*set_boneIndex0)(void *_instance, int value);
DWORD get_boneIndex1Offset;
int (*get_boneIndex1)(void *_instance);
DWORD set_boneIndex1Offset;
void (*set_boneIndex1)(void *_instance, int value);
DWORD get_boneIndex2Offset;
int (*get_boneIndex2)(void *_instance);
DWORD set_boneIndex2Offset;
void (*set_boneIndex2)(void *_instance, int value);
DWORD get_boneIndex3Offset;
int (*get_boneIndex3)(void *_instance);
DWORD set_boneIndex3Offset;
void (*set_boneIndex3)(void *_instance, int value);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, int other);
}BoneWeight;
struct CombineInstance {
DWORD get_meshOffset;
void *(*get_mesh)(void *_instance);
DWORD set_meshOffset;
void (*set_mesh)(void *_instance, void *value);
DWORD set_transformOffset;
void (*set_transform)(void *_instance, int value);
}CombineInstance;
struct Texture {
DWORD get_mipmapCountOffset;
int (*get_mipmapCount)(void *_instance);
DWORD GetDataWidthOffset;
int (*GetDataWidth)(void *_instance);
DWORD GetDataHeightOffset;
int (*GetDataHeight)(void *_instance);
DWORD GetDimensionOffset;
int(*GetDimension)(void *_instance);
DWORD get_widthOffset;
int (*get_width)(void *_instance);
DWORD set_widthOffset;
void (*set_width)(void *_instance, int value);
DWORD get_heightOffset;
int (*get_height)(void *_instance);
DWORD set_heightOffset;
void (*set_height)(void *_instance, int value);
DWORD get_dimensionOffset;
int(*get_dimension)(void *_instance);
DWORD set_dimensionOffset;
void (*set_dimension)(void *_instance, int value);
DWORD get_isReadableOffset;
bool (*get_isReadable)(void *_instance);
DWORD get_wrapModeOffset;
int(*get_wrapMode)(void *_instance);
DWORD set_wrapModeOffset;
void (*set_wrapMode)(void *_instance, int value);
DWORD set_filterModeOffset;
void (*set_filterMode)(void *_instance, int value);
DWORD get_anisoLevelOffset;
int (*get_anisoLevel)(void *_instance);
DWORD set_anisoLevelOffset;
void (*set_anisoLevel)(void *_instance, int value);
DWORD get_texelSizeOffset;
Vector2 (*get_texelSize)(void *_instance);
DWORD ValidateFormatOffset;
bool (*ValidateFormat)(void *_instance, int format);
DWORD ValidateFormat1Offset;
bool (*ValidateFormat1)(void *_instance, int format, int usage);
DWORD CreateNonReadableExceptionOffset;
void *(*CreateNonReadableException)(void *_instance, void *t);
}Texture;
struct Texture2D {
DWORD get_formatOffset;
int(*get_format)(void *_instance);
DWORD get_whiteTextureOffset;
void *(*get_whiteTexture)();
DWORD get_blackTextureOffset;
void *(*get_blackTexture)();
DWORD get_isReadableOffset;
bool (*get_isReadable)(void *_instance);
DWORD ApplyImplOffset;
void (*ApplyImpl)(void *_instance, bool updateMipmaps, bool makeNoLongerReadable);
DWORD ResizeImplOffset;
bool (*ResizeImpl)(void *_instance, int width, int height);
DWORD SetPixelImplOffset;
void (*SetPixelImpl)(void *_instance, int image, int x, int y, Color color);
DWORD GetPixelImplOffset;
Color (*GetPixelImpl)(void *_instance, int image, int x, int y);
DWORD GetPixelBilinearImplOffset;
Color (*GetPixelBilinearImpl)(void *_instance, int image, float u, float v);
DWORD ResizeWithFormatImplOffset;
bool (*ResizeWithFormatImpl)(void *_instance, int width, int height, int format, bool hasMipMap);
DWORD ReadPixelsImplOffset;
void (*ReadPixelsImpl)(void *_instance, int source, int destX, int destY, bool recalculateMipMaps);
DWORD GetPixelsOffset;
DWORD GetPixels1Offset;
DWORD GetPixels32Offset;
DWORD GetPixels321Offset;
DWORD ctor1Offset;
void (*ctor1)(void *_instance, int width, int height, int textureFormat, bool mipChain, bool linear);
DWORD ctor2Offset;
void (*ctor2)(void *_instance, int width, int height, int textureFormat, bool mipChain);
DWORD ctor3Offset;
void (*ctor3)(void *_instance, int width, int height);
DWORD SetPixelOffset;
void (*SetPixel)(void *_instance, int x, int y, Color color);
DWORD GetPixelOffset;
Color (*GetPixel)(void *_instance, int x, int y);
DWORD GetPixelBilinearOffset;
Color (*GetPixelBilinear)(void *_instance, float u, float v);
DWORD ApplyOffset;
void (*Apply)(void *_instance, bool updateMipmaps, bool makeNoLongerReadable);
DWORD Apply1Offset;
void (*Apply1)(void *_instance, bool updateMipmaps);
DWORD Apply2Offset;
void (*Apply2)(void *_instance);
DWORD ResizeOffset;
bool (*Resize)(void *_instance, int width, int height);
DWORD Resize1Offset;
bool (*Resize1)(void *_instance, int width, int height, int format, bool hasMipMap);
DWORD ReadPixelsOffset;
void (*ReadPixels)(void *_instance, int source, int destX, int destY, bool recalculateMipMaps);
DWORD ReadPixels1Offset;
void (*ReadPixels1)(void *_instance, int source, int destX, int destY);
DWORD GetPixels11Offset;
DWORD GetPixels2Offset;
DWORD EncodeToJPGOffset;
}Texture2D;
struct Cubemap {
DWORD get_formatOffset;
int(*get_format)(void *_instance);
DWORD ApplyImplOffset;
void (*ApplyImpl)(void *_instance, bool updateMipmaps, bool makeNoLongerReadable);
DWORD get_isReadableOffset;
bool (*get_isReadable)(void *_instance);
DWORD GetPixelsOffset;
DWORD GetPixels1Offset;
DWORD ctor1Offset;
void (*ctor1)(void *_instance, int width, int format, int flags);
DWORD ctor2Offset;
void (*ctor2)(void *_instance, int width, int format, int mipCount);
DWORD ctor3Offset;
void (*ctor3)(void *_instance, int width, int format, int flags, int mipCount);
DWORD ctor6Offset;
void (*ctor6)(void *_instance, int width, int textureFormat, bool mipChain);
DWORD ApplyOffset;
void (*Apply)(void *_instance, bool updateMipmaps, bool makeNoLongerReadable);
DWORD Apply1Offset;
void (*Apply1)(void *_instance, bool updateMipmaps);
}Cubemap;
struct Texture3D {
DWORD get_isReadableOffset;
bool (*get_isReadable)(void *_instance);
DWORD Internal_CreateImplOffset;
bool (*Internal_CreateImpl)(void *mono, int w, int h, int d, int mipCount, int format, int flags);
DWORD Internal_CreateOffset;
void (*Internal_Create)(void *mono, int w, int h, int d, int mipCount, int format, int flags);
DWORD ApplyImplOffset;
void (*ApplyImpl)(void *_instance, bool updateMipmaps, bool makeNoLongerReadable);
DWORD ctor1Offset;
void (*ctor1)(void *_instance, int width, int height, int depth, int format, int flags);
DWORD ctor2Offset;
void (*ctor2)(void *_instance, int width, int height, int depth, int format, int flags, int mipCount);
DWORD ctor3Offset;
void (*ctor3)(void *_instance, int width, int height, int depth, int textureFormat, int mipCount);
DWORD ctor4Offset;
void (*ctor4)(void *_instance, int width, int height, int depth, int textureFormat, bool mipChain);
DWORD ApplyOffset;
void (*Apply)(void *_instance, bool updateMipmaps, bool makeNoLongerReadable);
DWORD Apply1Offset;
void (*Apply1)(void *_instance);
}Texture3D;
struct Texture2DArray {
DWORD get_isReadableOffset;
bool (*get_isReadable)(void *_instance);
DWORD Internal_CreateImplOffset;
bool (*Internal_CreateImpl)(void *mono, int w, int h, int d, int mipCount, int format, int flags);
DWORD Internal_CreateOffset;
void (*Internal_Create)(void *mono, int w, int h, int d, int mipCount, int format, int flags);
DWORD ctor1Offset;
void (*ctor1)(void *_instance, int width, int height, int depth, int format, int flags);
DWORD ctor2Offset;
void (*ctor2)(void *_instance, int width, int height, int depth, int format, int flags, int mipCount);
DWORD ctor3Offset;
void (*ctor3)(void *_instance, int width, int height, int depth, int textureFormat, int mipCount, bool linear);
DWORD ctor4Offset;
void (*ctor4)(void *_instance, int width, int height, int depth, int textureFormat, bool mipChain, bool linear);
DWORD ctor5Offset;
void (*ctor5)(void *_instance, int width, int height, int depth, int textureFormat, bool mipChain);
}Texture2DArray;
struct CubemapArray {
DWORD get_isReadableOffset;
bool (*get_isReadable)(void *_instance);
DWORD Internal_CreateImplOffset;
bool (*Internal_CreateImpl)(void *mono, int ext, int count, int mipCount, int format, int flags);
DWORD Internal_CreateOffset;
void (*Internal_Create)(void *mono, int ext, int count, int mipCount, int format, int flags);
DWORD ctor1Offset;
void (*ctor1)(void *_instance, int width, int cubemapCount, int format, int flags);
DWORD ctor2Offset;
void (*ctor2)(void *_instance, int width, int cubemapCount, int format, int flags, int mipCount);
DWORD ctor3Offset;
void (*ctor3)(void *_instance, int width, int cubemapCount, int textureFormat, int mipCount, bool linear);
DWORD ctor4Offset;
void (*ctor4)(void *_instance, int width, int cubemapCount, int textureFormat, bool mipChain, bool linear);
DWORD ctor5Offset;
void (*ctor5)(void *_instance, int width, int cubemapCount, int textureFormat, bool mipChain);
}CubemapArray;
struct RenderTexture {
DWORD get_widthOffset;
int (*get_width)(void *_instance);
DWORD set_widthOffset;
void (*set_width)(void *_instance, int value);
DWORD get_heightOffset;
int (*get_height)(void *_instance);
DWORD set_heightOffset;
void (*set_height)(void *_instance, int value);
DWORD get_dimensionOffset;
int(*get_dimension)(void *_instance);
DWORD set_dimensionOffset;
void (*set_dimension)(void *_instance, int value);
DWORD get_graphicsFormatOffset;
int(*get_graphicsFormat)(void *_instance);
DWORD set_graphicsFormatOffset;
void (*set_graphicsFormat)(void *_instance, int value);
DWORD set_useMipMapOffset;
void (*set_useMipMap)(void *_instance, bool value);
DWORD get_formatOffset;
int(*get_format)(void *_instance);
DWORD set_autoGenerateMipsOffset;
void (*set_autoGenerateMips)(void *_instance, bool value);
DWORD set_antiAliasingOffset;
void (*set_antiAliasing)(void *_instance, int value);
DWORD GetActiveOffset;
void *(*GetActive)();
DWORD SetActiveOffset;
void (*SetActive)(void *rt);
DWORD get_activeOffset;
void *(*get_active)();
DWORD set_activeOffset;
void (*set_active)(void *value);
DWORD GetColorBufferOffset;
int(*GetColorBuffer)(void *_instance);
DWORD GetDepthBufferOffset;
int(*GetDepthBuffer)(void *_instance);
DWORD get_colorBufferOffset;
int(*get_colorBuffer)(void *_instance);
DWORD get_depthBufferOffset;
int(*get_depthBuffer)(void *_instance);
DWORD DiscardContentsOffset;
void (*DiscardContents)(void *_instance, bool discardColor, bool discardDepth);
DWORD MarkRestoreExpectedOffset;
void (*MarkRestoreExpected)(void *_instance);
DWORD DiscardContents1Offset;
void (*DiscardContents1)(void *_instance);
DWORD CreateOffset;
bool (*Create)(void *_instance);
DWORD ReleaseOffset;
void (*Release)(void *_instance);
DWORD IsCreatedOffset;
bool (*IsCreated)(void *_instance);
DWORD SetSRGBReadWriteOffset;
void (*SetSRGBReadWrite)(void *_instance, bool srgb);
DWORD Internal_CreateOffset;
void (*Internal_Create)(void *rt);
DWORD SetRenderTextureDescriptorOffset;
void (*SetRenderTextureDescriptor)(void *_instance, int desc);
DWORD GetDescriptorOffset;
int(*GetDescriptor)(void *_instance);
DWORD GetTemporary_InternalOffset;
void *(*GetTemporary_Internal)(int desc);
DWORD ReleaseTemporaryOffset;
void (*ReleaseTemporary)(void *temp);
DWORD get_depthOffset;
int (*get_depth)(void *_instance);
DWORD set_depthOffset;
void (*set_depth)(void *_instance, int value);
DWORD ctor1Offset;
void (*ctor1)(void *_instance, int desc);
DWORD ctor2Offset;
void (*ctor2)(void *_instance, void *textureToCopy);
DWORD ctor3Offset;
void (*ctor3)(void *_instance, int width, int height, int depth, int format);
DWORD ctor4Offset;
void (*ctor4)(void *_instance, int width, int height, int depth, int format);
DWORD ctor5Offset;
void (*ctor5)(void *_instance, int width, int height, int depth, int format, int mipCount);
DWORD ctor6Offset;
void (*ctor6)(void *_instance, int width, int height, int depth, int format, int readWrite);
DWORD ctor7Offset;
void (*ctor7)(void *_instance, int width, int height, int depth, int format);
DWORD ctor8Offset;
void (*ctor8)(void *_instance, int width, int height, int depth);
DWORD ctor9Offset;
void (*ctor9)(void *_instance, int width, int height, int depth, int format, int mipCount);
DWORD get_descriptorOffset;
int(*get_descriptor)(void *_instance);
DWORD set_descriptorOffset;
void (*set_descriptor)(void *_instance, int value);
DWORD ValidateRenderTextureDescOffset;
void (*ValidateRenderTextureDesc)(int desc);
DWORD GetCompatibleFormatOffset;
int(*GetCompatibleFormat)(int renderTextureFormat, int readWrite);
DWORD GetTemporaryOffset;
void *(*GetTemporary)(int desc);
DWORD GetTemporaryImplOffset;
void *(*GetTemporaryImpl)(int width, int height, int depthBuffer, int format, int antiAliasing, int memorylessMode, int vrUsage, bool useDynamicScale);
DWORD GetTemporary1Offset;
void *(*GetTemporary1)(int width, int height, int depthBuffer, int format, int readWrite);
DWORD GetTemporary2Offset;
void *(*GetTemporary2)(int width, int height, int depthBuffer, int format);
DWORD GetTemporary3Offset;
void *(*GetTemporary3)(int width, int height, int depthBuffer);
DWORD GetTemporary4Offset;
void *(*GetTemporary4)(int width, int height);
DWORD set_isCubemapOffset;
void (*set_isCubemap)(void *_instance, bool value);
}RenderTexture;
struct RenderTextureDescriptor {
DWORD get_widthOffset;
int (*get_width)(void *_instance);
DWORD set_widthOffset;
void (*set_width)(void *_instance, int value);
DWORD get_heightOffset;
int (*get_height)(void *_instance);
DWORD set_heightOffset;
void (*set_height)(void *_instance, int value);
DWORD get_msaaSamplesOffset;
int (*get_msaaSamples)(void *_instance);
DWORD set_msaaSamplesOffset;
void (*set_msaaSamples)(void *_instance, int value);
DWORD get_volumeDepthOffset;
int (*get_volumeDepth)(void *_instance);
DWORD set_volumeDepthOffset;
void (*set_volumeDepth)(void *_instance, int value);
DWORD set_mipCountOffset;
void (*set_mipCount)(void *_instance, int value);
DWORD get_graphicsFormatOffset;
int(*get_graphicsFormat)(void *_instance);
DWORD set_graphicsFormatOffset;
void (*set_graphicsFormat)(void *_instance, int value);
DWORD get_depthBufferBitsOffset;
int (*get_depthBufferBits)(void *_instance);
DWORD set_depthBufferBitsOffset;
void (*set_depthBufferBits)(void *_instance, int value);
DWORD set_dimensionOffset;
void (*set_dimension)(void *_instance, int value);
DWORD set_shadowSamplingModeOffset;
void (*set_shadowSamplingMode)(void *_instance, int value);
DWORD get_vrUsageOffset;
int(*get_vrUsage)(void *_instance);
DWORD set_vrUsageOffset;
void (*set_vrUsage)(void *_instance, int value);
DWORD set_memorylessOffset;
void (*set_memoryless)(void *_instance, int value);
DWORD ctor1Offset;
void (*ctor1)(void *_instance, int width, int height, int colorFormat, int depthBufferBits, int mipCount);
DWORD SetOrClearRenderTextureCreationFlagOffset;
void (*SetOrClearRenderTextureCreationFlag)(void *_instance, bool value, int flag);
DWORD set_createdFromScriptOffset;
void (*set_createdFromScript)(void *_instance, bool value);
DWORD set_useDynamicScaleOffset;
void (*set_useDynamicScale)(void *_instance, bool value);
}RenderTextureDescriptor;
struct Handheld {
DWORD PlayFullScreenMovieOffset;
bool (*PlayFullScreenMovie)(monoString *path, Color bgColor, int controlMode, int scalingMode);
DWORD PlayFullScreenMovie_BindingsOffset;
bool (*PlayFullScreenMovie_Bindings)(monoString *path, Color bgColor, int controlMode, int scalingMode);
}Handheld;
struct Hash128 {
DWORD CompareToOffset;
int (*CompareTo)(void *_instance, int rhs);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
DWORD Internal_Hash128ToStringOffset;
monoString *(*Internal_Hash128ToString)(int hash128);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, int obj);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD op_EqualityOffset;
bool (*op_Equality)(int hash1, int hash2);
DWORD op_LessThanOffset;
bool (*op_LessThan)(int x, int y);
DWORD op_GreaterThanOffset;
bool (*op_GreaterThan)(int x, int y);
}Hash128;
struct Cursor {
DWORD SetCursorOffset;
void (*SetCursor)(void *texture, Vector2 hotspot, int cursorMode);
DWORD set_visibleOffset;
void (*set_visible)(bool value);
DWORD get_lockStateOffset;
int(*get_lockState)();
DWORD set_lockStateOffset;
void (*set_lockState)(int value);
}Cursor;
struct ILogHandler {
}ILogHandler;
struct ILogger {
}ILogger;
struct Logger {
DWORD get_logHandlerOffset;
void *(*get_logHandler)(void *_instance);
DWORD set_logHandlerOffset;
void (*set_logHandler)(void *_instance, void *value);
DWORD get_logEnabledOffset;
bool (*get_logEnabled)(void *_instance);
DWORD set_logEnabledOffset;
void (*set_logEnabled)(void *_instance, bool value);
DWORD get_filterLogTypeOffset;
int(*get_filterLogType)(void *_instance);
DWORD set_filterLogTypeOffset;
void (*set_filterLogType)(void *_instance, int value);
DWORD IsLogTypeAllowedOffset;
bool (*IsLogTypeAllowed)(void *_instance, int logType);
DWORD LogExceptionOffset;
void (*LogException)(void *_instance, void *exception, void *context);
}Logger;
struct UnityLogWriter {
DWORD WriteStringToUnityLogOffset;
void (*WriteStringToUnityLog)(monoString *s);
DWORD WriteStringToUnityLogImplOffset;
void (*WriteStringToUnityLogImpl)(monoString *s);
DWORD InitOffset;
void (*Init)();
DWORD get_EncodingOffset;
void *(*get_Encoding)(void *_instance);
DWORD Write1Offset;
void (*Write1)(void *_instance, monoString *s);
}UnityLogWriter;
struct UColor {
DWORD ctor1Offset;
void (*ctor1)(void *_instance, float r, float g, float b);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, Color other);
DWORD op_AdditionOffset;
Color (*op_Addition)(Color a, Color b);
DWORD op_SubtractionOffset;
Color (*op_Subtraction)(Color a, Color b);
DWORD op_MultiplyOffset;
Color (*op_Multiply)(Color a, Color b);
DWORD op_Multiply1Offset;
Color (*op_Multiply1)(Color a, float b);
DWORD op_Multiply2Offset;
Color (*op_Multiply2)(float b, Color a);
DWORD op_EqualityOffset;
bool (*op_Equality)(Color lhs, Color rhs);
DWORD op_InequalityOffset;
bool (*op_Inequality)(Color lhs, Color rhs);
DWORD LerpOffset;
Color (*Lerp)(Color a, Color b, float t);
DWORD RGBMultipliedOffset;
Color (*RGBMultiplied)(void *_instance, float multiplier);
DWORD get_redOffset;
Color (*get_red)();
DWORD get_greenOffset;
Color (*get_green)();
DWORD get_blueOffset;
Color (*get_blue)();
DWORD get_whiteOffset;
Color (*get_white)();
DWORD get_blackOffset;
Color (*get_black)();
DWORD get_yellowOffset;
Color (*get_yellow)();
DWORD get_cyanOffset;
Color (*get_cyan)();
DWORD get_magentaOffset;
Color (*get_magenta)();
DWORD get_greyOffset;
Color (*get_grey)();
DWORD get_clearOffset;
Color (*get_clear)();
DWORD get_linearOffset;
Color (*get_linear)(void *_instance);
DWORD get_maxColorComponentOffset;
float (*get_maxColorComponent)(void *_instance);
DWORD op_ImplicitOffset;
int(*op_Implicit)(Color c);
DWORD op_Implicit1Offset;
Color (*op_Implicit1)(int v);
DWORD get_ItemOffset;
float (*get_Item)(void *_instance, int index);
DWORD HSVToRGBOffset;
Color (*HSVToRGB)(float H, float S, float V, bool hdr);
}UColor;
struct Color32 {
DWORD op_ImplicitOffset;
int(*op_Implicit)(Color c);
DWORD op_Implicit1Offset;
Color (*op_Implicit1)(int c);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
}Color32;
struct ColorUtility {
DWORD ToHtmlStringRGBOffset;
monoString *(*ToHtmlStringRGB)(Color color);
DWORD ToHtmlStringRGBAOffset;
monoString *(*ToHtmlStringRGBA)(Color color);
}ColorUtility;
struct Gradient {
DWORD InitOffset;
DWORD CleanupOffset;
void (*Cleanup)(void *_instance);
DWORD FinalizeOffset;
void (*Finalize)(void *_instance);
DWORD EvaluateOffset;
Color (*Evaluate)(void *_instance, float time);
DWORD get_colorKeysOffset;
DWORD get_alphaKeysOffset;
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, void *other);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
}Gradient;
struct Matrix4x4 {
DWORD GetLossyScaleOffset;
Vector3 (*GetLossyScale)(void *_instance);
DWORD get_lossyScaleOffset;
Vector3 (*get_lossyScale)(void *_instance);
DWORD TRSOffset;
int(*TRS)(Vector3 pos, int q, Vector3 s);
DWORD SetTRSOffset;
void (*SetTRS)(void *_instance, Vector3 pos, int q, Vector3 s);
DWORD InverseOffset;
int(*Inverse)(int m);
DWORD get_inverseOffset;
int(*get_inverse)(void *_instance);
DWORD TransposeOffset;
int(*Transpose)(int m);
DWORD get_transposeOffset;
int(*get_transpose)(void *_instance);
DWORD get_ItemOffset;
float (*get_Item)(void *_instance, int row, int column);
DWORD set_ItemOffset;
void (*set_Item)(void *_instance, int row, int column, float value);
DWORD get_Item1Offset;
float (*get_Item1)(void *_instance, int index);
DWORD set_Item1Offset;
void (*set_Item1)(void *_instance, int index, float value);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, int other);
DWORD op_MultiplyOffset;
int(*op_Multiply)(int lhs, int rhs);
DWORD op_Multiply1Offset;
int(*op_Multiply1)(int lhs, int vector);
DWORD op_EqualityOffset;
bool (*op_Equality)(int lhs, int rhs);
DWORD GetColumnOffset;
int(*GetColumn)(void *_instance, int index);
DWORD GetRowOffset;
int(*GetRow)(void *_instance, int index);
DWORD SetRowOffset;
void (*SetRow)(void *_instance, int index, int row);
DWORD MultiplyPointOffset;
Vector3 (*MultiplyPoint)(void *_instance, Vector3 point);
DWORD MultiplyPoint3x4Offset;
Vector3 (*MultiplyPoint3x4)(void *_instance, Vector3 point);
DWORD MultiplyVectorOffset;
Vector3 (*MultiplyVector)(void *_instance, Vector3 vector);
DWORD get_identityOffset;
int(*get_identity)();
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
}Matrix4x4;
struct UVector3 {
DWORD SlerpOffset;
Vector3 (*Slerp)(Vector3 a, Vector3 b, float t);
DWORD LerpOffset;
Vector3 (*Lerp)(Vector3 a, Vector3 b, float t);
DWORD MoveTowardsOffset;
Vector3 (*MoveTowards)(Vector3 current, Vector3 target, float maxDistanceDelta);
DWORD get_ItemOffset;
float (*get_Item)(void *_instance, int index);
DWORD set_ItemOffset;
void (*set_Item)(void *_instance, int index, float value);
DWORD ctor1Offset;
void (*ctor1)(void *_instance, float x, float y);
DWORD SetOffset;
void (*Set)(void *_instance, float newX, float newY, float newZ);
DWORD ScaleOffset;
Vector3 (*Scale)(Vector3 a, Vector3 b);
DWORD Scale1Offset;
void (*Scale1)(void *_instance, Vector3 scale);
DWORD CrossOffset;
Vector3 (*Cross)(Vector3 lhs, Vector3 rhs);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, Vector3 other);
DWORD NormalizeOffset;
Vector3 (*Normalize)(Vector3 value);
DWORD Normalize1Offset;
void (*Normalize1)(void *_instance);
DWORD get_normalizedOffset;
Vector3 (*get_normalized)(void *_instance);
DWORD DotOffset;
float (*Dot)(Vector3 lhs, Vector3 rhs);
DWORD ProjectOffset;
Vector3 (*Project)(Vector3 vector, Vector3 onNormal);
DWORD AngleOffset;
float (*Angle)(Vector3 from, Vector3 to);
DWORD DistanceOffset;
float (*Distance)(Vector3 a, Vector3 b);
DWORD MagnitudeOffset;
float (*Magnitude)(Vector3 vector);
DWORD get_magnitudeOffset;
float (*get_magnitude)(void *_instance);
DWORD SqrMagnitudeOffset;
float (*SqrMagnitude)(Vector3 vector);
DWORD get_sqrMagnitudeOffset;
float (*get_sqrMagnitude)(void *_instance);
DWORD MinOffset;
Vector3 (*Min)(Vector3 lhs, Vector3 rhs);
DWORD MaxOffset;
Vector3 (*Max)(Vector3 lhs, Vector3 rhs);
DWORD get_zeroOffset;
Vector3 (*get_zero)();
DWORD get_oneOffset;
Vector3 (*get_one)();
DWORD get_forwardOffset;
Vector3 (*get_forward)();
DWORD get_backOffset;
Vector3 (*get_back)();
DWORD get_upOffset;
Vector3 (*get_up)();
DWORD get_downOffset;
Vector3 (*get_down)();
DWORD get_leftOffset;
Vector3 (*get_left)();
DWORD get_rightOffset;
Vector3 (*get_right)();
DWORD op_AdditionOffset;
Vector3 (*op_Addition)(Vector3 a, Vector3 b);
DWORD op_SubtractionOffset;
Vector3 (*op_Subtraction)(Vector3 a, Vector3 b);
DWORD op_UnaryNegationOffset;
Vector3 (*op_UnaryNegation)(Vector3 a);
DWORD op_MultiplyOffset;
Vector3 (*op_Multiply)(Vector3 a, float d);
DWORD op_Multiply1Offset;
Vector3 (*op_Multiply1)(float d, Vector3 a);
DWORD op_DivisionOffset;
Vector3 (*op_Division)(Vector3 a, float d);
DWORD op_EqualityOffset;
bool (*op_Equality)(Vector3 lhs, Vector3 rhs);
DWORD op_InequalityOffset;
bool (*op_Inequality)(Vector3 lhs, Vector3 rhs);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
DWORD ToString1Offset;
monoString *(*ToString1)(void *_instance, monoString *format);
DWORD Slerp_InjectedOffset;
void (*Slerp_Injected)(Vector3 *a, Vector3 *b, float t, Vector3 *ret);
}UVector3;
struct Quaternion {
DWORD FromToRotationOffset;
int(*FromToRotation)(Vector3 fromDirection, Vector3 toDirection);
DWORD InverseOffset;
int(*Inverse)(int rotation);
DWORD SlerpOffset;
int(*Slerp)(int a, int b, float t);
DWORD SlerpUnclampedOffset;
int(*SlerpUnclamped)(int a, int b, float t);
DWORD LerpOffset;
int(*Lerp)(int a, int b, float t);
DWORD Internal_FromEulerRadOffset;
int(*Internal_FromEulerRad)(Vector3 euler);
DWORD Internal_ToEulerRadOffset;
Vector3 (*Internal_ToEulerRad)(int rotation);
DWORD AngleAxisOffset;
int(*AngleAxis)(float angle, Vector3 axis);
DWORD LookRotationOffset;
int(*LookRotation)(Vector3 forward, Vector3 upwards);
DWORD LookRotation1Offset;
int(*LookRotation1)(Vector3 forward);
DWORD get_identityOffset;
int(*get_identity)();
DWORD op_MultiplyOffset;
int(*op_Multiply)(int lhs, int rhs);
DWORD op_Multiply1Offset;
Vector3 (*op_Multiply1)(int rotation, Vector3 point);
DWORD IsEqualUsingDotOffset;
bool (*IsEqualUsingDot)(float dot);
DWORD op_EqualityOffset;
bool (*op_Equality)(int lhs, int rhs);
DWORD op_InequalityOffset;
bool (*op_Inequality)(int lhs, int rhs);
DWORD DotOffset;
float (*Dot)(int a, int b);
DWORD SetLookRotationOffset;
void (*SetLookRotation)(void *_instance, Vector3 view, Vector3 up);
DWORD AngleOffset;
float (*Angle)(int a, int b);
DWORD Internal_MakePositiveOffset;
Vector3 (*Internal_MakePositive)(Vector3 euler);
DWORD get_eulerAnglesOffset;
Vector3 (*get_eulerAngles)(void *_instance);
DWORD EulerOffset;
int(*Euler)(float x, float y, float z);
DWORD Euler1Offset;
int(*Euler1)(Vector3 euler);
DWORD RotateTowardsOffset;
int(*RotateTowards)(int from, int to, float maxDegreesDelta);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, int other);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
DWORD ToString1Offset;
monoString *(*ToString1)(void *_instance, monoString *format);
}Quaternion;
struct Mathf {
DWORD NextPowerOfTwoOffset;
int (*NextPowerOfTwo)(int value);
DWORD GammaToLinearSpaceOffset;
float (*GammaToLinearSpace)(float value);
DWORD LinearToGammaSpaceOffset;
float (*LinearToGammaSpace)(float value);
DWORD PerlinNoiseOffset;
float (*PerlinNoise)(float x, float y);
DWORD SinOffset;
float (*Sin)(float f);
DWORD CosOffset;
float (*Cos)(float f);
DWORD TanOffset;
float (*Tan)(float f);
DWORD AsinOffset;
float (*Asin)(float f);
DWORD AcosOffset;
float (*Acos)(float f);
DWORD AtanOffset;
float (*Atan)(float f);
DWORD Atan2Offset;
float (*Atan2)(float y, float x);
DWORD SqrtOffset;
float (*Sqrt)(float f);
DWORD AbsOffset;
float (*Abs)(float f);
DWORD Abs1Offset;
int (*Abs1)(int value);
DWORD MinOffset;
float (*Min)(float a, float b);
DWORD Min1Offset;
int (*Min1)(int a, int b);
DWORD MaxOffset;
float (*Max)(float a, float b);
DWORD Max1Offset;
int (*Max1)(int a, int b);
DWORD PowOffset;
float (*Pow)(float f, float p);
DWORD ExpOffset;
float (*Exp)(float power);
DWORD LogOffset;
float (*Log)(float f, float p);
DWORD Log1Offset;
float (*Log1)(float f);
DWORD CeilOffset;
float (*Ceil)(float f);
DWORD FloorOffset;
float (*Floor)(float f);
DWORD RoundOffset;
float (*Round)(float f);
DWORD CeilToIntOffset;
int (*CeilToInt)(float f);
DWORD FloorToIntOffset;
int (*FloorToInt)(float f);
DWORD RoundToIntOffset;
int (*RoundToInt)(float f);
DWORD SignOffset;
float (*Sign)(float f);
DWORD ClampOffset;
float (*Clamp)(float value, float min, float max);
DWORD Clamp1Offset;
int (*Clamp1)(int value, int min, int max);
DWORD Clamp01Offset;
float (*Clamp01)(float value);
DWORD LerpOffset;
float (*Lerp)(float a, float b, float t);
DWORD LerpUnclampedOffset;
float (*LerpUnclamped)(float a, float b, float t);
DWORD LerpAngleOffset;
float (*LerpAngle)(float a, float b, float t);
DWORD MoveTowardsOffset;
float (*MoveTowards)(float current, float target, float maxDelta);
DWORD SmoothStepOffset;
float (*SmoothStep)(float from, float to, float t);
DWORD ApproximatelyOffset;
bool (*Approximately)(float a, float b);
DWORD RepeatOffset;
float (*Repeat)(float t, float length);
DWORD PingPongOffset;
float (*PingPong)(float t, float length);
DWORD InverseLerpOffset;
float (*InverseLerp)(float a, float b, float value);
DWORD DeltaAngleOffset;
float (*DeltaAngle)(float current, float target);
}Mathf;
struct UVector2 {
DWORD get_ItemOffset;
float (*get_Item)(void *_instance, int index);
DWORD set_ItemOffset;
void (*set_Item)(void *_instance, int index, float value);
DWORD SetOffset;
void (*Set)(void *_instance, float newX, float newY);
DWORD LerpOffset;
Vector2 (*Lerp)(Vector2 a, Vector2 b, float t);
DWORD ScaleOffset;
Vector2 (*Scale)(Vector2 a, Vector2 b);
DWORD NormalizeOffset;
void (*Normalize)(void *_instance);
DWORD get_normalizedOffset;
Vector2 (*get_normalized)(void *_instance);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
DWORD ToString1Offset;
monoString *(*ToString1)(void *_instance, monoString *format);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, Vector2 other);
DWORD DotOffset;
float (*Dot)(Vector2 lhs, Vector2 rhs);
DWORD get_magnitudeOffset;
float (*get_magnitude)(void *_instance);
DWORD get_sqrMagnitudeOffset;
float (*get_sqrMagnitude)(void *_instance);
DWORD AngleOffset;
float (*Angle)(Vector2 from, Vector2 to);
DWORD DistanceOffset;
float (*Distance)(Vector2 a, Vector2 b);
DWORD ClampMagnitudeOffset;
Vector2 (*ClampMagnitude)(Vector2 vector, float maxLength);
DWORD op_AdditionOffset;
Vector2 (*op_Addition)(Vector2 a, Vector2 b);
DWORD op_SubtractionOffset;
Vector2 (*op_Subtraction)(Vector2 a, Vector2 b);
DWORD op_MultiplyOffset;
Vector2 (*op_Multiply)(Vector2 a, Vector2 b);
DWORD op_DivisionOffset;
Vector2 (*op_Division)(Vector2 a, Vector2 b);
DWORD op_Multiply1Offset;
Vector2 (*op_Multiply1)(Vector2 a, float d);
DWORD op_Multiply2Offset;
Vector2 (*op_Multiply2)(float d, Vector2 a);
DWORD op_Division1Offset;
Vector2 (*op_Division1)(Vector2 a, float d);
DWORD op_EqualityOffset;
bool (*op_Equality)(Vector2 lhs, Vector2 rhs);
DWORD op_InequalityOffset;
bool (*op_Inequality)(Vector2 lhs, Vector2 rhs);
DWORD op_ImplicitOffset;
Vector2 (*op_Implicit)(Vector3 v);
DWORD op_Implicit1Offset;
Vector3 (*op_Implicit1)(Vector2 v);
DWORD get_zeroOffset;
Vector2 (*get_zero)();
DWORD get_oneOffset;
Vector2 (*get_one)();
DWORD get_upOffset;
Vector2 (*get_up)();
DWORD get_rightOffset;
Vector2 (*get_right)();
}UVector2;
struct Vector2Int {
DWORD get_xOffset;
int (*get_x)(void *_instance);
DWORD set_xOffset;
void (*set_x)(void *_instance, int value);
DWORD get_yOffset;
int (*get_y)(void *_instance);
DWORD set_yOffset;
void (*set_y)(void *_instance, int value);
DWORD op_ImplicitOffset;
Vector2 (*op_Implicit)(int v);
DWORD op_EqualityOffset;
bool (*op_Equality)(int lhs, int rhs);
DWORD op_InequalityOffset;
bool (*op_Inequality)(int lhs, int rhs);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, int other);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
DWORD get_zeroOffset;
int(*get_zero)();
}Vector2Int;
struct Vector3Int {
DWORD get_xOffset;
int (*get_x)(void *_instance);
DWORD set_xOffset;
void (*set_x)(void *_instance, int value);
DWORD get_yOffset;
int (*get_y)(void *_instance);
DWORD set_yOffset;
void (*set_y)(void *_instance, int value);
DWORD get_zOffset;
int (*get_z)(void *_instance);
DWORD set_zOffset;
void (*set_z)(void *_instance, int value);
DWORD op_ImplicitOffset;
Vector3 (*op_Implicit)(int v);
DWORD op_AdditionOffset;
int(*op_Addition)(int a, int b);
DWORD op_SubtractionOffset;
int(*op_Subtraction)(int a, int b);
DWORD op_MultiplyOffset;
int(*op_Multiply)(int a, int b);
DWORD op_EqualityOffset;
bool (*op_Equality)(int lhs, int rhs);
DWORD op_InequalityOffset;
bool (*op_Inequality)(int lhs, int rhs);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, int other);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
DWORD ToString1Offset;
monoString *(*ToString1)(void *_instance, monoString *format);
DWORD get_zeroOffset;
int(*get_zero)();
}Vector3Int;
struct Vector4 {
DWORD get_ItemOffset;
float (*get_Item)(void *_instance, int index);
DWORD set_ItemOffset;
void (*set_Item)(void *_instance, int index, float value);
DWORD ctor1Offset;
void (*ctor1)(void *_instance, float x, float y, float z);
DWORD LerpOffset;
int(*Lerp)(int a, int b, float t);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, int other);
DWORD DotOffset;
float (*Dot)(int a, int b);
DWORD get_magnitudeOffset;
float (*get_magnitude)(void *_instance);
DWORD get_sqrMagnitudeOffset;
float (*get_sqrMagnitude)(void *_instance);
DWORD get_zeroOffset;
int(*get_zero)();
DWORD get_oneOffset;
int(*get_one)();
DWORD op_AdditionOffset;
int(*op_Addition)(int a, int b);
DWORD op_UnaryNegationOffset;
int(*op_UnaryNegation)(int a);
DWORD op_MultiplyOffset;
int(*op_Multiply)(int a, float d);
DWORD op_DivisionOffset;
int(*op_Division)(int a, float d);
DWORD op_EqualityOffset;
bool (*op_Equality)(int lhs, int rhs);
DWORD op_InequalityOffset;
bool (*op_Inequality)(int lhs, int rhs);
DWORD op_ImplicitOffset;
int(*op_Implicit)(Vector3 v);
DWORD op_Implicit1Offset;
Vector3 (*op_Implicit1)(int v);
DWORD op_Implicit2Offset;
int(*op_Implicit2)(Vector2 v);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
}Vector4;
struct Ping {
DWORD FinalizeOffset;
void (*Finalize)(void *_instance);
DWORD DestroyPingOffset;
void (*DestroyPing)(void *_instance);
DWORD Internal_CreateOffset;
DWORD get_isDoneOffset;
bool (*get_isDone)(void *_instance);
DWORD Internal_IsDoneOffset;
bool (*Internal_IsDone)(void *_instance);
DWORD get_timeOffset;
int (*get_time)(void *_instance);
}Ping;
struct IPlayerEditorConnectionNative {
}IPlayerEditorConnectionNative;
struct PlayerConnectionInternal {
DWORD UnityEngineIPlayerEditorConnectionNativePollOffset;
void (*UnityEngineIPlayerEditorConnectionNativePoll)(void *_instance);
DWORD UnityEngineIPlayerEditorConnectionNativeRegisterInternalOffset;
void (*UnityEngineIPlayerEditorConnectionNativeRegisterInternal)(void *_instance, int messageId);
DWORD UnityEngineIPlayerEditorConnectionNativeUnregisterInternalOffset;
void (*UnityEngineIPlayerEditorConnectionNativeUnregisterInternal)(void *_instance, int messageId);
DWORD UnityEngineIPlayerEditorConnectionNativeInitializeOffset;
void (*UnityEngineIPlayerEditorConnectionNativeInitialize)(void *_instance);
DWORD UnityEngineIPlayerEditorConnectionNativeIsConnectedOffset;
bool (*UnityEngineIPlayerEditorConnectionNativeIsConnected)(void *_instance);
DWORD UnityEngineIPlayerEditorConnectionNativeDisconnectAllOffset;
void (*UnityEngineIPlayerEditorConnectionNativeDisconnectAll)(void *_instance);
DWORD IsConnectedOffset;
bool (*IsConnected)();
DWORD InitializeOffset;
void (*Initialize)();
DWORD RegisterInternalOffset;
void (*RegisterInternal)(monoString *messageId);
DWORD UnregisterInternalOffset;
void (*UnregisterInternal)(monoString *messageId);
DWORD PollInternalOffset;
void (*PollInternal)();
DWORD DisconnectAllOffset;
void (*DisconnectAll)();
}PlayerConnectionInternal;
struct PlayerPrefsException {
}PlayerPrefsException;
struct PlayerPrefs {
DWORD TrySetIntOffset;
bool (*TrySetInt)(monoString *key, int value);
DWORD TrySetFloatOffset;
bool (*TrySetFloat)(monoString *key, float value);
DWORD TrySetSetStringOffset;
bool (*TrySetSetString)(monoString *key, monoString *value);
DWORD SetIntOffset;
void (*SetInt)(monoString *key, int value);
DWORD GetIntOffset;
int (*GetInt)(monoString *key, int defaultValue);
DWORD GetInt1Offset;
int (*GetInt1)(monoString *key);
DWORD SetFloatOffset;
void (*SetFloat)(monoString *key, float value);
DWORD GetFloatOffset;
float (*GetFloat)(monoString *key, float defaultValue);
DWORD GetFloat1Offset;
float (*GetFloat1)(monoString *key);
DWORD SetStringOffset;
void (*SetString)(monoString *key, monoString *value);
DWORD GetStringOffset;
monoString *(*GetString)(monoString *key, monoString *defaultValue);
DWORD GetString1Offset;
monoString *(*GetString1)(monoString *key);
DWORD HasKeyOffset;
bool (*HasKey)(monoString *key);
DWORD DeleteKeyOffset;
void (*DeleteKey)(monoString *key);
DWORD DeleteAllOffset;
void (*DeleteAll)();
DWORD SaveOffset;
void (*Save)();
}PlayerPrefs;
struct PropertyAttribute {
}PropertyAttribute;
struct ContextMenuItemAttribute {
}ContextMenuItemAttribute;
struct TooltipAttribute {
}TooltipAttribute;
struct SpaceAttribute {
DWORD ctor1Offset;
void (*ctor1)(void *_instance, float height);
}SpaceAttribute;
struct HeaderAttribute {
}HeaderAttribute;
struct RangeAttribute {
}RangeAttribute;
struct MultilineAttribute {
}MultilineAttribute;
struct TextAreaAttribute {
}TextAreaAttribute;
struct ColorUsageAttribute {
}ColorUsageAttribute;
struct Random {
DWORD RangeOffset;
float (*Range)(float min, float max);
DWORD Range1Offset;
int (*Range1)(int min, int max);
DWORD RandomRangeIntOffset;
int (*RandomRangeInt)(int min, int max);
DWORD get_valueOffset;
float (*get_value)();
DWORD get_insideUnitSphereOffset;
Vector3 (*get_insideUnitSphere)();
DWORD get_insideUnitCircleOffset;
Vector2 (*get_insideUnitCircle)();
DWORD get_onUnitSphereOffset;
Vector3 (*get_onUnitSphere)();
DWORD get_rotationOffset;
int(*get_rotation)();
DWORD ColorHSVOffset;
Color (*ColorHSV)(float hueMin, float hueMax, float saturationMin, float saturationMax, float valueMin, float valueMax, float alphaMin, float alphaMax);
DWORD get_insideUnitSphere_InjectedOffset;
void (*get_insideUnitSphere_Injected)(Vector3 *ret);
DWORD get_onUnitSphere_InjectedOffset;
void (*get_onUnitSphere_Injected)(Vector3 *ret);
}Random;
struct ResourceRequest {
DWORD get_assetOffset;
void *(*get_asset)(void *_instance);
}ResourceRequest;
struct Resources {
DWORD FindObjectsOfTypeAllOffset;
DWORD LoadOffset;
void *(*Load)(monoString *path);
DWORD Load2Offset;
void *(*Load2)(monoString *path, void *systemTypeInstance);
DWORD LoadAsyncOffset;
void *(*LoadAsync)(monoString *path);
DWORD LoadAsync1Offset;
void *(*LoadAsync1)(monoString *path, void *type);
DWORD LoadAsyncInternalOffset;
void *(*LoadAsyncInternal)(monoString *path, void *type);
DWORD GetBuiltinResourceOffset;
void *(*GetBuiltinResource)(void *type, monoString *path);
DWORD UnloadAssetOffset;
void (*UnloadAsset)(void *assetToUnload);
DWORD UnloadUnusedAssetsOffset;
void *(*UnloadUnusedAssets)();
}Resources;
struct AsyncOperation {
DWORD get_isDoneOffset;
bool (*get_isDone)(void *_instance);
DWORD get_progressOffset;
float (*get_progress)(void *_instance);
DWORD FinalizeOffset;
void (*Finalize)(void *_instance);
DWORD InvokeCompletionEventOffset;
void (*InvokeCompletionEvent)(void *_instance);
}AsyncOperation;
struct AttributeHelperEngine {
DWORD GetParentTypeDisallowingMultipleInclusionOffset;
void *(*GetParentTypeDisallowingMultipleInclusion)(void *type);
DWORD GetRequiredComponentsOffset;
DWORD GetExecuteModeOffset;
int (*GetExecuteMode)(void *klass);
DWORD CheckIsEditorScriptOffset;
int (*CheckIsEditorScript)(void *klass);
DWORD GetDefaultExecutionOrderForOffset;
int (*GetDefaultExecutionOrderFor)(void *klass);
}AttributeHelperEngine;
struct DisallowMultipleComponent {
}DisallowMultipleComponent;
struct RequireComponent {
DWORD ctor1Offset;
void (*ctor1)(void *_instance, void *requiredComponent, void *requiredComponent2);
DWORD ctor2Offset;
void (*ctor2)(void *_instance, void *requiredComponent, void *requiredComponent2, void *requiredComponent3);
}RequireComponent;
struct AddComponentMenu {
DWORD ctor1Offset;
void (*ctor1)(void *_instance, monoString *menuName, int order);
}AddComponentMenu;
struct CreateAssetMenuAttribute {
DWORD set_menuNameOffset;
void (*set_menuName)(void *_instance, monoString *value);
DWORD set_fileNameOffset;
void (*set_fileName)(void *_instance, monoString *value);
DWORD set_orderOffset;
void (*set_order)(void *_instance, int value);
}CreateAssetMenuAttribute;
struct ContextMenu {
DWORD ctor1Offset;
void (*ctor1)(void *_instance, monoString *itemName, bool isValidateFunction);
DWORD ctor2Offset;
void (*ctor2)(void *_instance, monoString *itemName, bool isValidateFunction, int priority);
}ContextMenu;
struct ExecuteInEditMode {
}ExecuteInEditMode;
struct ExecuteAlways {
}ExecuteAlways;
struct HideInInspector {
}HideInInspector;
struct HelpURLAttribute {
}HelpURLAttribute;
struct DefaultExecutionOrder {
DWORD get_orderOffset;
int (*get_order)(void *_instance);
}DefaultExecutionOrder;
struct ExcludeFromPresetAttribute {
}ExcludeFromPresetAttribute;
struct Behaviour {
DWORD get_enabledOffset;
bool (*get_enabled)(void *_instance);
DWORD set_enabledOffset;
void (*set_enabled)(void *_instance, bool value);
DWORD get_isActiveAndEnabledOffset;
bool (*get_isActiveAndEnabled)(void *_instance);
}Behaviour;
struct ClassLibraryInitializer {
DWORD InitOffset;
void (*Init)();
}ClassLibraryInitializer;
struct Component {
DWORD get_transformOffset;
void *(*get_transform)(void *_instance);
DWORD get_gameObjectOffset;
void *(*get_gameObject)(void *_instance);
DWORD GetComponentOffset;
void *(*GetComponent)(void *_instance, void *type);
DWORD GetComponent2Offset;
void *(*GetComponent2)(void *_instance, monoString *type);
DWORD GetComponentInChildrenOffset;
void *(*GetComponentInChildren)(void *_instance, void *t, bool includeInactive);
DWORD GetComponentInParentOffset;
void *(*GetComponentInParent)(void *_instance, void *t);
DWORD GetComponentsOffset;
DWORD get_tagOffset;
monoString *(*get_tag)(void *_instance);
DWORD CompareTagOffset;
bool (*CompareTag)(void *_instance, monoString *tag);
}Component;
struct Coroutine {
DWORD FinalizeOffset;
void (*Finalize)(void *_instance);
}Coroutine;
struct SetupCoroutine {
}SetupCoroutine;
struct CustomYieldInstruction {
DWORD get_CurrentOffset;
DWORD MoveNextOffset;
bool (*MoveNext)(void *_instance);
DWORD ResetOffset;
void (*Reset)(void *_instance);
}CustomYieldInstruction;
struct ExcludeFromObjectFactoryAttribute {
}ExcludeFromObjectFactoryAttribute;
struct ExtensionOfNativeClassAttribute {
}ExtensionOfNativeClassAttribute;
struct GameObject {
DWORD CreatePrimitiveOffset;
void *(*CreatePrimitive)(int type);
DWORD GetComponent1Offset;
void *(*GetComponent1)(void *_instance, void *type);
DWORD GetComponentByNameOffset;
void *(*GetComponentByName)(void *_instance, monoString *type);
DWORD GetComponent11Offset;
void *(*GetComponent11)(void *_instance, monoString *type);
DWORD GetComponentInChildrenOffset;
void *(*GetComponentInChildren)(void *_instance, void *type, bool includeInactive);
DWORD GetComponentInParentOffset;
void *(*GetComponentInParent)(void *_instance, void *type);
DWORD GetComponentsOffset;
DWORD SendMessageOffset;
void (*SendMessage)(void *_instance, monoString *methodName, int options);
DWORD Internal_AddComponentWithTypeOffset;
void *(*Internal_AddComponentWithType)(void *_instance, void *componentType);
DWORD AddComponentOffset;
void *(*AddComponent)(void *_instance, void *componentType);
DWORD get_transformOffset;
void *(*get_transform)(void *_instance);
DWORD get_layerOffset;
int (*get_layer)(void *_instance);
DWORD set_layerOffset;
void (*set_layer)(void *_instance, int value);
DWORD SetActiveOffset;
void (*SetActive)(void *_instance, bool value);
DWORD get_activeSelfOffset;
bool (*get_activeSelf)(void *_instance);
DWORD get_activeInHierarchyOffset;
bool (*get_activeInHierarchy)(void *_instance);
DWORD get_isStaticOffset;
bool (*get_isStatic)(void *_instance);
DWORD set_isStaticOffset;
void (*set_isStatic)(void *_instance, bool value);
DWORD get_isStaticBatchableOffset;
bool (*get_isStaticBatchable)(void *_instance);
DWORD get_tagOffset;
monoString *(*get_tag)(void *_instance);
DWORD set_tagOffset;
void (*set_tag)(void *_instance, monoString *value);
DWORD CompareTagOffset;
bool (*CompareTag)(void *_instance, monoString *tag);
DWORD FindGameObjectWithTagOffset;
void *(*FindGameObjectWithTag)(monoString *tag);
DWORD FindGameObjectsWithTagOffset;
DWORD SendMessage2Offset;
void (*SendMessage2)(void *_instance, monoString *methodName);
DWORD ctor1Offset;
void (*ctor1)(void *_instance);
DWORD Internal_CreateGameObjectOffset;
void (*Internal_CreateGameObject)(void *self, monoString *name);
DWORD FindOffset;
void *(*Find)(monoString *name);
DWORD get_sceneOffset;
int(*get_scene)(void *_instance);
DWORD get_gameObjectOffset;
void *(*get_gameObject)(void *_instance);
}GameObject;
struct LayerMask {
DWORD op_ImplicitOffset;
int (*op_Implicit)(int mask);
DWORD op_Implicit1Offset;
int(*op_Implicit1)(int intVal);
DWORD get_valueOffset;
int (*get_value)(void *_instance);
DWORD NameToLayerOffset;
int (*NameToLayer)(monoString *layerName);
}LayerMask;
struct ManagedStreamHelpers {
DWORD ValidateLoadFromStreamOffset;
void (*ValidateLoadFromStream)(void *stream);
}ManagedStreamHelpers;
struct MonoBehaviour {
DWORD IsInvokingOffset;
bool (*IsInvoking)(void *_instance);
DWORD CancelInvokeOffset;
void (*CancelInvoke)(void *_instance);
DWORD InvokeOffset;
void (*Invoke)(void *_instance, monoString *methodName, float time);
DWORD InvokeRepeatingOffset;
void (*InvokeRepeating)(void *_instance, monoString *methodName, float time, float repeatRate);
DWORD CancelInvoke1Offset;
void (*CancelInvoke1)(void *_instance, monoString *methodName);
DWORD IsInvoking1Offset;
bool (*IsInvoking1)(void *_instance, monoString *methodName);
DWORD StartCoroutineOffset;
void *(*StartCoroutine)(void *_instance, monoString *methodName);
DWORD StartCoroutine2Offset;
void *(*StartCoroutine2)(void *_instance, void *routine);
DWORD StartCoroutine_AutoOffset;
void *(*StartCoroutine_Auto)(void *_instance, void *routine);
DWORD StopCoroutineOffset;
void (*StopCoroutine)(void *_instance, void *routine);
DWORD StopCoroutine1Offset;
void (*StopCoroutine1)(void *_instance, void *routine);
DWORD StopCoroutine2Offset;
void (*StopCoroutine2)(void *_instance, monoString *methodName);
DWORD StopAllCoroutinesOffset;
void (*StopAllCoroutines)(void *_instance);
DWORD get_useGUILayoutOffset;
bool (*get_useGUILayout)(void *_instance);
DWORD set_useGUILayoutOffset;
void (*set_useGUILayout)(void *_instance, bool value);
DWORD Internal_CancelInvokeAllOffset;
void (*Internal_CancelInvokeAll)(void *self);
DWORD Internal_IsInvokingAllOffset;
bool (*Internal_IsInvokingAll)(void *self);
DWORD InvokeDelayedOffset;
void (*InvokeDelayed)(void *self, monoString *methodName, float time, float repeatRate);
DWORD CancelInvoke11Offset;
void (*CancelInvoke11)(void *self, monoString *methodName);
DWORD IsInvoking11Offset;
bool (*IsInvoking11)(void *self, monoString *methodName);
DWORD IsObjectMonoBehaviourOffset;
bool (*IsObjectMonoBehaviour)(void *obj);
DWORD StartCoroutineManaged2Offset;
void *(*StartCoroutineManaged2)(void *_instance, void *enumerator);
DWORD StopCoroutineManagedOffset;
void (*StopCoroutineManaged)(void *_instance, void *routine);
DWORD StopCoroutineFromEnumeratorManagedOffset;
void (*StopCoroutineFromEnumeratorManaged)(void *_instance, void *routine);
DWORD GetScriptClassNameOffset;
monoString *(*GetScriptClassName)(void *_instance);
}MonoBehaviour;
struct NoAllocHelpers {
DWORD SafeLengthOffset;
int (*SafeLength)(void *values);
}NoAllocHelpers;
struct RangeInt {
DWORD get_endOffset;
int (*get_end)(void *_instance);
}RangeInt;
struct RuntimeInitializeOnLoadMethodAttribute {
DWORD ctor1Offset;
void (*ctor1)(void *_instance, int loadType);
DWORD set_loadTypeOffset;
void (*set_loadType)(void *_instance, int value);
}RuntimeInitializeOnLoadMethodAttribute;
struct ScriptableObject {
DWORD CreateInstanceOffset;
void *(*CreateInstance)(void *type);
DWORD CreateScriptableObjectOffset;
void (*CreateScriptableObject)(void *self);
DWORD CreateScriptableObjectInstanceFromTypeOffset;
void *(*CreateScriptableObjectInstanceFromType)(void *type, bool applyDefaultsAndReset);
}ScriptableObject;
struct ScriptingUtility {
DWORD IsManagedCodeWorkingOffset;
bool (*IsManagedCodeWorking)();
}ScriptingUtility;
struct SelectionBaseAttribute {
}SelectionBaseAttribute;
struct StackTraceUtility {
DWORD SetProjectFolderOffset;
void (*SetProjectFolder)(monoString *folder);
DWORD ExtractStackTraceOffset;
monoString *(*ExtractStackTrace)();
DWORD ExtractFormattedStackTraceOffset;
monoString *(*ExtractFormattedStackTrace)(void *stackTrace);
}StackTraceUtility;
struct UnityException {
DWORD ctor1Offset;
void (*ctor1)(void *_instance, monoString *message);
DWORD ctor2Offset;
void (*ctor2)(void *_instance, void *info, int context);
}UnityException;
struct TextAsset {
DWORD get_textOffset;
monoString *(*get_text)(void *_instance);
DWORD get_bytesOffset;
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
}TextAsset;
struct TrackedReference {
DWORD op_EqualityOffset;
bool (*op_Equality)(void *x, void *y);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
}TrackedReference;
struct UnhandledExceptionHandler {
DWORD RegisterUECatcherOffset;
void (*RegisterUECatcher)();
}UnhandledExceptionHandler;
struct Object {
DWORD GetInstanceIDOffset;
int (*GetInstanceID)(void *_instance);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD op_ImplicitOffset;
bool (*op_Implicit)(void *exists);
DWORD CompareBaseObjectsOffset;
bool (*CompareBaseObjects)(void *lhs, void *rhs);
DWORD IsNativeObjectAliveOffset;
bool (*IsNativeObjectAlive)(void *o);
DWORD GetCachedPtrOffset;
DWORD get_nameOffset;
monoString *(*get_name)(void *_instance);
DWORD set_nameOffset;
void (*set_name)(void *_instance, monoString *value);
DWORD InstantiateOffset;
void *(*Instantiate)(void *original, Vector3 position, int rotation);
DWORD Instantiate1Offset;
void *(*Instantiate1)(void *original, Vector3 position, int rotation, void *parent);
DWORD Instantiate2Offset;
void *(*Instantiate2)(void *original);
DWORD Instantiate3Offset;
void *(*Instantiate3)(void *original, void *parent, bool instantiateInWorldSpace);
DWORD DestroyOffset;
void (*Destroy)(void *obj, float t);
DWORD Destroy1Offset;
void (*Destroy1)(void *obj);
DWORD DestroyImmediateOffset;
void (*DestroyImmediate)(void *obj, bool allowDestroyingAssets);
DWORD DestroyImmediate1Offset;
void (*DestroyImmediate1)(void *obj);
DWORD FindObjectsOfTypeOffset;
DWORD DontDestroyOnLoadOffset;
void (*DontDestroyOnLoad)(void *target);
DWORD get_hideFlagsOffset;
int(*get_hideFlags)(void *_instance);
DWORD set_hideFlagsOffset;
void (*set_hideFlags)(void *_instance, int value);
DWORD FindSceneObjectsOfTypeOffset;
DWORD FindObjectOfType1Offset;
void *(*FindObjectOfType1)(void *type);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
DWORD op_EqualityOffset;
bool (*op_Equality)(void *x, void *y);
DWORD op_InequalityOffset;
bool (*op_Inequality)(void *x, void *y);
DWORD GetOffsetOfInstanceIDInCPlusPlusObjectOffset;
int (*GetOffsetOfInstanceIDInCPlusPlusObject)();
DWORD Internal_CloneSingleOffset;
void *(*Internal_CloneSingle)(void *data);
DWORD Internal_CloneSingleWithParentOffset;
void *(*Internal_CloneSingleWithParent)(void *data, void *parent, bool worldPositionStays);
DWORD Internal_InstantiateSingleOffset;
void *(*Internal_InstantiateSingle)(void *data, Vector3 pos, int rot);
DWORD Internal_InstantiateSingleWithParentOffset;
void *(*Internal_InstantiateSingleWithParent)(void *data, void *parent, Vector3 pos, int rot);
DWORD ToString1Offset;
monoString *(*ToString1)(void *obj);
DWORD GetNameOffset;
monoString *(*GetName)(void *obj);
DWORD SetNameOffset;
void (*SetName)(void *obj, monoString *name);
DWORD FindObjectFromInstanceIDOffset;
void *(*FindObjectFromInstanceID)(int instanceID);
}Object;
struct UnitySynchronizationContext {
DWORD OperationStartedOffset;
void (*OperationStarted)(void *_instance);
DWORD OperationCompletedOffset;
void (*OperationCompleted)(void *_instance);
DWORD CreateCopyOffset;
void *(*CreateCopy)(void *_instance);
DWORD ExecOffset;
void (*Exec)(void *_instance);
DWORD HasPendingTasksOffset;
bool (*HasPendingTasks)(void *_instance);
DWORD InitializeSynchronizationContextOffset;
void (*InitializeSynchronizationContext)();
DWORD ExecuteTasksOffset;
void (*ExecuteTasks)();
}UnitySynchronizationContext;
struct WaitForEndOfFrame {
}WaitForEndOfFrame;
struct WaitForSeconds {
}WaitForSeconds;
struct WaitForSecondsRealtime {
DWORD get_waitTimeOffset;
float (*get_waitTime)(void *_instance);
DWORD set_waitTimeOffset;
void (*set_waitTime)(void *_instance, float value);
DWORD get_keepWaitingOffset;
bool (*get_keepWaiting)(void *_instance);
}WaitForSecondsRealtime;
struct WaitUntil {
DWORD get_keepWaitingOffset;
bool (*get_keepWaiting)(void *_instance);
}WaitUntil;
struct WaitWhile {
DWORD get_keepWaitingOffset;
bool (*get_keepWaiting)(void *_instance);
}WaitWhile;
struct YieldInstruction {
}YieldInstruction;
struct SerializeField {
}SerializeField;
struct ISerializationCallbackReceiver {
}ISerializationCallbackReceiver;
struct ComputeShader {
DWORD FindKernelOffset;
int (*FindKernel)(void *_instance, monoString *name);
}ComputeShader;
struct StaticBatchingUtility {
DWORD CombineOffset;
void (*Combine)(void *staticBatchRoot);
}StaticBatchingUtility;
struct InternalStaticBatchingUtility {
DWORD CombineRootOffset;
void (*CombineRoot)(void *staticBatchRoot, void *sorter);
DWORD CombineOffset;
void (*Combine)(void *staticBatchRoot, bool combineOnlyStatic, bool isEditorPostprocessScene, void *sorter);
}InternalStaticBatchingUtility;
struct LowerResBlitTexture {
DWORD LowerResBlitTextureDontStripMeOffset;
void (*LowerResBlitTextureDontStripMe)(void *_instance);
}LowerResBlitTexture;
struct PreloadData {
DWORD PreloadDataDontStripMeOffset;
void (*PreloadDataDontStripMe)(void *_instance);
}PreloadData;
struct SystemInfo {
DWORD get_operatingSystemOffset;
monoString *(*get_operatingSystem)();
DWORD get_operatingSystemFamilyOffset;
int(*get_operatingSystemFamily)();
DWORD get_processorTypeOffset;
monoString *(*get_processorType)();
DWORD get_processorCountOffset;
int (*get_processorCount)();
DWORD get_systemMemorySizeOffset;
int (*get_systemMemorySize)();
DWORD get_deviceUniqueIdentifierOffset;
monoString *(*get_deviceUniqueIdentifier)();
DWORD get_deviceNameOffset;
monoString *(*get_deviceName)();
DWORD get_deviceModelOffset;
monoString *(*get_deviceModel)();
DWORD get_supportsAccelerometerOffset;
bool (*get_supportsAccelerometer)();
DWORD get_supportsGyroscopeOffset;
bool (*get_supportsGyroscope)();
DWORD get_supportsLocationServiceOffset;
bool (*get_supportsLocationService)();
DWORD get_deviceTypeOffset;
int(*get_deviceType)();
DWORD get_graphicsMemorySizeOffset;
int (*get_graphicsMemorySize)();
DWORD get_graphicsDeviceNameOffset;
monoString *(*get_graphicsDeviceName)();
DWORD get_graphicsDeviceTypeOffset;
int(*get_graphicsDeviceType)();
DWORD get_graphicsDeviceVersionOffset;
monoString *(*get_graphicsDeviceVersion)();
DWORD get_graphicsShaderLevelOffset;
int (*get_graphicsShaderLevel)();
DWORD get_graphicsMultiThreadedOffset;
bool (*get_graphicsMultiThreaded)();
DWORD get_supportsShadowsOffset;
bool (*get_supportsShadows)();
DWORD get_supportsRenderTexturesOffset;
bool (*get_supportsRenderTextures)();
DWORD get_supportsMotionVectorsOffset;
bool (*get_supportsMotionVectors)();
DWORD get_supportsImageEffectsOffset;
bool (*get_supportsImageEffects)();
DWORD get_supports3DTexturesOffset;
bool (*get_supports3DTextures)();
DWORD get_supports2DArrayTexturesOffset;
bool (*get_supports2DArrayTextures)();
DWORD get_supports3DRenderTexturesOffset;
bool (*get_supports3DRenderTextures)();
DWORD get_supportsCubemapArrayTexturesOffset;
bool (*get_supportsCubemapArrayTextures)();
DWORD get_supportsComputeShadersOffset;
bool (*get_supportsComputeShaders)();
DWORD get_supportsInstancingOffset;
bool (*get_supportsInstancing)();
DWORD IsValidEnumValueOffset;
bool (*IsValidEnumValue)(void *value);
DWORD SupportsRenderTextureFormatOffset;
bool (*SupportsRenderTextureFormat)(int format);
DWORD SupportsTextureFormatOffset;
bool (*SupportsTextureFormat)(int format);
DWORD get_maxTextureSizeOffset;
int (*get_maxTextureSize)();
DWORD get_maxCubemapSizeOffset;
int (*get_maxCubemapSize)();
DWORD GetOperatingSystemOffset;
monoString *(*GetOperatingSystem)();
DWORD GetOperatingSystemFamilyOffset;
int(*GetOperatingSystemFamily)();
DWORD GetProcessorTypeOffset;
monoString *(*GetProcessorType)();
DWORD GetProcessorCountOffset;
int (*GetProcessorCount)();
DWORD GetPhysicalMemoryMBOffset;
int (*GetPhysicalMemoryMB)();
DWORD GetDeviceUniqueIdentifierOffset;
monoString *(*GetDeviceUniqueIdentifier)();
DWORD GetDeviceNameOffset;
monoString *(*GetDeviceName)();
DWORD GetDeviceModelOffset;
monoString *(*GetDeviceModel)();
DWORD SupportsAccelerometerOffset;
bool (*SupportsAccelerometer)();
DWORD IsGyroAvailableOffset;
bool (*IsGyroAvailable)();
DWORD SupportsLocationServiceOffset;
bool (*SupportsLocationService)();
DWORD GetDeviceTypeOffset;
int(*GetDeviceType)();
DWORD GetGraphicsMemorySizeOffset;
int (*GetGraphicsMemorySize)();
DWORD GetGraphicsDeviceNameOffset;
monoString *(*GetGraphicsDeviceName)();
DWORD GetGraphicsDeviceTypeOffset;
int(*GetGraphicsDeviceType)();
DWORD GetGraphicsDeviceVersionOffset;
monoString *(*GetGraphicsDeviceVersion)();
DWORD GetGraphicsShaderLevelOffset;
int (*GetGraphicsShaderLevel)();
DWORD GetGraphicsMultiThreadedOffset;
bool (*GetGraphicsMultiThreaded)();
DWORD SupportsShadowsOffset;
bool (*SupportsShadows)();
DWORD SupportsMotionVectorsOffset;
bool (*SupportsMotionVectors)();
DWORD Supports3DTexturesOffset;
bool (*Supports3DTextures)();
DWORD Supports2DArrayTexturesOffset;
bool (*Supports2DArrayTextures)();
DWORD Supports3DRenderTexturesOffset;
bool (*Supports3DRenderTextures)();
DWORD SupportsCubemapArrayTexturesOffset;
bool (*SupportsCubemapArrayTextures)();
DWORD SupportsComputeShadersOffset;
bool (*SupportsComputeShaders)();
DWORD SupportsInstancingOffset;
bool (*SupportsInstancing)();
DWORD HasRenderTextureNativeOffset;
bool (*HasRenderTextureNative)(int format);
DWORD SupportsTextureFormatNativeOffset;
bool (*SupportsTextureFormatNative)(int format);
DWORD GetMaxTextureSizeOffset;
int (*GetMaxTextureSize)();
DWORD GetMaxCubemapSizeOffset;
int (*GetMaxCubemapSize)();
DWORD IsFormatSupportedOffset;
bool (*IsFormatSupported)(int format, int usage);
DWORD GetCompatibleFormatOffset;
int(*GetCompatibleFormat)(int format, int usage);
DWORD GetGraphicsFormatOffset;
int(*GetGraphicsFormat)(int format);
}SystemInfo;
struct SystemClock {
DWORD get_nowOffset;
int(*get_now)();
}SystemClock;
struct Time {
DWORD get_timeOffset;
float (*get_time)();
DWORD get_timeSinceLevelLoadOffset;
float (*get_timeSinceLevelLoad)();
DWORD get_deltaTimeOffset;
float (*get_deltaTime)();
DWORD get_unscaledTimeOffset;
float (*get_unscaledTime)();
DWORD get_unscaledDeltaTimeOffset;
float (*get_unscaledDeltaTime)();
DWORD get_fixedDeltaTimeOffset;
float (*get_fixedDeltaTime)();
DWORD set_fixedDeltaTimeOffset;
void (*set_fixedDeltaTime)(float value);
DWORD get_smoothDeltaTimeOffset;
float (*get_smoothDeltaTime)();
DWORD get_timeScaleOffset;
float (*get_timeScale)();
DWORD set_timeScaleOffset;
void (*set_timeScale)(float value);
DWORD get_frameCountOffset;
int (*get_frameCount)();
DWORD get_realtimeSinceStartupOffset;
float (*get_realtimeSinceStartup)();
}Time;
struct TouchScreenKeyboard {
DWORD DestroyOffset;
void (*Destroy)(void *_instance);
DWORD FinalizeOffset;
void (*Finalize)(void *_instance);
DWORD get_isSupportedOffset;
bool (*get_isSupported)();
DWORD get_isInPlaceEditingAllowedOffset;
bool (*get_isInPlaceEditingAllowed)();
DWORD OpenOffset;
void *(*Open)(monoString *text, int keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, monoString *textPlaceholder, int characterLimit);
DWORD Open1Offset;
void *(*Open1)(monoString *text, int keyboardType, bool autocorrection, bool multiline, bool secure);
DWORD get_textOffset;
monoString *(*get_text)(void *_instance);
DWORD set_textOffset;
void (*set_text)(void *_instance, monoString *value);
DWORD set_hideInputOffset;
void (*set_hideInput)(bool value);
DWORD get_activeOffset;
bool (*get_active)(void *_instance);
DWORD set_activeOffset;
void (*set_active)(void *_instance, bool value);
DWORD get_statusOffset;
int(*get_status)(void *_instance);
DWORD set_characterLimitOffset;
void (*set_characterLimit)(void *_instance, int value);
DWORD get_canGetSelectionOffset;
bool (*get_canGetSelection)(void *_instance);
DWORD get_canSetSelectionOffset;
bool (*get_canSetSelection)(void *_instance);
DWORD get_selectionOffset;
int(*get_selection)(void *_instance);
DWORD set_selectionOffset;
void (*set_selection)(void *_instance, int value);
DWORD SetSelectionOffset;
void (*SetSelection)(int start, int length);
DWORD get_visibleOffset;
bool (*get_visible)();
}TouchScreenKeyboard;
struct DrivenRectTransformTracker {
DWORD AddOffset;
void (*Add)(void *_instance, void *driver, void *rectTransform, int drivenProperties);
DWORD ClearOffset;
void (*Clear)(void *_instance);
}DrivenRectTransformTracker;
struct RectTransform {
DWORD add_reapplyDrivenPropertiesOffset;
void (*add_reapplyDrivenProperties)(void *value);
DWORD remove_reapplyDrivenPropertiesOffset;
void (*remove_reapplyDrivenProperties)(void *value);
DWORD get_rectOffset;
int(*get_rect)(void *_instance);
DWORD get_anchorMinOffset;
Vector2 (*get_anchorMin)(void *_instance);
DWORD set_anchorMinOffset;
void (*set_anchorMin)(void *_instance, Vector2 value);
DWORD get_anchorMaxOffset;
Vector2 (*get_anchorMax)(void *_instance);
DWORD set_anchorMaxOffset;
void (*set_anchorMax)(void *_instance, Vector2 value);
DWORD get_anchoredPositionOffset;
Vector2 (*get_anchoredPosition)(void *_instance);
DWORD set_anchoredPositionOffset;
void (*set_anchoredPosition)(void *_instance, Vector2 value);
DWORD get_sizeDeltaOffset;
Vector2 (*get_sizeDelta)(void *_instance);
DWORD set_sizeDeltaOffset;
void (*set_sizeDelta)(void *_instance, Vector2 value);
DWORD get_pivotOffset;
Vector2 (*get_pivot)(void *_instance);
DWORD set_pivotOffset;
void (*set_pivot)(void *_instance, Vector2 value);
DWORD set_anchoredPosition3DOffset;
void (*set_anchoredPosition3D)(void *_instance, Vector3 value);
DWORD get_offsetMinOffset;
Vector2 (*get_offsetMin)(void *_instance);
DWORD set_offsetMinOffset;
void (*set_offsetMin)(void *_instance, Vector2 value);
DWORD get_offsetMaxOffset;
Vector2 (*get_offsetMax)(void *_instance);
DWORD set_offsetMaxOffset;
void (*set_offsetMax)(void *_instance, Vector2 value);
DWORD SetInsetAndSizeFromParentEdgeOffset;
void (*SetInsetAndSizeFromParentEdge)(void *_instance, int edge, float inset, float size);
DWORD SetSizeWithCurrentAnchorsOffset;
void (*SetSizeWithCurrentAnchors)(void *_instance, int axis, float size);
DWORD SendReapplyDrivenPropertiesOffset;
void (*SendReapplyDrivenProperties)(void *driven);
DWORD GetParentSizeOffset;
Vector2 (*GetParentSize)(void *_instance);
}RectTransform;
struct Transform {
DWORD get_positionOffset;
Vector3 (*get_position)(void *_instance);
DWORD set_positionOffset;
void (*set_position)(void *_instance, Vector3 value);
DWORD get_localPositionOffset;
Vector3 (*get_localPosition)(void *_instance);
DWORD set_localPositionOffset;
void (*set_localPosition)(void *_instance, Vector3 value);
DWORD get_eulerAnglesOffset;
Vector3 (*get_eulerAngles)(void *_instance);
DWORD set_eulerAnglesOffset;
void (*set_eulerAngles)(void *_instance, Vector3 value);
DWORD get_localEulerAnglesOffset;
Vector3 (*get_localEulerAngles)(void *_instance);
DWORD set_localEulerAnglesOffset;
void (*set_localEulerAngles)(void *_instance, Vector3 value);
DWORD get_rightOffset;
Vector3 (*get_right)(void *_instance);
DWORD get_upOffset;
Vector3 (*get_up)(void *_instance);
DWORD get_forwardOffset;
Vector3 (*get_forward)(void *_instance);
DWORD get_rotationOffset;
int(*get_rotation)(void *_instance);
DWORD set_rotationOffset;
void (*set_rotation)(void *_instance, int value);
DWORD get_localRotationOffset;
int(*get_localRotation)(void *_instance);
DWORD set_localRotationOffset;
void (*set_localRotation)(void *_instance, int value);
DWORD get_localScaleOffset;
Vector3 (*get_localScale)(void *_instance);
DWORD set_localScaleOffset;
void (*set_localScale)(void *_instance, Vector3 value);
DWORD get_parentOffset;
void *(*get_parent)(void *_instance);
DWORD set_parentOffset;
void (*set_parent)(void *_instance, void *value);
DWORD get_parentInternalOffset;
void *(*get_parentInternal)(void *_instance);
DWORD set_parentInternalOffset;
void (*set_parentInternal)(void *_instance, void *value);
DWORD GetParentOffset;
void *(*GetParent)(void *_instance);
DWORD SetParentOffset;
void (*SetParent)(void *_instance, void *p);
DWORD SetParent1Offset;
void (*SetParent1)(void *_instance, void *parent, bool worldPositionStays);
DWORD get_worldToLocalMatrixOffset;
int(*get_worldToLocalMatrix)(void *_instance);
DWORD get_localToWorldMatrixOffset;
int(*get_localToWorldMatrix)(void *_instance);
DWORD TranslateOffset;
void (*Translate)(void *_instance, Vector3 translation, int relativeTo);
DWORD Translate1Offset;
void (*Translate1)(void *_instance, Vector3 translation);
DWORD Translate2Offset;
void (*Translate2)(void *_instance, float x, float y, float z);
DWORD RotateOffset;
void (*Rotate)(void *_instance, Vector3 eulers, int relativeTo);
DWORD Rotate1Offset;
void (*Rotate1)(void *_instance, Vector3 eulers);
DWORD Rotate2Offset;
void (*Rotate2)(void *_instance, float xAngle, float yAngle, float zAngle, int relativeTo);
DWORD Rotate3Offset;
void (*Rotate3)(void *_instance, float xAngle, float yAngle, float zAngle);
DWORD RotateAroundInternalOffset;
void (*RotateAroundInternal)(void *_instance, Vector3 axis, float angle);
DWORD Rotate11Offset;
void (*Rotate11)(void *_instance, Vector3 axis, float angle, int relativeTo);
DWORD Rotate21Offset;
void (*Rotate21)(void *_instance, Vector3 axis, float angle);
DWORD RotateAroundOffset;
void (*RotateAround)(void *_instance, Vector3 point, Vector3 axis, float angle);
DWORD LookAtOffset;
void (*LookAt)(void *_instance, void *target, Vector3 worldUp);
DWORD LookAt1Offset;
void (*LookAt1)(void *_instance, void *target);
DWORD LookAt2Offset;
void (*LookAt2)(void *_instance, Vector3 worldPosition, Vector3 worldUp);
DWORD LookAt3Offset;
void (*LookAt3)(void *_instance, Vector3 worldPosition);
DWORD Internal_LookAtOffset;
void (*Internal_LookAt)(void *_instance, Vector3 worldPosition, Vector3 worldUp);
DWORD TransformDirectionOffset;
Vector3 (*TransformDirection)(void *_instance, Vector3 direction);
DWORD InverseTransformDirectionOffset;
Vector3 (*InverseTransformDirection)(void *_instance, Vector3 direction);
DWORD TransformPointOffset;
Vector3 (*TransformPoint)(void *_instance, Vector3 position);
DWORD TransformPoint1Offset;
Vector3 (*TransformPoint1)(void *_instance, float x, float y, float z);
DWORD InverseTransformPointOffset;
Vector3 (*InverseTransformPoint)(void *_instance, Vector3 position);
DWORD get_rootOffset;
void *(*get_root)(void *_instance);
DWORD GetRootOffset;
void *(*GetRoot)(void *_instance);
DWORD get_childCountOffset;
int (*get_childCount)(void *_instance);
DWORD SetAsFirstSiblingOffset;
void (*SetAsFirstSibling)(void *_instance);
DWORD SetAsLastSiblingOffset;
void (*SetAsLastSibling)(void *_instance);
DWORD SetSiblingIndexOffset;
void (*SetSiblingIndex)(void *_instance, int index);
DWORD GetSiblingIndexOffset;
int (*GetSiblingIndex)(void *_instance);
DWORD FindRelativeTransformWithPathOffset;
void *(*FindRelativeTransformWithPath)(void *transform, monoString *path, bool isActiveOnly);
DWORD FindOffset;
void *(*Find)(void *_instance, monoString *n);
DWORD get_lossyScaleOffset;
Vector3 (*get_lossyScale)(void *_instance);
DWORD IsChildOfOffset;
bool (*IsChildOf)(void *_instance, void *parent);
DWORD get_hasChangedOffset;
bool (*get_hasChanged)(void *_instance);
DWORD set_hasChangedOffset;
void (*set_hasChanged)(void *_instance, bool value);
DWORD GetEnumeratorOffset;
void *(*GetEnumerator)(void *_instance);
DWORD GetChildOffset;
void *(*GetChild)(void *_instance, int index);
DWORD get_position_InjectedOffset;
void (*get_position_Injected)(void *_instance, Vector3 *ret);
DWORD set_position_InjectedOffset;
void (*set_position_Injected)(void *_instance, Vector3 *value);
DWORD get_localPosition_InjectedOffset;
void (*get_localPosition_Injected)(void *_instance, Vector3 *ret);
DWORD set_localPosition_InjectedOffset;
void (*set_localPosition_Injected)(void *_instance, Vector3 *value);
DWORD get_localScale_InjectedOffset;
void (*get_localScale_Injected)(void *_instance, Vector3 *ret);
DWORD set_localScale_InjectedOffset;
void (*set_localScale_Injected)(void *_instance, Vector3 *value);
DWORD RotateAroundInternal_InjectedOffset;
void (*RotateAroundInternal_Injected)(void *_instance, Vector3 *axis, float angle);
DWORD Internal_LookAt_InjectedOffset;
void (*Internal_LookAt_Injected)(void *_instance, Vector3 *worldPosition, Vector3 *worldUp);
DWORD TransformDirection_InjectedOffset;
void (*TransformDirection_Injected)(void *_instance, Vector3 *direction, Vector3 *ret);
DWORD InverseTransformDirection_InjectedOffset;
void (*InverseTransformDirection_Injected)(void *_instance, Vector3 *direction, Vector3 *ret);
DWORD TransformPoint_InjectedOffset;
void (*TransformPoint_Injected)(void *_instance, Vector3 *position, Vector3 *ret);
DWORD InverseTransformPoint_InjectedOffset;
void (*InverseTransformPoint_Injected)(void *_instance, Vector3 *position, Vector3 *ret);
DWORD get_lossyScale_InjectedOffset;
void (*get_lossyScale_Injected)(void *_instance, Vector3 *ret);
}Transform;
struct SpriteRenderer {
DWORD set_spriteOffset;
void (*set_sprite)(void *_instance, void *value);
DWORD get_sizeOffset;
Vector2 (*get_size)(void *_instance);
DWORD set_sizeOffset;
void (*set_size)(void *_instance, Vector2 value);
}SpriteRenderer;
struct Sprite {
DWORD GetPackingModeOffset;
int (*GetPackingMode)(void *_instance);
DWORD GetPackedOffset;
int (*GetPacked)(void *_instance);
DWORD GetTextureRectOffset;
int(*GetTextureRect)(void *_instance);
DWORD GetInnerUVsOffset;
int(*GetInnerUVs)(void *_instance);
DWORD GetOuterUVsOffset;
int(*GetOuterUVs)(void *_instance);
DWORD GetPaddingOffset;
int(*GetPadding)(void *_instance);
DWORD get_boundsOffset;
int(*get_bounds)(void *_instance);
DWORD get_rectOffset;
int(*get_rect)(void *_instance);
DWORD get_borderOffset;
int(*get_border)(void *_instance);
DWORD get_textureOffset;
void *(*get_texture)(void *_instance);
DWORD get_pixelsPerUnitOffset;
float (*get_pixelsPerUnit)(void *_instance);
DWORD get_associatedAlphaSplitTextureOffset;
void *(*get_associatedAlphaSplitTexture)(void *_instance);
DWORD get_pivotOffset;
Vector2 (*get_pivot)(void *_instance);
DWORD get_packedOffset;
bool (*get_packed)(void *_instance);
DWORD get_packingModeOffset;
int(*get_packingMode)(void *_instance);
DWORD get_textureRectOffset;
int(*get_textureRect)(void *_instance);
DWORD get_verticesOffset;
DWORD get_trianglesOffset;
DWORD get_uvOffset;
DWORD Create4Offset;
void *(*Create4)(void *texture, int rect, Vector2 pivot, float pixelsPerUnit);
DWORD Create5Offset;
void *(*Create5)(void *texture, int rect, Vector2 pivot);
}Sprite;
}
namespace UnityEngineAssertions{
struct Assert {
DWORD FailOffset;
void (*Fail)(monoString *message, monoString *userMessage);
DWORD AreEqual2Offset;
void (*AreEqual2)(void *expected, void *actual, monoString *message);
DWORD AreEqual3Offset;
void (*AreEqual3)(int expected, int actual);
}Assert;
struct AssertionException {
DWORD get_MessageOffset;
monoString *(*get_Message)(void *_instance);
}AssertionException;
struct AssertionMessageUtil {
DWORD GetMessageOffset;
monoString *(*GetMessage)(monoString *failureMessage);
DWORD GetMessage1Offset;
monoString *(*GetMessage1)(monoString *failureMessage, monoString *expected);
}AssertionMessageUtil;
}
namespace UnityEngineEvents{
struct ArgumentCache {
DWORD get_unityObjectArgumentOffset;
void *(*get_unityObjectArgument)(void *_instance);
DWORD get_unityObjectArgumentAssemblyTypeNameOffset;
monoString *(*get_unityObjectArgumentAssemblyTypeName)(void *_instance);
DWORD get_intArgumentOffset;
int (*get_intArgument)(void *_instance);
DWORD get_floatArgumentOffset;
float (*get_floatArgument)(void *_instance);
DWORD get_stringArgumentOffset;
monoString *(*get_stringArgument)(void *_instance);
DWORD get_boolArgumentOffset;
bool (*get_boolArgument)(void *_instance);
DWORD TidyAssemblyTypeNameOffset;
void (*TidyAssemblyTypeName)(void *_instance);
DWORD OnBeforeSerializeOffset;
void (*OnBeforeSerialize)(void *_instance);
DWORD OnAfterDeserializeOffset;
void (*OnAfterDeserialize)(void *_instance);
}ArgumentCache;
struct BaseInvokableCall {
DWORD AllowInvokeOffset;
bool (*AllowInvoke)(void *delegate);
}BaseInvokableCall;
struct InvokableCall {
DWORD add_DelegateOffset;
void (*add_Delegate)(void *_instance, void *value);
DWORD remove_DelegateOffset;
void (*remove_Delegate)(void *_instance, void *value);
DWORD ctor1Offset;
void (*ctor1)(void *_instance, void *action);
DWORD Invoke1Offset;
void (*Invoke1)(void *_instance);
}InvokableCall;
struct PersistentCall {
DWORD get_targetOffset;
void *(*get_target)(void *_instance);
DWORD get_methodNameOffset;
monoString *(*get_methodName)(void *_instance);
DWORD get_modeOffset;
int(*get_mode)(void *_instance);
DWORD get_argumentsOffset;
void *(*get_arguments)(void *_instance);
DWORD set_callStateOffset;
void (*set_callState)(void *_instance, int value);
DWORD IsValidOffset;
bool (*IsValid)(void *_instance);
DWORD GetRuntimeCallOffset;
void *(*GetRuntimeCall)(void *_instance, void *theEvent);
DWORD GetObjectCallOffset;
void *(*GetObjectCall)(void *target, void *method, void *arguments);
}PersistentCall;
struct PersistentCallGroup {
DWORD get_CountOffset;
int (*get_Count)(void *_instance);
DWORD GetListenerOffset;
void *(*GetListener)(void *_instance, int index);
DWORD InitializeOffset;
void (*Initialize)(void *_instance, void *invokableList, void *unityEventBase);
}PersistentCallGroup;
struct InvokableCallList {
DWORD AddPersistentInvokableCallOffset;
void (*AddPersistentInvokableCall)(void *_instance, void *call);
DWORD AddListenerOffset;
void (*AddListener)(void *_instance, void *call);
DWORD ClearOffset;
void (*Clear)(void *_instance);
DWORD ClearPersistentOffset;
void (*ClearPersistent)(void *_instance);
DWORD PrepareInvokeOffset;
}InvokableCallList;
struct UnityEventBase {
DWORD UnityEngineISerializationCallbackReceiverOnBeforeSerializeOffset;
void (*UnityEngineISerializationCallbackReceiverOnBeforeSerialize)(void *_instance);
DWORD UnityEngineISerializationCallbackReceiverOnAfterDeserializeOffset;
void (*UnityEngineISerializationCallbackReceiverOnAfterDeserialize)(void *_instance);
DWORD FindMethodOffset;
void *(*FindMethod)(void *_instance, void *call);
DWORD GetPersistentEventCountOffset;
int (*GetPersistentEventCount)(void *_instance);
DWORD DirtyPersistentCallsOffset;
void (*DirtyPersistentCalls)(void *_instance);
DWORD RebuildPersistentCallsIfNeededOffset;
void (*RebuildPersistentCallsIfNeeded)(void *_instance);
DWORD SetPersistentListenerStateOffset;
void (*SetPersistentListenerState)(void *_instance, int index, int state);
DWORD AddCallOffset;
void (*AddCall)(void *_instance, void *call);
DWORD RemoveAllListenersOffset;
void (*RemoveAllListeners)(void *_instance);
DWORD PrepareInvokeOffset;
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
}UnityEventBase;
struct UnityAction {
DWORD InvokeOffset;
void (*Invoke)(void *_instance);
DWORD EndInvokeOffset;
void (*EndInvoke)(void *_instance, void *result);
}UnityAction;
struct UnityEvent {
DWORD AddListenerOffset;
void (*AddListener)(void *_instance, void *call);
DWORD RemoveListenerOffset;
void (*RemoveListener)(void *_instance, void *call);
DWORD GetDelegate1Offset;
void *(*GetDelegate1)(void *action);
DWORD InvokeOffset;
void (*Invoke)(void *_instance);
}UnityEvent;
}
namespace UnityEngineExperimentalGlobalIllumination{
struct LinearColor {
DWORD ConvertOffset;
int(*Convert)(Color color, float intensity);
DWORD BlackOffset;
int(*Black)();
}LinearColor;
struct LightDataGI {
DWORD InitNoBakeOffset;
void (*InitNoBake)(void *_instance, int lightInstanceID);
}LightDataGI;
struct LightmapperUtils {
DWORD ExtractIndirectOffset;
int(*ExtractIndirect)(void *l);
DWORD ExtractInnerConeOffset;
float (*ExtractInnerCone)(void *l);
}LightmapperUtils;
struct Lightmapping {
DWORD SetDelegateOffset;
void (*SetDelegate)(void *del);
DWORD GetDelegateOffset;
void *(*GetDelegate)();
DWORD ResetDelegateOffset;
void (*ResetDelegate)();
}Lightmapping;
}
namespace UnityEngineExperimentalPlayables{
struct CameraPlayable {
DWORD GetHandleOffset;
int(*GetHandle)(void *_instance);
DWORD EqualsOffset;
bool (*Equals)(void *_instance, int other);
}CameraPlayable;
struct MaterialEffectPlayable {
DWORD GetHandleOffset;
int(*GetHandle)(void *_instance);
DWORD EqualsOffset;
bool (*Equals)(void *_instance, int other);
}MaterialEffectPlayable;
struct TextureMixerPlayable {
DWORD GetHandleOffset;
int(*GetHandle)(void *_instance);
DWORD EqualsOffset;
bool (*Equals)(void *_instance, int other);
}TextureMixerPlayable;
}
namespace UnityEngineExperimentalRendering{
struct BuiltinRuntimeReflectionSystem {
DWORD TickRealtimeProbesOffset;
bool (*TickRealtimeProbes)(void *_instance);
DWORD DisposeOffset;
void (*Dispose)(void *_instance);
DWORD Dispose1Offset;
void (*Dispose1)(void *_instance, bool disposing);
DWORD BuiltinUpdateOffset;
bool (*BuiltinUpdate)();
DWORD Internal_BuiltinRuntimeReflectionSystem_NewOffset;
void *(*Internal_BuiltinRuntimeReflectionSystem_New)();
}BuiltinRuntimeReflectionSystem;
struct IScriptableRuntimeReflectionSystem {
}IScriptableRuntimeReflectionSystem;
struct ScriptableRuntimeReflectionSystemSettings {
DWORD set_Internal_ScriptableRuntimeReflectionSystemSettings_systemOffset;
void (*set_Internal_ScriptableRuntimeReflectionSystemSettings_system)(void *value);
DWORD get_Internal_ScriptableRuntimeReflectionSystemSettings_instanceOffset;
void *(*get_Internal_ScriptableRuntimeReflectionSystemSettings_instance)();
DWORD ScriptingDirtyReflectionSystemInstanceOffset;
void (*ScriptingDirtyReflectionSystemInstance)();
}ScriptableRuntimeReflectionSystemSettings;
struct ScriptableRuntimeReflectionSystemWrapper {
DWORD get_implementationOffset;
void *(*get_implementation)(void *_instance);
DWORD set_implementationOffset;
void (*set_implementation)(void *_instance, void *value);
}ScriptableRuntimeReflectionSystemWrapper;
struct GraphicsFormatUtility {
DWORD GetGraphicsFormatOffset;
int(*GetGraphicsFormat)(int format, bool isSRGB);
DWORD GetGraphicsFormat_Native_TextureFormatOffset;
int(*GetGraphicsFormat_Native_TextureFormat)(int format, bool isSRGB);
DWORD GetGraphicsFormat1Offset;
int(*GetGraphicsFormat1)(int format, bool isSRGB);
DWORD GetGraphicsFormat_Native_RenderTextureFormatOffset;
int(*GetGraphicsFormat_Native_RenderTextureFormat)(int format, bool isSRGB);
DWORD GetGraphicsFormat11Offset;
int(*GetGraphicsFormat11)(int format, int readWrite);
DWORD IsSRGBFormatOffset;
bool (*IsSRGBFormat)(int format);
DWORD GetRenderTextureFormatOffset;
int(*GetRenderTextureFormat)(int format);
DWORD IsCompressedTextureFormatOffset;
bool (*IsCompressedTextureFormat)(int format);
DWORD IsCrunchFormatOffset;
bool (*IsCrunchFormat)(int format);
}GraphicsFormatUtility;
}
namespace UnityEngineInternal{
struct DefaultValueAttribute {
DWORD get_ValueOffset;
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
}DefaultValueAttribute;
struct ExcludeFromDocsAttribute {
}ExcludeFromDocsAttribute;
}
namespace UnityEngineNetworkingPlayerConnection{
struct MessageEventArgs {
}MessageEventArgs;
struct PlayerConnection {
DWORD get_instanceOffset;
void *(*get_instance)();
DWORD get_isConnectedOffset;
bool (*get_isConnected)(void *_instance);
DWORD CreateInstanceOffset;
void *(*CreateInstance)();
DWORD OnEnableOffset;
void (*OnEnable)(void *_instance);
DWORD GetConnectionNativeApiOffset;
void *(*GetConnectionNativeApi)(void *_instance);
DWORD BlockUntilRecvMsgOffset;
bool (*BlockUntilRecvMsg)(void *_instance, int messageId, int timeout);
DWORD DisconnectAllOffset;
void (*DisconnectAll)(void *_instance);
DWORD ConnectedCallbackInternalOffset;
void (*ConnectedCallbackInternal)(int playerId);
DWORD DisconnectedCallbackOffset;
void (*DisconnectedCallback)(int playerId);
}PlayerConnection;
struct PlayerEditorConnectionEvents {
DWORD AddAndCreateOffset;
}PlayerEditorConnectionEvents;
}
namespace UnityEnginePlayables{
struct INotificationReceiver {
}INotificationReceiver;
struct IPlayableBehaviour {
}IPlayableBehaviour;
struct Playable {
DWORD get_NullOffset;
int(*get_Null)();
DWORD GetHandleOffset;
int(*GetHandle)(void *_instance);
DWORD EqualsOffset;
bool (*Equals)(void *_instance, int other);
}Playable;
struct PlayableAsset {
DWORD get_durationOffset;
DWORD get_outputsOffset;
}PlayableAsset;
struct PlayableBehaviour {
DWORD OnGraphStartOffset;
void (*OnGraphStart)(void *_instance, int playable);
DWORD OnGraphStopOffset;
void (*OnGraphStop)(void *_instance, int playable);
DWORD OnPlayableCreateOffset;
void (*OnPlayableCreate)(void *_instance, int playable);
DWORD OnPlayableDestroyOffset;
void (*OnPlayableDestroy)(void *_instance, int playable);
DWORD OnBehaviourPlayOffset;
void (*OnBehaviourPlay)(void *_instance, int playable, int info);
DWORD OnBehaviourPauseOffset;
void (*OnBehaviourPause)(void *_instance, int playable, int info);
DWORD PrepareFrameOffset;
void (*PrepareFrame)(void *_instance, int playable, int info);
DWORD CloneOffset;
}PlayableBehaviour;
struct PlayableBinding {
}PlayableBinding;
struct PlayableHandle {
DWORD get_NullOffset;
int(*get_Null)();
DWORD op_EqualityOffset;
bool (*op_Equality)(int x, int y);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, int other);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD CompareVersionOffset;
bool (*CompareVersion)(int lhs, int rhs);
DWORD IsValidOffset;
bool (*IsValid)(void *_instance);
DWORD GetPlayableTypeOffset;
void *(*GetPlayableType)(void *_instance);
}PlayableHandle;
struct PlayableOutput {
DWORD GetHandleOffset;
int(*GetHandle)(void *_instance);
DWORD EqualsOffset;
bool (*Equals)(void *_instance, int other);
}PlayableOutput;
struct PlayableOutputHandle {
DWORD get_NullOffset;
int(*get_Null)();
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD op_EqualityOffset;
bool (*op_Equality)(int lhs, int rhs);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, int other);
DWORD CompareVersionOffset;
bool (*CompareVersion)(int lhs, int rhs);
}PlayableOutputHandle;
}
namespace UnityEngineProfiling{
struct Profiler {
DWORD GetTotalAllocatedMemoryOffset;
DWORD GetTotalAllocatedMemoryLongOffset;
DWORD GetTotalReservedMemoryOffset;
DWORD GetTotalReservedMemoryLongOffset;
}Profiler;
}
namespace UnityEngineProfilingExperimental{
struct DebugScreenCapture {
DWORD set_imageFormatOffset;
void (*set_imageFormat)(void *_instance, int value);
DWORD set_widthOffset;
void (*set_width)(void *_instance, int value);
DWORD set_heightOffset;
void (*set_height)(void *_instance, int value);
}DebugScreenCapture;
}
namespace UnityEngineProfilingMemoryExperimental{
struct MetaData {
}MetaData;
struct MemoryProfiler {
DWORD PrepareMetadataOffset;
DWORD FinalizeSnapshotOffset;
void (*FinalizeSnapshot)(monoString *path, bool result);
}MemoryProfiler;
}
namespace UnityEngineRendering{
struct RenderTargetIdentifier {
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD EqualsOffset;
bool (*Equals)(void *_instance, int rhs);
}RenderTargetIdentifier;
struct GraphicsSettings {
DWORD get_lightsUseLinearIntensityOffset;
bool (*get_lightsUseLinearIntensity)();
DWORD AllowEnlightenSupportForUpgradedProjectOffset;
bool (*AllowEnlightenSupportForUpgradedProject)();
DWORD get_renderPipelineAssetOffset;
void *(*get_renderPipelineAsset)();
DWORD get_INTERNAL_defaultRenderPipelineOffset;
void *(*get_INTERNAL_defaultRenderPipeline)();
DWORD get_defaultRenderPipelineOffset;
void *(*get_defaultRenderPipeline)();
}GraphicsSettings;
struct OnDemandRendering {
DWORD get_renderFrameIntervalOffset;
int (*get_renderFrameInterval)();
}OnDemandRendering;
struct SphericalHarmonicsL2 {
DWORD get_ItemOffset;
float (*get_Item)(void *_instance, int rgb, int coefficient);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
DWORD Equals1Offset;
bool (*Equals1)(void *_instance, int other);
DWORD op_EqualityOffset;
bool (*op_Equality)(int lhs, int rhs);
}SphericalHarmonicsL2;
struct LODParameters {
DWORD EqualsOffset;
bool (*Equals)(void *_instance, int other);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
}LODParameters;
struct RenderPipeline {
DWORD get_disposedOffset;
bool (*get_disposed)(void *_instance);
DWORD set_disposedOffset;
void (*set_disposed)(void *_instance, bool value);
DWORD DisposeOffset;
void (*Dispose)(void *_instance);
DWORD Dispose1Offset;
void (*Dispose1)(void *_instance, bool disposing);
}RenderPipeline;
struct RenderPipelineAsset {
DWORD InternalCreatePipelineOffset;
void *(*InternalCreatePipeline)(void *_instance);
DWORD get_renderingLayerMaskNamesOffset;
DWORD get_defaultMaterialOffset;
void *(*get_defaultMaterial)(void *_instance);
DWORD get_autodeskInteractiveShaderOffset;
void *(*get_autodeskInteractiveShader)(void *_instance);
DWORD get_autodeskInteractiveTransparentShaderOffset;
void *(*get_autodeskInteractiveTransparentShader)(void *_instance);
DWORD get_autodeskInteractiveMaskedShaderOffset;
void *(*get_autodeskInteractiveMaskedShader)(void *_instance);
DWORD get_terrainDetailLitShaderOffset;
void *(*get_terrainDetailLitShader)(void *_instance);
DWORD get_terrainDetailGrassShaderOffset;
void *(*get_terrainDetailGrassShader)(void *_instance);
DWORD get_terrainDetailGrassBillboardShaderOffset;
void *(*get_terrainDetailGrassBillboardShader)(void *_instance);
DWORD get_defaultParticleMaterialOffset;
void *(*get_defaultParticleMaterial)(void *_instance);
DWORD get_defaultLineMaterialOffset;
void *(*get_defaultLineMaterial)(void *_instance);
DWORD get_defaultTerrainMaterialOffset;
void *(*get_defaultTerrainMaterial)(void *_instance);
DWORD get_defaultUIMaterialOffset;
void *(*get_defaultUIMaterial)(void *_instance);
DWORD get_defaultUIOverdrawMaterialOffset;
void *(*get_defaultUIOverdrawMaterial)(void *_instance);
DWORD get_defaultUIETC1SupportedMaterialOffset;
void *(*get_defaultUIETC1SupportedMaterial)(void *_instance);
DWORD get_default2DMaterialOffset;
void *(*get_default2DMaterial)(void *_instance);
DWORD get_defaultShaderOffset;
void *(*get_defaultShader)(void *_instance);
DWORD get_defaultSpeedTree7ShaderOffset;
void *(*get_defaultSpeedTree7Shader)(void *_instance);
DWORD get_defaultSpeedTree8ShaderOffset;
void *(*get_defaultSpeedTree8Shader)(void *_instance);
DWORD OnValidateOffset;
void (*OnValidate)(void *_instance);
DWORD OnDisableOffset;
void (*OnDisable)(void *_instance);
}RenderPipelineAsset;
struct RenderPipelineManager {
DWORD get_currentPipelineOffset;
void *(*get_currentPipeline)();
DWORD set_currentPipelineOffset;
void (*set_currentPipeline)(void *value);
DWORD CleanupRenderPipelineOffset;
void (*CleanupRenderPipeline)();
DWORD GetCamerasOffset;
void (*GetCameras)(int context);
DWORD PrepareRenderPipelineOffset;
void (*PrepareRenderPipeline)(void *pipelineAsset);
}RenderPipelineManager;
struct ScriptableRenderContext {
DWORD GetNumberOfCameras_InternalOffset;
int (*GetNumberOfCameras_Internal)(void *_instance);
DWORD GetCamera_InternalOffset;
void *(*GetCamera_Internal)(void *_instance, int index);
DWORD GetNumberOfCamerasOffset;
int (*GetNumberOfCameras)(void *_instance);
DWORD GetCameraOffset;
void *(*GetCamera)(void *_instance, int index);
DWORD EqualsOffset;
bool (*Equals)(void *_instance, int other);
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
}ScriptableRenderContext;
struct SupportedRenderingFeatures {
DWORD get_activeOffset;
void *(*get_active)();
DWORD set_activeOffset;
void (*set_active)(void *value);
DWORD get_defaultMixedLightingModesOffset;
int(*get_defaultMixedLightingModes)(void *_instance);
DWORD get_mixedLightingModesOffset;
int(*get_mixedLightingModes)(void *_instance);
DWORD get_lightmapBakeTypesOffset;
int(*get_lightmapBakeTypes)(void *_instance);
DWORD get_lightmapsModesOffset;
int(*get_lightmapsModes)(void *_instance);
DWORD get_enlightenOffset;
bool (*get_enlighten)(void *_instance);
DWORD IsMixedLightingModeSupportedOffset;
bool (*IsMixedLightingModeSupported)(int mixedMode);
DWORD IsLightmapBakeTypeSupportedOffset;
bool (*IsLightmapBakeTypeSupported)(int bakeType);
}SupportedRenderingFeatures;
struct BatchCullingContext {
}BatchCullingContext;
struct BatchRendererGroup {
}BatchRendererGroup;
}
namespace UnityEngineSceneManagement{
struct Scene {
DWORD IsValidInternalOffset;
bool (*IsValidInternal)(int sceneHandle);
DWORD GetNameInternalOffset;
monoString *(*GetNameInternal)(int sceneHandle);
DWORD GetIsLoadedInternalOffset;
bool (*GetIsLoadedInternal)(int sceneHandle);
DWORD GetBuildIndexInternalOffset;
int (*GetBuildIndexInternal)(int sceneHandle);
DWORD GetRootCountInternalOffset;
int (*GetRootCountInternal)(int sceneHandle);
DWORD get_handleOffset;
int (*get_handle)(void *_instance);
DWORD IsValidOffset;
bool (*IsValid)(void *_instance);
DWORD get_nameOffset;
monoString *(*get_name)(void *_instance);
DWORD get_isLoadedOffset;
bool (*get_isLoaded)(void *_instance);
DWORD get_buildIndexOffset;
int (*get_buildIndex)(void *_instance);
DWORD get_rootCountOffset;
int (*get_rootCount)(void *_instance);
DWORD GetRootGameObjectsOffset;
DWORD GetHashCodeOffset;
int (*GetHashCode)(void *_instance);
}Scene;
struct SceneManagerAPIInternal {
DWORD LoadSceneAsyncNameIndexInternalOffset;
void *(*LoadSceneAsyncNameIndexInternal)(monoString *sceneName, int sceneBuildIndex, int parameters, bool mustCompleteNextFrame);
}SceneManagerAPIInternal;
struct SceneManager {
DWORD get_sceneCountOffset;
int (*get_sceneCount)();
DWORD get_sceneCountInBuildSettingsOffset;
int (*get_sceneCountInBuildSettings)();
DWORD GetActiveSceneOffset;
int(*GetActiveScene)();
DWORD SetActiveSceneOffset;
bool (*SetActiveScene)(int scene);
DWORD GetSceneAtOffset;
int(*GetSceneAt)(int index);
DWORD LoadSceneAsyncNameIndexInternalOffset;
void *(*LoadSceneAsyncNameIndexInternal)(monoString *sceneName, int sceneBuildIndex, int parameters, bool mustCompleteNextFrame);
DWORD GetAllScenesOffset;
DWORD LoadSceneOffset;
void (*LoadScene)(monoString *sceneName, int mode);
DWORD LoadScene1Offset;
void (*LoadScene1)(monoString *sceneName);
DWORD LoadScene2Offset;
int(*LoadScene2)(monoString *sceneName, int parameters);
DWORD LoadScene3Offset;
void (*LoadScene3)(int sceneBuildIndex, int mode);
DWORD LoadScene4Offset;
void (*LoadScene4)(int sceneBuildIndex);
DWORD LoadScene5Offset;
int(*LoadScene5)(int sceneBuildIndex, int parameters);
DWORD LoadSceneAsyncOffset;
void *(*LoadSceneAsync)(int sceneBuildIndex, int mode);
DWORD LoadSceneAsync1Offset;
void *(*LoadSceneAsync1)(int sceneBuildIndex, int parameters);
DWORD LoadSceneAsync2Offset;
void *(*LoadSceneAsync2)(monoString *sceneName, int mode);
DWORD LoadSceneAsync3Offset;
void *(*LoadSceneAsync3)(monoString *sceneName);
DWORD LoadSceneAsync4Offset;
void *(*LoadSceneAsync4)(monoString *sceneName, int parameters);
DWORD Internal_SceneLoadedOffset;
void (*Internal_SceneLoaded)(int scene, int mode);
DWORD Internal_SceneUnloadedOffset;
void (*Internal_SceneUnloaded)(int scene);
DWORD Internal_ActiveSceneChangedOffset;
void (*Internal_ActiveSceneChanged)(int previousActiveScene, int newActiveScene);
}SceneManager;
struct LoadSceneParameters {
}LoadSceneParameters;
struct SceneUtility {
DWORD GetScenePathByBuildIndexOffset;
monoString *(*GetScenePathByBuildIndex)(int buildIndex);
}SceneUtility;
}
namespace UnityEngineScripting{
struct PreserveAttribute {
}PreserveAttribute;
}
namespace UnityEngineScriptingAPIUpdating{
struct MovedFromAttributeData {
DWORD SetOffset;
void (*Set)(void *_instance, bool autoUpdateAPI, monoString *sourceNamespace, monoString *sourceAssembly, monoString *sourceClassName);
}MovedFromAttributeData;
struct MovedFromAttribute {
}MovedFromAttribute;
}
namespace UnityEngineSerialization{
struct FormerlySerializedAsAttribute {
}FormerlySerializedAsAttribute;
}
namespace UnityEngineSprites{
struct DataUtility {
DWORD GetInnerUVOffset;
int(*GetInnerUV)(void *sprite);
DWORD GetOuterUVOffset;
int(*GetOuterUV)(void *sprite);
DWORD GetPaddingOffset;
int(*GetPadding)(void *sprite);
DWORD GetMinSizeOffset;
Vector2 (*GetMinSize)(void *sprite);
}DataUtility;
}
namespace UnityEngineU2D{
struct SpriteAtlasManager {
DWORD RequestAtlasOffset;
bool (*RequestAtlas)(monoString *tag);
DWORD PostRegisteredAtlasOffset;
void (*PostRegisteredAtlas)(void *spriteAtlas);
DWORD RegisterOffset;
void (*Register)(void *spriteAtlas);
}SpriteAtlasManager;
struct SpriteAtlas {
DWORD CanBindToOffset;
bool (*CanBindTo)(void *_instance, void *sprite);
}SpriteAtlas;
}
namespace UnityEngine_ScriptingAPIUpdating{
struct APIUpdaterRuntimeHelpers {
}APIUpdaterRuntimeHelpers;
}
namespace UnityEngineInternal{
struct MathfInternal {
}MathfInternal;
struct TypeInferenceRuleAttribute {
DWORD ctor1Offset;
void (*ctor1)(void *_instance, monoString *rule);
DWORD ToStringOffset;
monoString *(*ToString)(void *_instance);
}TypeInferenceRuleAttribute;
struct GenericStack {
}GenericStack;
}
void AssignUnityPointers() 
 { 
 JetBrainsAnnotations::MeansImplicitUseAttribute.ctor1Offset = getRealOffset(0x112E0F8);
JetBrainsAnnotations::MeansImplicitUseAttribute.ctor1 = (void(*)(void*, int, int))JetBrainsAnnotations::MeansImplicitUseAttribute.ctor1Offset;

UnityCollections::NativeLeakDetection.InitializeOffset = getRealOffset(0x112E1B8);
UnityCollections::NativeLeakDetection.Initialize = (void(*)())UnityCollections::NativeLeakDetection.InitializeOffset;

UnityJobs::JobHandle.ScheduleBatchedJobsOffset = getRealOffset(0x112E214);
UnityJobs::JobHandle.ScheduleBatchedJobs = (void(*)())UnityJobs::JobHandle.ScheduleBatchedJobsOffset;

UnityEngine::SortingLayer.GetLayerValueFromIDOffset = getRealOffset(0x1055830);
UnityEngine::SortingLayer.GetLayerValueFromID = (int(*)(int))UnityEngine::SortingLayer.GetLayerValueFromIDOffset;

UnityEngine::SortingLayer.NameToIDOffset = getRealOffset(0x1055880);
UnityEngine::SortingLayer.NameToID = (int(*)(monoString*))UnityEngine::SortingLayer.NameToIDOffset;

UnityEngine::SortingLayer.IDToNameOffset = getRealOffset(0x10558D0);
UnityEngine::SortingLayer.IDToName = (monoString *(*)(int))UnityEngine::SortingLayer.IDToNameOffset;

UnityEngine::SortingLayer.IsValidOffset = getRealOffset(0x1055920);
UnityEngine::SortingLayer.IsValid = (bool(*)(int))UnityEngine::SortingLayer.IsValidOffset;

UnityEngine::Keyframe.ctor1Offset = getRealOffset(0x3F2B1C);
UnityEngine::Keyframe.ctor1 = (void(*)(void*, float, float, float, float))UnityEngine::Keyframe.ctor1Offset;

UnityEngine::Keyframe.get_timeOffset = getRealOffset(0x3F2B40);
UnityEngine::Keyframe.get_time = (float(*)(void*))UnityEngine::Keyframe.get_timeOffset;

UnityEngine::Keyframe.get_valueOffset = getRealOffset(0x3F2B48);
UnityEngine::Keyframe.get_value = (float(*)(void*))UnityEngine::Keyframe.get_valueOffset;

UnityEngine::Keyframe.get_inTangentOffset = getRealOffset(0x3F2B50);
UnityEngine::Keyframe.get_inTangent = (float(*)(void*))UnityEngine::Keyframe.get_inTangentOffset;

UnityEngine::Keyframe.get_outTangentOffset = getRealOffset(0x3F2B58);
UnityEngine::Keyframe.get_outTangent = (float(*)(void*))UnityEngine::Keyframe.get_outTangentOffset;

UnityEngine::AnimationCurve.FinalizeOffset = getRealOffset(0x112E3A4);
UnityEngine::AnimationCurve.Finalize = (void(*)(void*))UnityEngine::AnimationCurve.FinalizeOffset;

UnityEngine::AnimationCurve.EvaluateOffset = getRealOffset(0x112E444);
UnityEngine::AnimationCurve.Evaluate = (float(*)(void*, float))UnityEngine::AnimationCurve.EvaluateOffset;

UnityEngine::AnimationCurve.get_keysOffset = getRealOffset(0x112E49C);
UnityEngine::AnimationCurve.get_ItemOffset = getRealOffset(0x112E53C);
UnityEngine::AnimationCurve.get_Item = (int (*)(void*, int))UnityEngine::AnimationCurve.get_ItemOffset;

UnityEngine::AnimationCurve.get_lengthOffset = getRealOffset(0x112E680);
UnityEngine::AnimationCurve.get_length = (int(*)(void*))UnityEngine::AnimationCurve.get_lengthOffset;

UnityEngine::AnimationCurve.GetKeyOffset = getRealOffset(0x112E5F0);
UnityEngine::AnimationCurve.GetKey = (int (*)(void*, int))UnityEngine::AnimationCurve.GetKeyOffset;

UnityEngine::AnimationCurve.GetKeysOffset = getRealOffset(0x112E4EC);
UnityEngine::AnimationCurve.EaseInOutOffset = getRealOffset(0x112E730);
UnityEngine::AnimationCurve.EaseInOut = (void *(*)(float, float, float, float))UnityEngine::AnimationCurve.EaseInOutOffset;

UnityEngine::AnimationCurve.ctor1Offset = getRealOffset(0x112E9F4);
UnityEngine::AnimationCurve.ctor1 = (void(*)(void*))UnityEngine::AnimationCurve.ctor1Offset;

UnityEngine::AnimationCurve.Equals1Offset = getRealOffset(0x112EB34);
UnityEngine::AnimationCurve.Equals1 = (bool(*)(void*, void *))UnityEngine::AnimationCurve.Equals1Offset;

UnityEngine::AnimationCurve.GetHashCodeOffset = getRealOffset(0x112EC28);
UnityEngine::AnimationCurve.GetHashCode = (int(*)(void*))UnityEngine::AnimationCurve.GetHashCodeOffset;

UnityEngine::Application.QuitOffset = getRealOffset(0x112EC34);
UnityEngine::Application.Quit = (void(*)(int))UnityEngine::Application.QuitOffset;

UnityEngine::Application.Quit1Offset = getRealOffset(0x112EC84);
UnityEngine::Application.Quit1 = (void(*)())UnityEngine::Application.Quit1Offset;

UnityEngine::Application.get_isPlayingOffset = getRealOffset(0x112ECD0);
UnityEngine::Application.get_isPlaying = (bool(*)())UnityEngine::Application.get_isPlayingOffset;

UnityEngine::Application.get_isFocusedOffset = getRealOffset(0x112ED18);
UnityEngine::Application.get_isFocused = (bool(*)())UnityEngine::Application.get_isFocusedOffset;

UnityEngine::Application.get_runInBackgroundOffset = getRealOffset(0x112ED60);
UnityEngine::Application.get_runInBackground = (bool(*)())UnityEngine::Application.get_runInBackgroundOffset;

UnityEngine::Application.set_runInBackgroundOffset = getRealOffset(0x112EDA8);
UnityEngine::Application.set_runInBackground = (void(*)(bool))UnityEngine::Application.set_runInBackgroundOffset;

UnityEngine::Application.get_dataPathOffset = getRealOffset(0x112EDF8);
UnityEngine::Application.get_dataPath = (monoString *(*)())UnityEngine::Application.get_dataPathOffset;

UnityEngine::Application.get_streamingAssetsPathOffset = getRealOffset(0x112EE40);
UnityEngine::Application.get_streamingAssetsPath = (monoString *(*)())UnityEngine::Application.get_streamingAssetsPathOffset;

UnityEngine::Application.get_persistentDataPathOffset = getRealOffset(0x112EE88);
UnityEngine::Application.get_persistentDataPath = (monoString *(*)())UnityEngine::Application.get_persistentDataPathOffset;

UnityEngine::Application.get_temporaryCachePathOffset = getRealOffset(0x112EED0);
UnityEngine::Application.get_temporaryCachePath = (monoString *(*)())UnityEngine::Application.get_temporaryCachePathOffset;

UnityEngine::Application.get_absoluteURLOffset = getRealOffset(0x112EF18);
UnityEngine::Application.get_absoluteURL = (monoString *(*)())UnityEngine::Application.get_absoluteURLOffset;

UnityEngine::Application.ExternalEvalOffset = getRealOffset(0x112EF60);
UnityEngine::Application.ExternalEval = (void(*)(monoString*))UnityEngine::Application.ExternalEvalOffset;

UnityEngine::Application.Internal_ExternalCallOffset = getRealOffset(0x112F034);
UnityEngine::Application.Internal_ExternalCall = (void(*)(monoString*))UnityEngine::Application.Internal_ExternalCallOffset;

UnityEngine::Application.get_unityVersionOffset = getRealOffset(0x112F084);
UnityEngine::Application.get_unityVersion = (monoString *(*)())UnityEngine::Application.get_unityVersionOffset;

UnityEngine::Application.get_versionOffset = getRealOffset(0x112F0CC);
UnityEngine::Application.get_version = (monoString *(*)())UnityEngine::Application.get_versionOffset;

UnityEngine::Application.get_cloudProjectIdOffset = getRealOffset(0x112F114);
UnityEngine::Application.get_cloudProjectId = (monoString *(*)())UnityEngine::Application.get_cloudProjectIdOffset;

UnityEngine::Application.OpenURLOffset = getRealOffset(0x112F15C);
UnityEngine::Application.OpenURL = (void(*)(monoString*))UnityEngine::Application.OpenURLOffset;

UnityEngine::Application.get_targetFrameRateOffset = getRealOffset(0x112F1AC);
UnityEngine::Application.get_targetFrameRate = (int(*)())UnityEngine::Application.get_targetFrameRateOffset;

UnityEngine::Application.set_targetFrameRateOffset = getRealOffset(0x112F1F4);
UnityEngine::Application.set_targetFrameRate = (void(*)(int))UnityEngine::Application.set_targetFrameRateOffset;

UnityEngine::Application.SetLogCallbackDefinedOffset = getRealOffset(0x112F244);
UnityEngine::Application.SetLogCallbackDefined = (void(*)(bool))UnityEngine::Application.SetLogCallbackDefinedOffset;

UnityEngine::Application.GetStackTraceLogTypeOffset = getRealOffset(0x112F294);
UnityEngine::Application.GetStackTraceLogType = (int (*)(int))UnityEngine::Application.GetStackTraceLogTypeOffset;

UnityEngine::Application.get_platformOffset = getRealOffset(0x112F2E4);
UnityEngine::Application.get_platform = (int (*)())UnityEngine::Application.get_platformOffset;

UnityEngine::Application.get_isMobilePlatformOffset = getRealOffset(0x112F32C);
UnityEngine::Application.get_isMobilePlatform = (bool(*)())UnityEngine::Application.get_isMobilePlatformOffset;

UnityEngine::Application.get_isConsolePlatformOffset = getRealOffset(0x112F3B0);
UnityEngine::Application.get_isConsolePlatform = (bool(*)())UnityEngine::Application.get_isConsolePlatformOffset;

UnityEngine::Application.get_systemLanguageOffset = getRealOffset(0x112F408);
UnityEngine::Application.get_systemLanguage = (int (*)())UnityEngine::Application.get_systemLanguageOffset;

UnityEngine::Application.get_internetReachabilityOffset = getRealOffset(0x112F450);
UnityEngine::Application.get_internetReachability = (int (*)())UnityEngine::Application.get_internetReachabilityOffset;

UnityEngine::Application.CallLowMemoryOffset = getRealOffset(0x112F498);
UnityEngine::Application.CallLowMemory = (void(*)())UnityEngine::Application.CallLowMemoryOffset;

UnityEngine::Application.add_logMessageReceivedOffset = getRealOffset(0x112F738);
UnityEngine::Application.add_logMessageReceived = (void(*)(void *))UnityEngine::Application.add_logMessageReceivedOffset;

UnityEngine::Application.remove_logMessageReceivedOffset = getRealOffset(0x112F818);
UnityEngine::Application.remove_logMessageReceived = (void(*)(void *))UnityEngine::Application.remove_logMessageReceivedOffset;

UnityEngine::Application.CallLogCallbackOffset = getRealOffset(0x112F8B8);
UnityEngine::Application.CallLogCallback = (void(*)(monoString*, monoString*, int, bool))UnityEngine::Application.CallLogCallbackOffset;

UnityEngine::Application.Internal_ApplicationWantsToQuitOffset = getRealOffset(0x112FE30);
UnityEngine::Application.Internal_ApplicationWantsToQuit = (bool(*)())UnityEngine::Application.Internal_ApplicationWantsToQuitOffset;

UnityEngine::Application.Internal_ApplicationQuitOffset = getRealOffset(0x113010C);
UnityEngine::Application.Internal_ApplicationQuit = (void(*)())UnityEngine::Application.Internal_ApplicationQuitOffset;

UnityEngine::Application.InvokeOnBeforeRenderOffset = getRealOffset(0x1130178);
UnityEngine::Application.InvokeOnBeforeRender = (void(*)())UnityEngine::Application.InvokeOnBeforeRenderOffset;

UnityEngine::Application.InvokeFocusChangedOffset = getRealOffset(0x1130380);
UnityEngine::Application.InvokeFocusChanged = (void(*)(bool))UnityEngine::Application.InvokeFocusChangedOffset;

UnityEngine::Application.InvokeDeepLinkActivatedOffset = getRealOffset(0x1130400);
UnityEngine::Application.InvokeDeepLinkActivated = (void(*)(monoString*))UnityEngine::Application.InvokeDeepLinkActivatedOffset;

UnityEngine::Application.get_levelCountOffset = getRealOffset(0x1130480);
UnityEngine::Application.get_levelCount = (int(*)())UnityEngine::Application.get_levelCountOffset;

UnityEngine::Application.get_loadedLevelOffset = getRealOffset(0x11304F4);
UnityEngine::Application.get_loadedLevel = (int(*)())UnityEngine::Application.get_loadedLevelOffset;

UnityEngine::Application.LoadLevelOffset = getRealOffset(0x1130588);
UnityEngine::Application.LoadLevel = (void(*)(int))UnityEngine::Application.LoadLevelOffset;

UnityEngine::Application.LoadLevel1Offset = getRealOffset(0x1130608);
UnityEngine::Application.LoadLevel1 = (void(*)(monoString*))UnityEngine::Application.LoadLevel1Offset;

UnityEngine::Application.LoadLevelAsyncOffset = getRealOffset(0x1130688);
UnityEngine::Application.LoadLevelAsync = (void *(*)(monoString*))UnityEngine::Application.LoadLevelAsyncOffset;

UnityEngine::Application.LoadLevelAdditiveAsyncOffset = getRealOffset(0x1130708);
UnityEngine::Application.LoadLevelAdditiveAsync = (void *(*)(monoString*))UnityEngine::Application.LoadLevelAdditiveAsyncOffset;

UnityEngine::Application.get_isEditorOffset = getRealOffset(0x1130788);
UnityEngine::Application.get_isEditor = (bool(*)())UnityEngine::Application.get_isEditorOffset;

UnityEngine::CachedAssetBundle.get_nameOffset = getRealOffset(0x3F1EF0);
UnityEngine::CachedAssetBundle.get_name = (monoString *(*)(void*))UnityEngine::CachedAssetBundle.get_nameOffset;

UnityEngine::CachedAssetBundle.get_hashOffset = getRealOffset(0x3F1EF8);
UnityEngine::CachedAssetBundle.get_hash = (int (*)(void*))UnityEngine::CachedAssetBundle.get_hashOffset;

UnityEngine::Caching.get_readyOffset = getRealOffset(0x1133578);
UnityEngine::Caching.get_ready = (bool(*)())UnityEngine::Caching.get_readyOffset;

UnityEngine::Camera.get_nearClipPlaneOffset = getRealOffset(0x11335C0);
UnityEngine::Camera.get_nearClipPlane = (float(*)(void*))UnityEngine::Camera.get_nearClipPlaneOffset;

UnityEngine::Camera.set_nearClipPlaneOffset = getRealOffset(0x1133610);
UnityEngine::Camera.set_nearClipPlane = (void(*)(void*, float))UnityEngine::Camera.set_nearClipPlaneOffset;

UnityEngine::Camera.get_farClipPlaneOffset = getRealOffset(0x1133668);
UnityEngine::Camera.get_farClipPlane = (float(*)(void*))UnityEngine::Camera.get_farClipPlaneOffset;

UnityEngine::Camera.set_farClipPlaneOffset = getRealOffset(0x11336B8);
UnityEngine::Camera.set_farClipPlane = (void(*)(void*, float))UnityEngine::Camera.set_farClipPlaneOffset;

UnityEngine::Camera.get_fieldOfViewOffset = getRealOffset(0x1133710);
UnityEngine::Camera.get_fieldOfView = (float(*)(void*))UnityEngine::Camera.get_fieldOfViewOffset;

UnityEngine::Camera.set_fieldOfViewOffset = getRealOffset(0x1133760);
UnityEngine::Camera.set_fieldOfView = (void(*)(void*, float))UnityEngine::Camera.set_fieldOfViewOffset;

UnityEngine::Camera.get_renderingPathOffset = getRealOffset(0x11337B8);
UnityEngine::Camera.get_renderingPath = (int (*)(void*))UnityEngine::Camera.get_renderingPathOffset;

UnityEngine::Camera.set_renderingPathOffset = getRealOffset(0x1133808);
UnityEngine::Camera.set_renderingPath = (void(*)(void*, int))UnityEngine::Camera.set_renderingPathOffset;

UnityEngine::Camera.get_allowHDROffset = getRealOffset(0x1133860);
UnityEngine::Camera.get_allowHDR = (bool(*)(void*))UnityEngine::Camera.get_allowHDROffset;

UnityEngine::Camera.set_allowHDROffset = getRealOffset(0x11338B0);
UnityEngine::Camera.set_allowHDR = (void(*)(void*, bool))UnityEngine::Camera.set_allowHDROffset;

UnityEngine::Camera.get_allowMSAAOffset = getRealOffset(0x1133908);
UnityEngine::Camera.get_allowMSAA = (bool(*)(void*))UnityEngine::Camera.get_allowMSAAOffset;

UnityEngine::Camera.set_allowMSAAOffset = getRealOffset(0x1133958);
UnityEngine::Camera.set_allowMSAA = (void(*)(void*, bool))UnityEngine::Camera.set_allowMSAAOffset;

UnityEngine::Camera.set_orthographicSizeOffset = getRealOffset(0x11339B0);
UnityEngine::Camera.set_orthographicSize = (void(*)(void*, float))UnityEngine::Camera.set_orthographicSizeOffset;

UnityEngine::Camera.get_orthographicOffset = getRealOffset(0x1133A08);
UnityEngine::Camera.get_orthographic = (bool(*)(void*))UnityEngine::Camera.get_orthographicOffset;

UnityEngine::Camera.set_orthographicOffset = getRealOffset(0x1133A58);
UnityEngine::Camera.set_orthographic = (void(*)(void*, bool))UnityEngine::Camera.set_orthographicOffset;

UnityEngine::Camera.get_depthOffset = getRealOffset(0x1133AB0);
UnityEngine::Camera.get_depth = (float(*)(void*))UnityEngine::Camera.get_depthOffset;

UnityEngine::Camera.set_depthOffset = getRealOffset(0x1133B00);
UnityEngine::Camera.set_depth = (void(*)(void*, float))UnityEngine::Camera.set_depthOffset;

UnityEngine::Camera.get_aspectOffset = getRealOffset(0x1133B58);
UnityEngine::Camera.get_aspect = (float(*)(void*))UnityEngine::Camera.get_aspectOffset;

UnityEngine::Camera.set_aspectOffset = getRealOffset(0x1133BA8);
UnityEngine::Camera.set_aspect = (void(*)(void*, float))UnityEngine::Camera.set_aspectOffset;

UnityEngine::Camera.get_cullingMaskOffset = getRealOffset(0x1133C00);
UnityEngine::Camera.get_cullingMask = (int(*)(void*))UnityEngine::Camera.get_cullingMaskOffset;

UnityEngine::Camera.set_cullingMaskOffset = getRealOffset(0x1133C50);
UnityEngine::Camera.set_cullingMask = (void(*)(void*, int))UnityEngine::Camera.set_cullingMaskOffset;

UnityEngine::Camera.get_eventMaskOffset = getRealOffset(0x1133CA8);
UnityEngine::Camera.get_eventMask = (int(*)(void*))UnityEngine::Camera.get_eventMaskOffset;

UnityEngine::Camera.set_layerCullSphericalOffset = getRealOffset(0x1133CF8);
UnityEngine::Camera.set_layerCullSpherical = (void(*)(void*, bool))UnityEngine::Camera.set_layerCullSphericalOffset;

UnityEngine::Camera.set_useOcclusionCullingOffset = getRealOffset(0x1133E9C);
UnityEngine::Camera.set_useOcclusionCulling = (void(*)(void*, bool))UnityEngine::Camera.set_useOcclusionCullingOffset;

UnityEngine::Camera.set_backgroundColorOffset = getRealOffset(0x1133EF4);
UnityEngine::Camera.set_backgroundColor = (void(*)(void*, Color))UnityEngine::Camera.set_backgroundColorOffset;

UnityEngine::Camera.get_clearFlagsOffset = getRealOffset(0x1133FB4);
UnityEngine::Camera.get_clearFlags = (int (*)(void*))UnityEngine::Camera.get_clearFlagsOffset;

UnityEngine::Camera.set_clearFlagsOffset = getRealOffset(0x1134004);
UnityEngine::Camera.set_clearFlags = (void(*)(void*, int))UnityEngine::Camera.set_clearFlagsOffset;

UnityEngine::Camera.get_depthTextureModeOffset = getRealOffset(0x113405C);
UnityEngine::Camera.get_depthTextureMode = (int (*)(void*))UnityEngine::Camera.get_depthTextureModeOffset;

UnityEngine::Camera.set_depthTextureModeOffset = getRealOffset(0x11340AC);
UnityEngine::Camera.set_depthTextureMode = (void(*)(void*, int))UnityEngine::Camera.set_depthTextureModeOffset;

UnityEngine::Camera.set_rectOffset = getRealOffset(0x1134104);
UnityEngine::Camera.set_rect = (void(*)(void*, int))UnityEngine::Camera.set_rectOffset;

UnityEngine::Camera.get_pixelRectOffset = getRealOffset(0x11341C4);
UnityEngine::Camera.get_pixelRect = (int (*)(void*))UnityEngine::Camera.get_pixelRectOffset;

UnityEngine::Camera.set_pixelRectOffset = getRealOffset(0x1134290);
UnityEngine::Camera.set_pixelRect = (void(*)(void*, int))UnityEngine::Camera.set_pixelRectOffset;

UnityEngine::Camera.get_pixelWidthOffset = getRealOffset(0x1134350);
UnityEngine::Camera.get_pixelWidth = (int(*)(void*))UnityEngine::Camera.get_pixelWidthOffset;

UnityEngine::Camera.get_pixelHeightOffset = getRealOffset(0x11343A0);
UnityEngine::Camera.get_pixelHeight = (int(*)(void*))UnityEngine::Camera.get_pixelHeightOffset;

UnityEngine::Camera.get_targetTextureOffset = getRealOffset(0x11343F0);
UnityEngine::Camera.get_targetTexture = (void *(*)(void*))UnityEngine::Camera.get_targetTextureOffset;

UnityEngine::Camera.set_targetTextureOffset = getRealOffset(0x1134440);
UnityEngine::Camera.set_targetTexture = (void(*)(void*, void *))UnityEngine::Camera.set_targetTextureOffset;

UnityEngine::Camera.get_targetDisplayOffset = getRealOffset(0x1134498);
UnityEngine::Camera.get_targetDisplay = (int(*)(void*))UnityEngine::Camera.get_targetDisplayOffset;

UnityEngine::Camera.get_worldToCameraMatrixOffset = getRealOffset(0x11344E8);
UnityEngine::Camera.get_worldToCameraMatrix = (int (*)(void*))UnityEngine::Camera.get_worldToCameraMatrixOffset;

UnityEngine::Camera.set_worldToCameraMatrixOffset = getRealOffset(0x11345E0);
UnityEngine::Camera.set_worldToCameraMatrix = (void(*)(void*, int))UnityEngine::Camera.set_worldToCameraMatrixOffset;

UnityEngine::Camera.get_projectionMatrixOffset = getRealOffset(0x11346F8);
UnityEngine::Camera.get_projectionMatrix = (int (*)(void*))UnityEngine::Camera.get_projectionMatrixOffset;

UnityEngine::Camera.set_projectionMatrixOffset = getRealOffset(0x11347F0);
UnityEngine::Camera.set_projectionMatrix = (void(*)(void*, int))UnityEngine::Camera.set_projectionMatrixOffset;

UnityEngine::Camera.ResetWorldToCameraMatrixOffset = getRealOffset(0x1134908);
UnityEngine::Camera.ResetWorldToCameraMatrix = (void(*)(void*))UnityEngine::Camera.ResetWorldToCameraMatrixOffset;

UnityEngine::Camera.WorldToScreenPointOffset = getRealOffset(0x1134958);
UnityEngine::Camera.WorldToScreenPoint = (Vector3 (*)(void*, Vector3, int))UnityEngine::Camera.WorldToScreenPointOffset;

UnityEngine::Camera.WorldToViewportPointOffset = getRealOffset(0x1134A5C);
UnityEngine::Camera.WorldToViewportPoint = (Vector3 (*)(void*, Vector3, int))UnityEngine::Camera.WorldToViewportPointOffset;

UnityEngine::Camera.ScreenToWorldPointOffset = getRealOffset(0x1134B60);
UnityEngine::Camera.ScreenToWorldPoint = (Vector3 (*)(void*, Vector3, int))UnityEngine::Camera.ScreenToWorldPointOffset;

UnityEngine::Camera.WorldToScreenPoint1Offset = getRealOffset(0x1134C64);
UnityEngine::Camera.WorldToScreenPoint1 = (Vector3 (*)(void*, Vector3))UnityEngine::Camera.WorldToScreenPoint1Offset;

UnityEngine::Camera.WorldToViewportPoint1Offset = getRealOffset(0x1134CB4);
UnityEngine::Camera.WorldToViewportPoint1 = (Vector3 (*)(void*, Vector3))UnityEngine::Camera.WorldToViewportPoint1Offset;

UnityEngine::Camera.ScreenToWorldPoint1Offset = getRealOffset(0x1134D04);
UnityEngine::Camera.ScreenToWorldPoint1 = (Vector3 (*)(void*, Vector3))UnityEngine::Camera.ScreenToWorldPoint1Offset;

UnityEngine::Camera.ScreenToViewportPointOffset = getRealOffset(0x1134D54);
UnityEngine::Camera.ScreenToViewportPoint = (Vector3 (*)(void*, Vector3))UnityEngine::Camera.ScreenToViewportPointOffset;

UnityEngine::Camera.ViewportPointToRayOffset = getRealOffset(0x1134E48);
UnityEngine::Camera.ViewportPointToRay = (int (*)(void*, Vector2, int))UnityEngine::Camera.ViewportPointToRayOffset;

UnityEngine::Camera.ViewportPointToRay1Offset = getRealOffset(0x1134F54);
UnityEngine::Camera.ViewportPointToRay1 = (int (*)(void*, Vector3, int))UnityEngine::Camera.ViewportPointToRay1Offset;

UnityEngine::Camera.ViewportPointToRay2Offset = getRealOffset(0x1135040);
UnityEngine::Camera.ViewportPointToRay2 = (int (*)(void*, Vector3))UnityEngine::Camera.ViewportPointToRay2Offset;

UnityEngine::Camera.ScreenPointToRayOffset = getRealOffset(0x11350A0);
UnityEngine::Camera.ScreenPointToRay = (int (*)(void*, Vector2, int))UnityEngine::Camera.ScreenPointToRayOffset;

UnityEngine::Camera.ScreenPointToRay1Offset = getRealOffset(0x11351AC);
UnityEngine::Camera.ScreenPointToRay1 = (int (*)(void*, Vector3, int))UnityEngine::Camera.ScreenPointToRay1Offset;

UnityEngine::Camera.ScreenPointToRay2Offset = getRealOffset(0x1135298);
UnityEngine::Camera.ScreenPointToRay2 = (int (*)(void*, Vector3))UnityEngine::Camera.ScreenPointToRay2Offset;

UnityEngine::Camera.get_mainOffset = getRealOffset(0x11352F8);
UnityEngine::Camera.get_main = (void *(*)())UnityEngine::Camera.get_mainOffset;

UnityEngine::Camera.get_currentOffset = getRealOffset(0x1135340);
UnityEngine::Camera.get_current = (void *(*)())UnityEngine::Camera.get_currentOffset;

UnityEngine::Camera.get_stereoEnabledOffset = getRealOffset(0x1135388);
UnityEngine::Camera.get_stereoEnabled = (bool(*)(void*))UnityEngine::Camera.get_stereoEnabledOffset;

UnityEngine::Camera.GetStereoViewMatrixOffset = getRealOffset(0x11353D8);
UnityEngine::Camera.GetStereoViewMatrix = (int (*)(void*, int))UnityEngine::Camera.GetStereoViewMatrixOffset;

UnityEngine::Camera.GetStereoProjectionMatrixOffset = getRealOffset(0x11354E0);
UnityEngine::Camera.GetStereoProjectionMatrix = (int (*)(void*, int))UnityEngine::Camera.GetStereoProjectionMatrixOffset;

UnityEngine::Camera.SetStereoProjectionMatrixOffset = getRealOffset(0x11355E8);
UnityEngine::Camera.SetStereoProjectionMatrix = (void(*)(void*, int, int))UnityEngine::Camera.SetStereoProjectionMatrixOffset;

UnityEngine::Camera.SetStereoViewMatrixOffset = getRealOffset(0x1135714);
UnityEngine::Camera.SetStereoViewMatrix = (void(*)(void*, int, int))UnityEngine::Camera.SetStereoViewMatrixOffset;

UnityEngine::Camera.GetAllCamerasCountOffset = getRealOffset(0x1135840);
UnityEngine::Camera.GetAllCamerasCount = (int(*)())UnityEngine::Camera.GetAllCamerasCountOffset;

UnityEngine::Camera.get_allCamerasCountOffset = getRealOffset(0x11358D8);
UnityEngine::Camera.get_allCamerasCount = (int(*)())UnityEngine::Camera.get_allCamerasCountOffset;

UnityEngine::Camera.get_allCamerasOffset = getRealOffset(0x1135920);
UnityEngine::Camera.RenderToCubemapImplOffset = getRealOffset(0x1135B44);
UnityEngine::Camera.RenderToCubemapImpl = (bool(*)(void*, void *, int))UnityEngine::Camera.RenderToCubemapImplOffset;

UnityEngine::Camera.RenderToCubemapOffset = getRealOffset(0x1135BA4);
UnityEngine::Camera.RenderToCubemap = (bool(*)(void*, void *))UnityEngine::Camera.RenderToCubemapOffset;

UnityEngine::Camera.RenderToCubemap1Offset = getRealOffset(0x1135C00);
UnityEngine::Camera.RenderToCubemap1 = (bool(*)(void*, void *))UnityEngine::Camera.RenderToCubemap1Offset;

UnityEngine::Camera.RenderOffset = getRealOffset(0x1135C5C);
UnityEngine::Camera.Render = (void(*)(void*))UnityEngine::Camera.RenderOffset;

UnityEngine::Camera.RenderWithShaderOffset = getRealOffset(0x1135CAC);
UnityEngine::Camera.RenderWithShader = (void(*)(void*, void *, monoString*))UnityEngine::Camera.RenderWithShaderOffset;

UnityEngine::Camera.CopyFromOffset = getRealOffset(0x1135D0C);
UnityEngine::Camera.CopyFrom = (void(*)(void*, void *))UnityEngine::Camera.CopyFromOffset;

UnityEngine::Camera.FireOnPreCullOffset = getRealOffset(0x1135D64);
UnityEngine::Camera.FireOnPreCull = (void(*)(void *))UnityEngine::Camera.FireOnPreCullOffset;

UnityEngine::Camera.FireOnPreRenderOffset = getRealOffset(0x11361F8);
UnityEngine::Camera.FireOnPreRender = (void(*)(void *))UnityEngine::Camera.FireOnPreRenderOffset;

UnityEngine::Camera.FireOnPostRenderOffset = getRealOffset(0x1136268);
UnityEngine::Camera.FireOnPostRender = (void(*)(void *))UnityEngine::Camera.FireOnPostRenderOffset;

UnityEngine::Camera.WorldToScreenPoint_InjectedOffset = getRealOffset(0x11349F4);
UnityEngine::Camera.WorldToScreenPoint_Injected = (void(*)(void*, Vector3 *, int, Vector3 *))UnityEngine::Camera.WorldToScreenPoint_InjectedOffset;

UnityEngine::Camera.WorldToViewportPoint_InjectedOffset = getRealOffset(0x1134AF8);
UnityEngine::Camera.WorldToViewportPoint_Injected = (void(*)(void*, Vector3 *, int, Vector3 *))UnityEngine::Camera.WorldToViewportPoint_InjectedOffset;

UnityEngine::Camera.ScreenToWorldPoint_InjectedOffset = getRealOffset(0x1134BFC);
UnityEngine::Camera.ScreenToWorldPoint_Injected = (void(*)(void*, Vector3 *, int, Vector3 *))UnityEngine::Camera.ScreenToWorldPoint_InjectedOffset;

UnityEngine::Camera.ScreenToViewportPoint_InjectedOffset = getRealOffset(0x1134DE8);
UnityEngine::Camera.ScreenToViewportPoint_Injected = (void(*)(void*, Vector3 *, Vector3 *))UnityEngine::Camera.ScreenToViewportPoint_InjectedOffset;

UnityEngine::CullingGroup.FinalizeOffset = getRealOffset(0x1139984);
UnityEngine::CullingGroup.Finalize = (void(*)(void*))UnityEngine::CullingGroup.FinalizeOffset;

UnityEngine::CullingGroup.DisposeInternalOffset = getRealOffset(0x1139AC0);
UnityEngine::CullingGroup.DisposeInternal = (void(*)(void*))UnityEngine::CullingGroup.DisposeInternalOffset;

UnityEngine::CullingGroup.DisposeOffset = getRealOffset(0x1139B10);
UnityEngine::CullingGroup.Dispose = (void(*)(void*))UnityEngine::CullingGroup.DisposeOffset;

UnityEngine::CullingGroup.set_targetCameraOffset = getRealOffset(0x1139B9C);
UnityEngine::CullingGroup.set_targetCamera = (void(*)(void*, void *))UnityEngine::CullingGroup.set_targetCameraOffset;

UnityEngine::CullingGroup.SetBoundingSphereCountOffset = getRealOffset(0x1139C4C);
UnityEngine::CullingGroup.SetBoundingSphereCount = (void(*)(void*, int))UnityEngine::CullingGroup.SetBoundingSphereCountOffset;

UnityEngine::CullingGroup.FinalizerFailureOffset = getRealOffset(0x1139A70);
UnityEngine::CullingGroup.FinalizerFailure = (void(*)(void*))UnityEngine::CullingGroup.FinalizerFailureOffset;

UnityEngine::ReflectionProbe.CallReflectionProbeEventOffset = getRealOffset(0x117CC94);
UnityEngine::ReflectionProbe.CallReflectionProbeEvent = (void(*)(void *, int))UnityEngine::ReflectionProbe.CallReflectionProbeEventOffset;

UnityEngine::ReflectionProbe.CallSetDefaultReflectionOffset = getRealOffset(0x117CD1C);
UnityEngine::ReflectionProbe.CallSetDefaultReflection = (void(*)(void *))UnityEngine::ReflectionProbe.CallSetDefaultReflectionOffset;

UnityEngine::DebugLogHandler.Internal_LogOffset = getRealOffset(0x113B770);
UnityEngine::DebugLogHandler.Internal_Log = (void(*)(int, int, monoString*, void *))UnityEngine::DebugLogHandler.Internal_LogOffset;

UnityEngine::DebugLogHandler.Internal_LogExceptionOffset = getRealOffset(0x113B7D8);
UnityEngine::DebugLogHandler.Internal_LogException = (void(*)(void *, void *))UnityEngine::DebugLogHandler.Internal_LogExceptionOffset;

UnityEngine::DebugLogHandler.LogExceptionOffset = getRealOffset(0x113B8A4);
UnityEngine::DebugLogHandler.LogException = (void(*)(void*, void *, void *))UnityEngine::DebugLogHandler.LogExceptionOffset;

UnityEngine::Debug.get_unityLoggerOffset = getRealOffset(0x113A374);
UnityEngine::Debug.get_unityLogger = (void *(*)())UnityEngine::Debug.get_unityLoggerOffset;

UnityEngine::Debug.DrawLineOffset = getRealOffset(0x113A3EC);
UnityEngine::Debug.DrawLine = (void(*)(Vector3, Vector3, Color, float))UnityEngine::Debug.DrawLineOffset;

UnityEngine::Debug.DrawLine1Offset = getRealOffset(0x113A5F8);
UnityEngine::Debug.DrawLine1 = (void(*)(Vector3, Vector3, Color))UnityEngine::Debug.DrawLine1Offset;

UnityEngine::Debug.DrawLine2Offset = getRealOffset(0x113A4F0);
UnityEngine::Debug.DrawLine2 = (void(*)(Vector3, Vector3, Color, float, bool))UnityEngine::Debug.DrawLine2Offset;

UnityEngine::Debug.BreakOffset = getRealOffset(0x113A764);
UnityEngine::Debug.Break = (void(*)())UnityEngine::Debug.BreakOffset;

UnityEngine::Debug.LogExceptionOffset = getRealOffset(0x1130008);
UnityEngine::Debug.LogException = (void(*)(void *))UnityEngine::Debug.LogExceptionOffset;

UnityEngine::Debug.LogException1Offset = getRealOffset(0x113AF34);
UnityEngine::Debug.LogException1 = (void(*)(void *, void *))UnityEngine::Debug.LogException1Offset;

UnityEngine::Debug.get_isDebugBuildOffset = getRealOffset(0x113B490);
UnityEngine::Debug.get_isDebugBuild = (bool(*)())UnityEngine::Debug.get_isDebugBuildOffset;

UnityEngine::Debug.CallOverridenDebugHandlerOffset = getRealOffset(0x113B4D8);
UnityEngine::Debug.CallOverridenDebugHandler = (bool(*)(void *, void *))UnityEngine::Debug.CallOverridenDebugHandlerOffset;

UnityEngine::DynamicGI.UpdateEnvironmentOffset = getRealOffset(0x113C690);
UnityEngine::DynamicGI.UpdateEnvironment = (void(*)())UnityEngine::DynamicGI.UpdateEnvironmentOffset;

UnityEngine::Bounds.GetHashCodeOffset = getRealOffset(0x3F1C40);
UnityEngine::Bounds.GetHashCode = (int(*)(void*))UnityEngine::Bounds.GetHashCodeOffset;

UnityEngine::Bounds.Equals1Offset = getRealOffset(0x3F1CA4);
UnityEngine::Bounds.Equals1 = (bool(*)(void*, int))UnityEngine::Bounds.Equals1Offset;

UnityEngine::Bounds.get_centerOffset = getRealOffset(0x3F1CD4);
UnityEngine::Bounds.get_center = (Vector3 (*)(void*))UnityEngine::Bounds.get_centerOffset;

UnityEngine::Bounds.set_centerOffset = getRealOffset(0x3F1CE8);
UnityEngine::Bounds.set_center = (void(*)(void*, Vector3))UnityEngine::Bounds.set_centerOffset;

UnityEngine::Bounds.get_sizeOffset = getRealOffset(0x3F1CF4);
UnityEngine::Bounds.get_size = (Vector3 (*)(void*))UnityEngine::Bounds.get_sizeOffset;

UnityEngine::Bounds.set_sizeOffset = getRealOffset(0x3F1D08);
UnityEngine::Bounds.set_size = (void(*)(void*, Vector3))UnityEngine::Bounds.set_sizeOffset;

UnityEngine::Bounds.get_extentsOffset = getRealOffset(0x3F1D24);
UnityEngine::Bounds.get_extents = (Vector3 (*)(void*))UnityEngine::Bounds.get_extentsOffset;

UnityEngine::Bounds.set_extentsOffset = getRealOffset(0x3F1D38);
UnityEngine::Bounds.set_extents = (void(*)(void*, Vector3))UnityEngine::Bounds.set_extentsOffset;

UnityEngine::Bounds.get_minOffset = getRealOffset(0x3F1D44);
UnityEngine::Bounds.get_min = (Vector3 (*)(void*))UnityEngine::Bounds.get_minOffset;

UnityEngine::Bounds.get_maxOffset = getRealOffset(0x3F1D58);
UnityEngine::Bounds.get_max = (Vector3 (*)(void*))UnityEngine::Bounds.get_maxOffset;

UnityEngine::Bounds.op_EqualityOffset = getRealOffset(0x1132CA0);
UnityEngine::Bounds.op_Equality = (bool(*)(int, int))UnityEngine::Bounds.op_EqualityOffset;

UnityEngine::Bounds.op_InequalityOffset = getRealOffset(0x1132DC0);
UnityEngine::Bounds.op_Inequality = (bool(*)(int, int))UnityEngine::Bounds.op_InequalityOffset;

UnityEngine::Bounds.SetMinMaxOffset = getRealOffset(0x3F1D6C);
UnityEngine::Bounds.SetMinMax = (void(*)(void*, Vector3, Vector3))UnityEngine::Bounds.SetMinMaxOffset;

UnityEngine::Bounds.EncapsulateOffset = getRealOffset(0x3F1D9C);
UnityEngine::Bounds.Encapsulate = (void(*)(void*, Vector3))UnityEngine::Bounds.EncapsulateOffset;

UnityEngine::Bounds.Encapsulate1Offset = getRealOffset(0x3F1DB8);
UnityEngine::Bounds.Encapsulate1 = (void(*)(void*, int))UnityEngine::Bounds.Encapsulate1Offset;

UnityEngine::Bounds.IntersectsOffset = getRealOffset(0x3F1DE8);
UnityEngine::Bounds.Intersects = (bool(*)(void*, int))UnityEngine::Bounds.IntersectsOffset;

UnityEngine::Bounds.ToStringOffset = getRealOffset(0x3F1E18);
UnityEngine::Bounds.ToString = (monoString *(*)(void*))UnityEngine::Bounds.ToStringOffset;

UnityEngine::Bounds.ContainsOffset = getRealOffset(0x3F1E20);
UnityEngine::Bounds.Contains = (bool(*)(void*, Vector3))UnityEngine::Bounds.ContainsOffset;

UnityEngine::Bounds.SqrDistanceOffset = getRealOffset(0x3F1E3C);
UnityEngine::Bounds.SqrDistance = (float(*)(void*, Vector3))UnityEngine::Bounds.SqrDistanceOffset;

UnityEngine::GeometryUtility.CalculateFrustumPlanesOffset = getRealOffset(0x1142C18);
UnityEngine::Plane.get_normalOffset = getRealOffset(0x3F3048);
UnityEngine::Plane.get_normal = (Vector3 (*)(void*))UnityEngine::Plane.get_normalOffset;

UnityEngine::Plane.get_distanceOffset = getRealOffset(0x3F305C);
UnityEngine::Plane.get_distance = (float(*)(void*))UnityEngine::Plane.get_distanceOffset;

UnityEngine::Plane.set_distanceOffset = getRealOffset(0x3F3064);
UnityEngine::Plane.set_distance = (void(*)(void*, float))UnityEngine::Plane.set_distanceOffset;

UnityEngine::Plane.GetDistanceToPointOffset = getRealOffset(0x3F309C);
UnityEngine::Plane.GetDistanceToPoint = (float(*)(void*, Vector3))UnityEngine::Plane.GetDistanceToPointOffset;

UnityEngine::Plane.GetSideOffset = getRealOffset(0x3F30B8);
UnityEngine::Plane.GetSide = (bool(*)(void*, Vector3))UnityEngine::Plane.GetSideOffset;

UnityEngine::Plane.ToStringOffset = getRealOffset(0x3F3110);
UnityEngine::Plane.ToString = (monoString *(*)(void*))UnityEngine::Plane.ToStringOffset;

UnityEngine::Ray.get_originOffset = getRealOffset(0x3F33A0);
UnityEngine::Ray.get_origin = (Vector3 (*)(void*))UnityEngine::Ray.get_originOffset;

UnityEngine::Ray.get_directionOffset = getRealOffset(0x3F33B4);
UnityEngine::Ray.get_direction = (Vector3 (*)(void*))UnityEngine::Ray.get_directionOffset;

UnityEngine::Ray.GetPointOffset = getRealOffset(0x3F33C8);
UnityEngine::Ray.GetPoint = (Vector3 (*)(void*, float))UnityEngine::Ray.GetPointOffset;

UnityEngine::Ray.ToStringOffset = getRealOffset(0x3F33DC);
UnityEngine::Ray.ToString = (monoString *(*)(void*))UnityEngine::Ray.ToStringOffset;

UnityEngine::Rect.ctor1Offset = getRealOffset(0x3F33F8);
UnityEngine::Rect.ctor1 = (void(*)(void*, Vector2, Vector2))UnityEngine::Rect.ctor1Offset;

UnityEngine::Rect.ctor2Offset = getRealOffset(0x3F3408);
UnityEngine::Rect.ctor2 = (void(*)(void*, int))UnityEngine::Rect.ctor2Offset;

UnityEngine::Rect.get_zeroOffset = getRealOffset(0x1178F4C);
UnityEngine::Rect.get_zero = (int (*)())UnityEngine::Rect.get_zeroOffset;

UnityEngine::Rect.MinMaxRectOffset = getRealOffset(0x1178F58);
UnityEngine::Rect.MinMaxRect = (int (*)(float, float, float, float))UnityEngine::Rect.MinMaxRectOffset;

UnityEngine::Rect.SetOffset = getRealOffset(0x3F3418);
UnityEngine::Rect.Set = (void(*)(void*, float, float, float, float))UnityEngine::Rect.SetOffset;

UnityEngine::Rect.get_xOffset = getRealOffset(0x3F342C);
UnityEngine::Rect.get_x = (float(*)(void*))UnityEngine::Rect.get_xOffset;

UnityEngine::Rect.set_xOffset = getRealOffset(0x3F3434);
UnityEngine::Rect.set_x = (void(*)(void*, float))UnityEngine::Rect.set_xOffset;

UnityEngine::Rect.get_yOffset = getRealOffset(0x3F343C);
UnityEngine::Rect.get_y = (float(*)(void*))UnityEngine::Rect.get_yOffset;

UnityEngine::Rect.set_yOffset = getRealOffset(0x3F3444);
UnityEngine::Rect.set_y = (void(*)(void*, float))UnityEngine::Rect.set_yOffset;

UnityEngine::Rect.get_positionOffset = getRealOffset(0x3F344C);
UnityEngine::Rect.get_position = (Vector2 (*)(void*))UnityEngine::Rect.get_positionOffset;

UnityEngine::Rect.get_centerOffset = getRealOffset(0x3F3490);
UnityEngine::Rect.get_center = (Vector2 (*)(void*))UnityEngine::Rect.get_centerOffset;

UnityEngine::Rect.set_centerOffset = getRealOffset(0x3F34EC);
UnityEngine::Rect.set_center = (void(*)(void*, Vector2))UnityEngine::Rect.set_centerOffset;

UnityEngine::Rect.get_minOffset = getRealOffset(0x3F3514);
UnityEngine::Rect.get_min = (Vector2 (*)(void*))UnityEngine::Rect.get_minOffset;

UnityEngine::Rect.get_maxOffset = getRealOffset(0x3F3558);
UnityEngine::Rect.get_max = (Vector2 (*)(void*))UnityEngine::Rect.get_maxOffset;

UnityEngine::Rect.get_widthOffset = getRealOffset(0x3F35B0);
UnityEngine::Rect.get_width = (float(*)(void*))UnityEngine::Rect.get_widthOffset;

UnityEngine::Rect.set_widthOffset = getRealOffset(0x3F35B8);
UnityEngine::Rect.set_width = (void(*)(void*, float))UnityEngine::Rect.set_widthOffset;

UnityEngine::Rect.get_heightOffset = getRealOffset(0x3F35C0);
UnityEngine::Rect.get_height = (float(*)(void*))UnityEngine::Rect.get_heightOffset;

UnityEngine::Rect.set_heightOffset = getRealOffset(0x3F35C8);
UnityEngine::Rect.set_height = (void(*)(void*, float))UnityEngine::Rect.set_heightOffset;

UnityEngine::Rect.get_sizeOffset = getRealOffset(0x3F35D0);
UnityEngine::Rect.get_size = (Vector2 (*)(void*))UnityEngine::Rect.get_sizeOffset;

UnityEngine::Rect.get_xMinOffset = getRealOffset(0x3F3614);
UnityEngine::Rect.get_xMin = (float(*)(void*))UnityEngine::Rect.get_xMinOffset;

UnityEngine::Rect.set_xMinOffset = getRealOffset(0x3F361C);
UnityEngine::Rect.set_xMin = (void(*)(void*, float))UnityEngine::Rect.set_xMinOffset;

UnityEngine::Rect.get_yMinOffset = getRealOffset(0x3F363C);
UnityEngine::Rect.get_yMin = (float(*)(void*))UnityEngine::Rect.get_yMinOffset;

UnityEngine::Rect.set_yMinOffset = getRealOffset(0x3F3644);
UnityEngine::Rect.set_yMin = (void(*)(void*, float))UnityEngine::Rect.set_yMinOffset;

UnityEngine::Rect.get_xMaxOffset = getRealOffset(0x3F3664);
UnityEngine::Rect.get_xMax = (float(*)(void*))UnityEngine::Rect.get_xMaxOffset;

UnityEngine::Rect.set_xMaxOffset = getRealOffset(0x3F3678);
UnityEngine::Rect.set_xMax = (void(*)(void*, float))UnityEngine::Rect.set_xMaxOffset;

UnityEngine::Rect.get_yMaxOffset = getRealOffset(0x3F368C);
UnityEngine::Rect.get_yMax = (float(*)(void*))UnityEngine::Rect.get_yMaxOffset;

UnityEngine::Rect.set_yMaxOffset = getRealOffset(0x3F36A0);
UnityEngine::Rect.set_yMax = (void(*)(void*, float))UnityEngine::Rect.set_yMaxOffset;

UnityEngine::Rect.ContainsOffset = getRealOffset(0x3F36B4);
UnityEngine::Rect.Contains = (bool(*)(void*, Vector2))UnityEngine::Rect.ContainsOffset;

UnityEngine::Rect.Contains1Offset = getRealOffset(0x3F3714);
UnityEngine::Rect.Contains1 = (bool(*)(void*, Vector3))UnityEngine::Rect.Contains1Offset;

UnityEngine::Rect.OrderMinMaxOffset = getRealOffset(0x11792D8);
UnityEngine::Rect.OrderMinMax = (int (*)(int))UnityEngine::Rect.OrderMinMaxOffset;

UnityEngine::Rect.OverlapsOffset = getRealOffset(0x3F3774);
UnityEngine::Rect.Overlaps = (bool(*)(void*, int))UnityEngine::Rect.OverlapsOffset;

UnityEngine::Rect.Overlaps1Offset = getRealOffset(0x3F3798);
UnityEngine::Rect.Overlaps1 = (bool(*)(void*, int, bool))UnityEngine::Rect.Overlaps1Offset;

UnityEngine::Rect.op_InequalityOffset = getRealOffset(0x11794A8);
UnityEngine::Rect.op_Inequality = (bool(*)(int, int))UnityEngine::Rect.op_InequalityOffset;

UnityEngine::Rect.op_EqualityOffset = getRealOffset(0x1179514);
UnityEngine::Rect.op_Equality = (bool(*)(int, int))UnityEngine::Rect.op_EqualityOffset;

UnityEngine::Rect.GetHashCodeOffset = getRealOffset(0x3F37C0);
UnityEngine::Rect.GetHashCode = (int(*)(void*))UnityEngine::Rect.GetHashCodeOffset;

UnityEngine::Rect.Equals1Offset = getRealOffset(0x3F37D0);
UnityEngine::Rect.Equals1 = (bool(*)(void*, int))UnityEngine::Rect.Equals1Offset;

UnityEngine::Rect.ToStringOffset = getRealOffset(0x3F37F4);
UnityEngine::Rect.ToString = (monoString *(*)(void*))UnityEngine::Rect.ToStringOffset;

UnityEngine::Rect.ToString1Offset = getRealOffset(0x3F37FC);
UnityEngine::Rect.ToString1 = (monoString *(*)(void*, monoString*))UnityEngine::Rect.ToString1Offset;

UnityEngine::RectInt.get_xOffset = getRealOffset(0x3F3804);
UnityEngine::RectInt.get_x = (int(*)(void*))UnityEngine::RectInt.get_xOffset;

UnityEngine::RectInt.get_yOffset = getRealOffset(0x3F380C);
UnityEngine::RectInt.get_y = (int(*)(void*))UnityEngine::RectInt.get_yOffset;

UnityEngine::RectInt.get_widthOffset = getRealOffset(0x3F3814);
UnityEngine::RectInt.get_width = (int(*)(void*))UnityEngine::RectInt.get_widthOffset;

UnityEngine::RectInt.get_heightOffset = getRealOffset(0x3F381C);
UnityEngine::RectInt.get_height = (int(*)(void*))UnityEngine::RectInt.get_heightOffset;

UnityEngine::RectInt.ToStringOffset = getRealOffset(0x3F3824);
UnityEngine::RectInt.ToString = (monoString *(*)(void*))UnityEngine::RectInt.ToStringOffset;

UnityEngine::RectInt.EqualsOffset = getRealOffset(0x3F382C);
UnityEngine::RectInt.Equals = (bool(*)(void*, int))UnityEngine::RectInt.EqualsOffset;

UnityEngine::RectOffset.FinalizeOffset = getRealOffset(0x1179FC0);
UnityEngine::RectOffset.Finalize = (void(*)(void*))UnityEngine::RectOffset.FinalizeOffset;

UnityEngine::RectOffset.ToStringOffset = getRealOffset(0x117A0D8);
UnityEngine::RectOffset.ToString = (monoString *(*)(void*))UnityEngine::RectOffset.ToStringOffset;

UnityEngine::RectOffset.DestroyOffset = getRealOffset(0x117A030);
UnityEngine::RectOffset.Destroy = (void(*)(void*))UnityEngine::RectOffset.DestroyOffset;

UnityEngine::RectOffset.InternalCreateOffset = getRealOffset(0x1179F50);
UnityEngine::RectOffset.get_leftOffset = getRealOffset(0x117A3F4);
UnityEngine::RectOffset.get_left = (int(*)(void*))UnityEngine::RectOffset.get_leftOffset;

UnityEngine::RectOffset.get_rightOffset = getRealOffset(0x117A444);
UnityEngine::RectOffset.get_right = (int(*)(void*))UnityEngine::RectOffset.get_rightOffset;

UnityEngine::RectOffset.get_topOffset = getRealOffset(0x117A494);
UnityEngine::RectOffset.get_top = (int(*)(void*))UnityEngine::RectOffset.get_topOffset;

UnityEngine::RectOffset.get_bottomOffset = getRealOffset(0x117A4E4);
UnityEngine::RectOffset.get_bottom = (int(*)(void*))UnityEngine::RectOffset.get_bottomOffset;

UnityEngine::RectOffset.get_horizontalOffset = getRealOffset(0x117A584);
UnityEngine::RectOffset.get_horizontal = (int(*)(void*))UnityEngine::RectOffset.get_horizontalOffset;

UnityEngine::RectOffset.get_verticalOffset = getRealOffset(0x117A5D4);
UnityEngine::RectOffset.get_vertical = (int(*)(void*))UnityEngine::RectOffset.get_verticalOffset;

UnityEngine::RectOffset.AddOffset = getRealOffset(0x117A624);
UnityEngine::RectOffset.Add = (int (*)(void*, int))UnityEngine::RectOffset.AddOffset;

UnityEngine::RectOffset.RemoveOffset = getRealOffset(0x117A714);
UnityEngine::RectOffset.Remove = (int (*)(void*, int))UnityEngine::RectOffset.RemoveOffset;

UnityEngine::Gizmos.DrawLineOffset = getRealOffset(0x114337C);
UnityEngine::Gizmos.DrawLine = (void(*)(Vector3, Vector3))UnityEngine::Gizmos.DrawLineOffset;

UnityEngine::Gizmos.DrawWireSphereOffset = getRealOffset(0x1143448);
UnityEngine::Gizmos.DrawWireSphere = (void(*)(Vector3, float))UnityEngine::Gizmos.DrawWireSphereOffset;

UnityEngine::Gizmos.DrawSphereOffset = getRealOffset(0x1143500);
UnityEngine::Gizmos.DrawSphere = (void(*)(Vector3, float))UnityEngine::Gizmos.DrawSphereOffset;

UnityEngine::Gizmos.DrawWireCubeOffset = getRealOffset(0x11435B8);
UnityEngine::Gizmos.DrawWireCube = (void(*)(Vector3, Vector3))UnityEngine::Gizmos.DrawWireCubeOffset;

UnityEngine::Gizmos.DrawCubeOffset = getRealOffset(0x1143684);
UnityEngine::Gizmos.DrawCube = (void(*)(Vector3, Vector3))UnityEngine::Gizmos.DrawCubeOffset;

UnityEngine::Gizmos.set_colorOffset = getRealOffset(0x1143750);
UnityEngine::Gizmos.set_color = (void(*)(Color))UnityEngine::Gizmos.set_colorOffset;

UnityEngine::Gizmos.set_matrixOffset = getRealOffset(0x11437F4);
UnityEngine::Gizmos.set_matrix = (void(*)(int))UnityEngine::Gizmos.set_matrixOffset;

UnityEngine::Gizmos.DrawFrustumOffset = getRealOffset(0x11438EC);
UnityEngine::Gizmos.DrawFrustum = (void(*)(Vector3, float, float, float, float))UnityEngine::Gizmos.DrawFrustumOffset;

UnityEngine::Gizmos.DrawRayOffset = getRealOffset(0x11439D4);
UnityEngine::Gizmos.DrawRay = (void(*)(Vector3, Vector3))UnityEngine::Gizmos.DrawRayOffset;

UnityEngine::Gizmos.DrawLine_InjectedOffset = getRealOffset(0x11433F0);
UnityEngine::Gizmos.DrawLine_Injected = (void(*)(Vector3 *, Vector3 *))UnityEngine::Gizmos.DrawLine_InjectedOffset;

UnityEngine::Gizmos.DrawWireSphere_InjectedOffset = getRealOffset(0x11434A8);
UnityEngine::Gizmos.DrawWireSphere_Injected = (void(*)(Vector3 *, float))UnityEngine::Gizmos.DrawWireSphere_InjectedOffset;

UnityEngine::Gizmos.DrawSphere_InjectedOffset = getRealOffset(0x1143560);
UnityEngine::Gizmos.DrawSphere_Injected = (void(*)(Vector3 *, float))UnityEngine::Gizmos.DrawSphere_InjectedOffset;

UnityEngine::Gizmos.DrawWireCube_InjectedOffset = getRealOffset(0x114362C);
UnityEngine::Gizmos.DrawWireCube_Injected = (void(*)(Vector3 *, Vector3 *))UnityEngine::Gizmos.DrawWireCube_InjectedOffset;

UnityEngine::Gizmos.DrawCube_InjectedOffset = getRealOffset(0x11436F8);
UnityEngine::Gizmos.DrawCube_Injected = (void(*)(Vector3 *, Vector3 *))UnityEngine::Gizmos.DrawCube_InjectedOffset;

UnityEngine::Gizmos.DrawFrustum_InjectedOffset = getRealOffset(0x114396C);
UnityEngine::Gizmos.DrawFrustum_Injected = (void(*)(Vector3 *, float, float, float, float))UnityEngine::Gizmos.DrawFrustum_InjectedOffset;

UnityEngine::BeforeRenderHelper.InvokeOffset = getRealOffset(0x11301E8);
UnityEngine::BeforeRenderHelper.Invoke = (void(*)())UnityEngine::BeforeRenderHelper.InvokeOffset;

UnityEngine::Display.get_renderingWidthOffset = getRealOffset(0x113B9F0);
UnityEngine::Display.get_renderingWidth = (int(*)(void*))UnityEngine::Display.get_renderingWidthOffset;

UnityEngine::Display.get_renderingHeightOffset = getRealOffset(0x113BB24);
UnityEngine::Display.get_renderingHeight = (int(*)(void*))UnityEngine::Display.get_renderingHeightOffset;

UnityEngine::Display.get_systemWidthOffset = getRealOffset(0x113BBF8);
UnityEngine::Display.get_systemWidth = (int(*)(void*))UnityEngine::Display.get_systemWidthOffset;

UnityEngine::Display.get_systemHeightOffset = getRealOffset(0x113BD2C);
UnityEngine::Display.get_systemHeight = (int(*)(void*))UnityEngine::Display.get_systemHeightOffset;

UnityEngine::Display.RelativeMouseAtOffset = getRealOffset(0x113BE00);
UnityEngine::Display.RelativeMouseAt = (Vector3 (*)(Vector3))UnityEngine::Display.RelativeMouseAtOffset;

UnityEngine::Display.get_mainOffset = getRealOffset(0x113BF7C);
UnityEngine::Display.get_main = (void *(*)())UnityEngine::Display.get_mainOffset;

UnityEngine::Display.FireDisplaysUpdatedOffset = getRealOffset(0x113C1F0);
UnityEngine::Display.FireDisplaysUpdated = (void(*)())UnityEngine::Display.FireDisplaysUpdatedOffset;

UnityEngine::Screen.get_widthOffset = getRealOffset(0x10541C0);
UnityEngine::Screen.get_width = (int(*)())UnityEngine::Screen.get_widthOffset;

UnityEngine::Screen.get_heightOffset = getRealOffset(0x1054208);
UnityEngine::Screen.get_height = (int(*)())UnityEngine::Screen.get_heightOffset;

UnityEngine::Screen.get_dpiOffset = getRealOffset(0x1054250);
UnityEngine::Screen.get_dpi = (float(*)())UnityEngine::Screen.get_dpiOffset;

UnityEngine::Screen.RequestOrientationOffset = getRealOffset(0x1054298);
UnityEngine::Screen.RequestOrientation = (void(*)(int))UnityEngine::Screen.RequestOrientationOffset;

UnityEngine::Screen.GetScreenOrientationOffset = getRealOffset(0x10542E8);
UnityEngine::Screen.GetScreenOrientation = (int (*)())UnityEngine::Screen.GetScreenOrientationOffset;

UnityEngine::Screen.get_orientationOffset = getRealOffset(0x1054330);
UnityEngine::Screen.get_orientation = (int (*)())UnityEngine::Screen.get_orientationOffset;

UnityEngine::Screen.set_orientationOffset = getRealOffset(0x1054378);
UnityEngine::Screen.set_orientation = (void(*)(int))UnityEngine::Screen.set_orientationOffset;

UnityEngine::Screen.SetOrientationEnabledOffset = getRealOffset(0x105444C);
UnityEngine::Screen.SetOrientationEnabled = (void(*)(int, bool))UnityEngine::Screen.SetOrientationEnabledOffset;

UnityEngine::Screen.set_autorotateToPortraitOffset = getRealOffset(0x10544A4);
UnityEngine::Screen.set_autorotateToPortrait = (void(*)(bool))UnityEngine::Screen.set_autorotateToPortraitOffset;

UnityEngine::Screen.set_autorotateToPortraitUpsideDownOffset = getRealOffset(0x10544F8);
UnityEngine::Screen.set_autorotateToPortraitUpsideDown = (void(*)(bool))UnityEngine::Screen.set_autorotateToPortraitUpsideDownOffset;

UnityEngine::Screen.set_autorotateToLandscapeLeftOffset = getRealOffset(0x105454C);
UnityEngine::Screen.set_autorotateToLandscapeLeft = (void(*)(bool))UnityEngine::Screen.set_autorotateToLandscapeLeftOffset;

UnityEngine::Screen.set_autorotateToLandscapeRightOffset = getRealOffset(0x10545A0);
UnityEngine::Screen.set_autorotateToLandscapeRight = (void(*)(bool))UnityEngine::Screen.set_autorotateToLandscapeRightOffset;

UnityEngine::Screen.get_currentResolutionOffset = getRealOffset(0x10545F4);
UnityEngine::Screen.get_currentResolution = (int (*)())UnityEngine::Screen.get_currentResolutionOffset;

UnityEngine::Screen.get_fullScreenOffset = getRealOffset(0x10546BC);
UnityEngine::Screen.get_fullScreen = (bool(*)())UnityEngine::Screen.get_fullScreenOffset;

UnityEngine::Screen.set_fullScreenOffset = getRealOffset(0x1054704);
UnityEngine::Screen.set_fullScreen = (void(*)(bool))UnityEngine::Screen.set_fullScreenOffset;

UnityEngine::Screen.get_fullScreenModeOffset = getRealOffset(0x1054754);
UnityEngine::Screen.get_fullScreenMode = (int (*)())UnityEngine::Screen.get_fullScreenModeOffset;

UnityEngine::Screen.SetResolutionOffset = getRealOffset(0x105479C);
UnityEngine::Screen.SetResolution = (void(*)(int, int, int, int))UnityEngine::Screen.SetResolutionOffset;

UnityEngine::Screen.SetResolution1Offset = getRealOffset(0x1054804);
UnityEngine::Screen.SetResolution1 = (void(*)(int, int, bool, int))UnityEngine::Screen.SetResolution1Offset;

UnityEngine::Screen.SetResolution2Offset = getRealOffset(0x1054874);
UnityEngine::Screen.SetResolution2 = (void(*)(int, int, bool))UnityEngine::Screen.SetResolution2Offset;

UnityEngine::Graphics.Internal_GetMaxDrawMeshInstanceCountOffset = getRealOffset(0x114404C);
UnityEngine::Graphics.Internal_GetMaxDrawMeshInstanceCount = (int(*)())UnityEngine::Graphics.Internal_GetMaxDrawMeshInstanceCountOffset;

UnityEngine::Graphics.GetActiveColorBufferOffset = getRealOffset(0x1144094);
UnityEngine::Graphics.GetActiveColorBuffer = (int (*)())UnityEngine::Graphics.GetActiveColorBufferOffset;

UnityEngine::Graphics.GetActiveDepthBufferOffset = getRealOffset(0x11441B0);
UnityEngine::Graphics.GetActiveDepthBuffer = (int (*)())UnityEngine::Graphics.GetActiveDepthBufferOffset;

UnityEngine::Graphics.Internal_SetNullRTOffset = getRealOffset(0x11442CC);
UnityEngine::Graphics.Internal_SetNullRT = (void(*)())UnityEngine::Graphics.Internal_SetNullRTOffset;

UnityEngine::Graphics.Internal_SetRTSimpleOffset = getRealOffset(0x1144314);
UnityEngine::Graphics.Internal_SetRTSimple = (void(*)(int, int, int, int, int))UnityEngine::Graphics.Internal_SetRTSimpleOffset;

UnityEngine::Graphics.Internal_DrawMeshNow2Offset = getRealOffset(0x1144458);
UnityEngine::Graphics.Internal_DrawMeshNow2 = (void(*)(void *, int, int))UnityEngine::Graphics.Internal_DrawMeshNow2Offset;

UnityEngine::Graphics.Internal_DrawMeshOffset = getRealOffset(0x1144634);
UnityEngine::Graphics.Internal_DrawMesh = (void(*)(void *, int, int, void *, int, void *, void *, int, bool, void *, int, void *))UnityEngine::Graphics.Internal_DrawMeshOffset;

UnityEngine::Graphics.Internal_BlitMaterial5Offset = getRealOffset(0x114488C);
UnityEngine::Graphics.Internal_BlitMaterial5 = (void(*)(void *, void *, void *, int, bool))UnityEngine::Graphics.Internal_BlitMaterial5Offset;

UnityEngine::Graphics.Blit21Offset = getRealOffset(0x114496C);
UnityEngine::Graphics.Blit21 = (void(*)(void *, void *))UnityEngine::Graphics.Blit21Offset;

UnityEngine::Graphics.SetRenderTargetImplOffset = getRealOffset(0x11449C4);
UnityEngine::Graphics.SetRenderTargetImpl = (void(*)(int, int, int, int, int))UnityEngine::Graphics.SetRenderTargetImplOffset;

UnityEngine::Graphics.SetRenderTargetImpl1Offset = getRealOffset(0x1144A74);
UnityEngine::Graphics.SetRenderTargetImpl1 = (void(*)(void *, int, int, int))UnityEngine::Graphics.SetRenderTargetImpl1Offset;

UnityEngine::Graphics.SetRenderTargetOffset = getRealOffset(0x1144C04);
UnityEngine::Graphics.SetRenderTarget = (void(*)(void *, int, int, int))UnityEngine::Graphics.SetRenderTargetOffset;

UnityEngine::Graphics.SetRenderTarget1Offset = getRealOffset(0x1144C9C);
UnityEngine::Graphics.SetRenderTarget1 = (void(*)(int, int, int, int, int))UnityEngine::Graphics.SetRenderTarget1Offset;

UnityEngine::Graphics.get_activeColorBufferOffset = getRealOffset(0x1144D4C);
UnityEngine::Graphics.get_activeColorBuffer = (int (*)())UnityEngine::Graphics.get_activeColorBufferOffset;

UnityEngine::Graphics.get_activeDepthBufferOffset = getRealOffset(0x1144DD4);
UnityEngine::Graphics.get_activeDepthBuffer = (int (*)())UnityEngine::Graphics.get_activeDepthBufferOffset;

UnityEngine::Graphics.DrawTextureImplOffset = getRealOffset(0x1144E60);
UnityEngine::Graphics.DrawTextureImpl = (void(*)(int, void *, int, int, int, int, int, Color, void *, int))UnityEngine::Graphics.DrawTextureImplOffset;

UnityEngine::Graphics.DrawTextureOffset = getRealOffset(0x114502C);
UnityEngine::Graphics.DrawTexture = (void(*)(int, void *, int, int, int, int, int, void *, int))UnityEngine::Graphics.DrawTextureOffset;

UnityEngine::Graphics.DrawTexture1Offset = getRealOffset(0x1145158);
UnityEngine::Graphics.DrawTexture1 = (void(*)(int, void *, int, int, int, int, void *, int))UnityEngine::Graphics.DrawTexture1Offset;

UnityEngine::Graphics.DrawTexture2Offset = getRealOffset(0x1145260);
UnityEngine::Graphics.DrawTexture2 = (void(*)(int, void *, void *, int))UnityEngine::Graphics.DrawTexture2Offset;

UnityEngine::Graphics.DrawMeshNowOffset = getRealOffset(0x1145324);
UnityEngine::Graphics.DrawMeshNow = (void(*)(void *, int, int))UnityEngine::Graphics.DrawMeshNowOffset;

UnityEngine::Graphics.DrawMeshNow1Offset = getRealOffset(0x11454D0);
UnityEngine::Graphics.DrawMeshNow1 = (void(*)(void *, int))UnityEngine::Graphics.DrawMeshNow1Offset;

UnityEngine::Graphics.DrawMeshOffset = getRealOffset(0x1145600);
UnityEngine::Graphics.DrawMesh = (void(*)(void *, int, void *, int, void *, int, void *, int, bool, void *, int, void *))UnityEngine::Graphics.DrawMeshOffset;

UnityEngine::Graphics.BlitOffset = getRealOffset(0x1145828);
UnityEngine::Graphics.Blit = (void(*)(void *, void *))UnityEngine::Graphics.BlitOffset;

UnityEngine::Graphics.Blit1Offset = getRealOffset(0x11458E0);
UnityEngine::Graphics.Blit1 = (void(*)(void *, void *, void *, int))UnityEngine::Graphics.Blit1Offset;

UnityEngine::Graphics.Blit2Offset = getRealOffset(0x11459B8);
UnityEngine::Graphics.Blit2 = (void(*)(void *, void *, void *))UnityEngine::Graphics.Blit2Offset;

UnityEngine::Graphics.DrawMesh1Offset = getRealOffset(0x1145B8C);
UnityEngine::Graphics.DrawMesh1 = (void(*)(void *, Vector3, int, void *, int, void *))UnityEngine::Graphics.DrawMesh1Offset;

UnityEngine::Graphics.DrawMesh2Offset = getRealOffset(0x1145D98);
UnityEngine::Graphics.DrawMesh2 = (void(*)(void *, int, void *, int, void *, int, void *, bool, bool))UnityEngine::Graphics.DrawMesh2Offset;

UnityEngine::Graphics.DrawTexture11Offset = getRealOffset(0x1145EF8);
UnityEngine::Graphics.DrawTexture11 = (void(*)(int, void *, int, int, int, int, int, void *))UnityEngine::Graphics.DrawTexture11Offset;

UnityEngine::Graphics.DrawTexture21Offset = getRealOffset(0x114600C);
UnityEngine::Graphics.DrawTexture21 = (void(*)(int, void *, void *))UnityEngine::Graphics.DrawTexture21Offset;

UnityEngine::Graphics.SetRenderTarget11Offset = getRealOffset(0x11460BC);
UnityEngine::Graphics.SetRenderTarget11 = (void(*)(void *))UnityEngine::Graphics.SetRenderTarget11Offset;

UnityEngine::Graphics.SetRenderTarget2Offset = getRealOffset(0x1146148);
UnityEngine::Graphics.SetRenderTarget2 = (void(*)(int, int))UnityEngine::Graphics.SetRenderTarget2Offset;

UnityEngine::GL.Vertex3Offset = getRealOffset(0x114168C);
UnityEngine::GL.Vertex3 = (void(*)(float, float, float))UnityEngine::GL.Vertex3Offset;

UnityEngine::GL.VertexOffset = getRealOffset(0x11416EC);
UnityEngine::GL.Vertex = (void(*)(Vector3))UnityEngine::GL.VertexOffset;

UnityEngine::GL.TexCoord3Offset = getRealOffset(0x114174C);
UnityEngine::GL.TexCoord3 = (void(*)(float, float, float))UnityEngine::GL.TexCoord3Offset;

UnityEngine::GL.TexCoord2Offset = getRealOffset(0x11417AC);
UnityEngine::GL.TexCoord2 = (void(*)(float, float))UnityEngine::GL.TexCoord2Offset;

UnityEngine::GL.MultiTexCoord3Offset = getRealOffset(0x1141808);
UnityEngine::GL.MultiTexCoord3 = (void(*)(int, float, float, float))UnityEngine::GL.MultiTexCoord3Offset;

UnityEngine::GL.MultiTexCoord2Offset = getRealOffset(0x1141870);
UnityEngine::GL.MultiTexCoord2 = (void(*)(int, float, float))UnityEngine::GL.MultiTexCoord2Offset;

UnityEngine::GL.MultMatrixOffset = getRealOffset(0x11418D4);
UnityEngine::GL.MultMatrix = (void(*)(int))UnityEngine::GL.MultMatrixOffset;

UnityEngine::GL.PushMatrixOffset = getRealOffset(0x11419CC);
UnityEngine::GL.PushMatrix = (void(*)())UnityEngine::GL.PushMatrixOffset;

UnityEngine::GL.PopMatrixOffset = getRealOffset(0x1141A14);
UnityEngine::GL.PopMatrix = (void(*)())UnityEngine::GL.PopMatrixOffset;

UnityEngine::GL.LoadIdentityOffset = getRealOffset(0x1141A5C);
UnityEngine::GL.LoadIdentity = (void(*)())UnityEngine::GL.LoadIdentityOffset;

UnityEngine::GL.LoadOrthoOffset = getRealOffset(0x1141AA4);
UnityEngine::GL.LoadOrtho = (void(*)())UnityEngine::GL.LoadOrthoOffset;

UnityEngine::GL.LoadProjectionMatrixOffset = getRealOffset(0x1141AEC);
UnityEngine::GL.LoadProjectionMatrix = (void(*)(int))UnityEngine::GL.LoadProjectionMatrixOffset;

UnityEngine::GL.GetGPUProjectionMatrixOffset = getRealOffset(0x1141BE4);
UnityEngine::GL.GetGPUProjectionMatrix = (int (*)(int, bool))UnityEngine::GL.GetGPUProjectionMatrixOffset;

UnityEngine::GL.GLLoadPixelMatrixScriptOffset = getRealOffset(0x1141D50);
UnityEngine::GL.GLLoadPixelMatrixScript = (void(*)(float, float, float, float))UnityEngine::GL.GLLoadPixelMatrixScriptOffset;

UnityEngine::GL.LoadPixelMatrixOffset = getRealOffset(0x1141DB8);
UnityEngine::GL.LoadPixelMatrix = (void(*)(float, float, float, float))UnityEngine::GL.LoadPixelMatrixOffset;

UnityEngine::GL.BeginOffset = getRealOffset(0x1141E20);
UnityEngine::GL.Begin = (void(*)(int))UnityEngine::GL.BeginOffset;

UnityEngine::GL.EndOffset = getRealOffset(0x1141E70);
UnityEngine::GL.End = (void(*)())UnityEngine::GL.EndOffset;

UnityEngine::GL.GLClearOffset = getRealOffset(0x1141EB8);
UnityEngine::GL.GLClear = (void(*)(bool, bool, Color, float))UnityEngine::GL.GLClearOffset;

UnityEngine::GL.ClearOffset = getRealOffset(0x1141FA8);
UnityEngine::GL.Clear = (void(*)(bool, bool, Color))UnityEngine::GL.ClearOffset;

UnityEngine::GL.ClearWithSkyboxOffset = getRealOffset(0x1141FD4);
UnityEngine::GL.ClearWithSkybox = (void(*)(bool, void *))UnityEngine::GL.ClearWithSkyboxOffset;

UnityEngine::LightmapData.get_lightmapColorOffset = getRealOffset(0x1162838);
UnityEngine::LightmapData.get_lightmapColor = (void *(*)(void*))UnityEngine::LightmapData.get_lightmapColorOffset;

UnityEngine::LightmapData.set_lightmapColorOffset = getRealOffset(0x1162840);
UnityEngine::LightmapData.set_lightmapColor = (void(*)(void*, void *))UnityEngine::LightmapData.set_lightmapColorOffset;

UnityEngine::LightmapData.get_lightmapDirOffset = getRealOffset(0x1162848);
UnityEngine::LightmapData.get_lightmapDir = (void *(*)(void*))UnityEngine::LightmapData.get_lightmapDirOffset;

UnityEngine::LightmapData.set_lightmapDirOffset = getRealOffset(0x1162850);
UnityEngine::LightmapData.set_lightmapDir = (void(*)(void*, void *))UnityEngine::LightmapData.set_lightmapDirOffset;

UnityEngine::LightmapData.get_shadowMaskOffset = getRealOffset(0x1162858);
UnityEngine::LightmapData.get_shadowMask = (void *(*)(void*))UnityEngine::LightmapData.get_shadowMaskOffset;

UnityEngine::LightmapData.set_shadowMaskOffset = getRealOffset(0x1162860);
UnityEngine::LightmapData.set_shadowMask = (void(*)(void*, void *))UnityEngine::LightmapData.set_shadowMaskOffset;

UnityEngine::LightmapSettings.get_lightmapsOffset = getRealOffset(0x1162870);
UnityEngine::LightmapSettings.set_lightmapsModeOffset = getRealOffset(0x1162908);
UnityEngine::LightmapSettings.set_lightmapsMode = (void(*)(int))UnityEngine::LightmapSettings.set_lightmapsModeOffset;

UnityEngine::Resolution.get_widthOffset = getRealOffset(0x3EF4D0);
UnityEngine::Resolution.get_width = (int(*)(void*))UnityEngine::Resolution.get_widthOffset;

UnityEngine::Resolution.get_heightOffset = getRealOffset(0x3EF4D8);
UnityEngine::Resolution.get_height = (int(*)(void*))UnityEngine::Resolution.get_heightOffset;

UnityEngine::Resolution.get_refreshRateOffset = getRealOffset(0x3EF4E0);
UnityEngine::Resolution.get_refreshRate = (int(*)(void*))UnityEngine::Resolution.get_refreshRateOffset;

UnityEngine::Resolution.ToStringOffset = getRealOffset(0x3EF4E8);
UnityEngine::Resolution.ToString = (monoString *(*)(void*))UnityEngine::Resolution.ToStringOffset;

UnityEngine::QualitySettings.set_pixelLightCountOffset = getRealOffset(0x11760A8);
UnityEngine::QualitySettings.set_pixelLightCount = (void(*)(int))UnityEngine::QualitySettings.set_pixelLightCountOffset;

UnityEngine::QualitySettings.get_shadowDistanceOffset = getRealOffset(0x11760F8);
UnityEngine::QualitySettings.get_shadowDistance = (float(*)())UnityEngine::QualitySettings.get_shadowDistanceOffset;

UnityEngine::QualitySettings.set_shadowDistanceOffset = getRealOffset(0x1176140);
UnityEngine::QualitySettings.set_shadowDistance = (void(*)(float))UnityEngine::QualitySettings.set_shadowDistanceOffset;

UnityEngine::QualitySettings.get_lodBiasOffset = getRealOffset(0x1176190);
UnityEngine::QualitySettings.get_lodBias = (float(*)())UnityEngine::QualitySettings.get_lodBiasOffset;

UnityEngine::QualitySettings.set_lodBiasOffset = getRealOffset(0x11761D8);
UnityEngine::QualitySettings.set_lodBias = (void(*)(float))UnityEngine::QualitySettings.set_lodBiasOffset;

UnityEngine::QualitySettings.set_anisotropicFilteringOffset = getRealOffset(0x1176228);
UnityEngine::QualitySettings.set_anisotropicFiltering = (void(*)(int))UnityEngine::QualitySettings.set_anisotropicFilteringOffset;

UnityEngine::QualitySettings.set_masterTextureLimitOffset = getRealOffset(0x1176278);
UnityEngine::QualitySettings.set_masterTextureLimit = (void(*)(int))UnityEngine::QualitySettings.set_masterTextureLimitOffset;

UnityEngine::QualitySettings.set_particleRaycastBudgetOffset = getRealOffset(0x11762C8);
UnityEngine::QualitySettings.set_particleRaycastBudget = (void(*)(int))UnityEngine::QualitySettings.set_particleRaycastBudgetOffset;

UnityEngine::QualitySettings.get_vSyncCountOffset = getRealOffset(0x1176318);
UnityEngine::QualitySettings.get_vSyncCount = (int(*)())UnityEngine::QualitySettings.get_vSyncCountOffset;

UnityEngine::QualitySettings.set_vSyncCountOffset = getRealOffset(0x1176360);
UnityEngine::QualitySettings.set_vSyncCount = (void(*)(int))UnityEngine::QualitySettings.set_vSyncCountOffset;

UnityEngine::QualitySettings.get_antiAliasingOffset = getRealOffset(0x11763B0);
UnityEngine::QualitySettings.get_antiAliasing = (int(*)())UnityEngine::QualitySettings.get_antiAliasingOffset;

UnityEngine::QualitySettings.set_skinWeightsOffset = getRealOffset(0x11763F8);
UnityEngine::QualitySettings.set_skinWeights = (void(*)(int))UnityEngine::QualitySettings.set_skinWeightsOffset;

UnityEngine::QualitySettings.get_activeColorSpaceOffset = getRealOffset(0x1176448);
UnityEngine::QualitySettings.get_activeColorSpace = (int (*)())UnityEngine::QualitySettings.get_activeColorSpaceOffset;

UnityEngine::TrailRenderer.get_timeOffset = getRealOffset(0x105D7E8);
UnityEngine::TrailRenderer.get_time = (float(*)(void*))UnityEngine::TrailRenderer.get_timeOffset;

UnityEngine::TrailRenderer.set_timeOffset = getRealOffset(0x105D838);
UnityEngine::TrailRenderer.set_time = (void(*)(void*, float))UnityEngine::TrailRenderer.set_timeOffset;

UnityEngine::TrailRenderer.set_startWidthOffset = getRealOffset(0x105D890);
UnityEngine::TrailRenderer.set_startWidth = (void(*)(void*, float))UnityEngine::TrailRenderer.set_startWidthOffset;

UnityEngine::TrailRenderer.set_endWidthOffset = getRealOffset(0x105D8E8);
UnityEngine::TrailRenderer.set_endWidth = (void(*)(void*, float))UnityEngine::TrailRenderer.set_endWidthOffset;

UnityEngine::TrailRenderer.ClearOffset = getRealOffset(0x105D940);
UnityEngine::TrailRenderer.Clear = (void(*)(void*))UnityEngine::TrailRenderer.ClearOffset;

UnityEngine::LineRenderer.SetColorsOffset = getRealOffset(0x1162958);
UnityEngine::LineRenderer.SetColors = (void(*)(void*, Color, Color))UnityEngine::LineRenderer.SetColorsOffset;

UnityEngine::LineRenderer.set_startColorOffset = getRealOffset(0x1162998);
UnityEngine::LineRenderer.set_startColor = (void(*)(void*, Color))UnityEngine::LineRenderer.set_startColorOffset;

UnityEngine::LineRenderer.set_endColorOffset = getRealOffset(0x1162A00);
UnityEngine::LineRenderer.set_endColor = (void(*)(void*, Color))UnityEngine::LineRenderer.set_endColorOffset;

UnityEngine::LineRenderer.SetPositionOffset = getRealOffset(0x1162B18);
UnityEngine::LineRenderer.SetPosition = (void(*)(void*, int, Vector3))UnityEngine::LineRenderer.SetPositionOffset;

UnityEngine::LineRenderer.SetPosition_InjectedOffset = getRealOffset(0x1162B88);
UnityEngine::LineRenderer.SetPosition_Injected = (void(*)(void*, int, Vector3 *))UnityEngine::LineRenderer.SetPosition_InjectedOffset;

UnityEngine::MaterialPropertyBlock.GetFloatImplOffset = getRealOffset(0x11664E4);
UnityEngine::MaterialPropertyBlock.GetFloatImpl = (float(*)(void*, int))UnityEngine::MaterialPropertyBlock.GetFloatImplOffset;

UnityEngine::MaterialPropertyBlock.GetVectorImplOffset = getRealOffset(0x116653C);
UnityEngine::MaterialPropertyBlock.GetVectorImpl = (int (*)(void*, int))UnityEngine::MaterialPropertyBlock.GetVectorImplOffset;

UnityEngine::MaterialPropertyBlock.GetMatrixImplOffset = getRealOffset(0x1166618);
UnityEngine::MaterialPropertyBlock.GetMatrixImpl = (int (*)(void*, int))UnityEngine::MaterialPropertyBlock.GetMatrixImplOffset;

UnityEngine::MaterialPropertyBlock.GetTextureImplOffset = getRealOffset(0x1166720);
UnityEngine::MaterialPropertyBlock.GetTextureImpl = (void *(*)(void*, int))UnityEngine::MaterialPropertyBlock.GetTextureImplOffset;

UnityEngine::MaterialPropertyBlock.SetFloatImplOffset = getRealOffset(0x1166778);
UnityEngine::MaterialPropertyBlock.SetFloatImpl = (void(*)(void*, int, float))UnityEngine::MaterialPropertyBlock.SetFloatImplOffset;

UnityEngine::MaterialPropertyBlock.SetVectorImplOffset = getRealOffset(0x11667D8);
UnityEngine::MaterialPropertyBlock.SetVectorImpl = (void(*)(void*, int, int))UnityEngine::MaterialPropertyBlock.SetVectorImplOffset;

UnityEngine::MaterialPropertyBlock.SetColorImplOffset = getRealOffset(0x11668B0);
UnityEngine::MaterialPropertyBlock.SetColorImpl = (void(*)(void*, int, Color))UnityEngine::MaterialPropertyBlock.SetColorImplOffset;

UnityEngine::MaterialPropertyBlock.SetMatrixImplOffset = getRealOffset(0x1166988);
UnityEngine::MaterialPropertyBlock.SetMatrixImpl = (void(*)(void*, int, int))UnityEngine::MaterialPropertyBlock.SetMatrixImplOffset;

UnityEngine::MaterialPropertyBlock.SetTextureImplOffset = getRealOffset(0x1166AB4);
UnityEngine::MaterialPropertyBlock.SetTextureImpl = (void(*)(void*, int, void *))UnityEngine::MaterialPropertyBlock.SetTextureImplOffset;

UnityEngine::MaterialPropertyBlock.CreateImplOffset = getRealOffset(0x1166B14);
UnityEngine::MaterialPropertyBlock.ClearOffset = getRealOffset(0x1166BAC);
UnityEngine::MaterialPropertyBlock.Clear = (void(*)(void*, bool))UnityEngine::MaterialPropertyBlock.ClearOffset;

UnityEngine::MaterialPropertyBlock.Clear1Offset = getRealOffset(0x1166C04);
UnityEngine::MaterialPropertyBlock.Clear1 = (void(*)(void*))UnityEngine::MaterialPropertyBlock.Clear1Offset;

UnityEngine::MaterialPropertyBlock.FinalizeOffset = getRealOffset(0x1166CB0);
UnityEngine::MaterialPropertyBlock.Finalize = (void(*)(void*))UnityEngine::MaterialPropertyBlock.FinalizeOffset;

UnityEngine::MaterialPropertyBlock.DisposeOffset = getRealOffset(0x1166D10);
UnityEngine::MaterialPropertyBlock.Dispose = (void(*)(void*))UnityEngine::MaterialPropertyBlock.DisposeOffset;

UnityEngine::MaterialPropertyBlock.SetFloatOffset = getRealOffset(0x1166DF0);
UnityEngine::MaterialPropertyBlock.SetFloat = (void(*)(void*, monoString*, float))UnityEngine::MaterialPropertyBlock.SetFloatOffset;

UnityEngine::MaterialPropertyBlock.SetVectorOffset = getRealOffset(0x1166E5C);
UnityEngine::MaterialPropertyBlock.SetVector = (void(*)(void*, monoString*, int))UnityEngine::MaterialPropertyBlock.SetVectorOffset;

UnityEngine::MaterialPropertyBlock.SetVector1Offset = getRealOffset(0x1166EA8);
UnityEngine::MaterialPropertyBlock.SetVector1 = (void(*)(void*, int, int))UnityEngine::MaterialPropertyBlock.SetVector1Offset;

UnityEngine::MaterialPropertyBlock.SetColorOffset = getRealOffset(0x1166ECC);
UnityEngine::MaterialPropertyBlock.SetColor = (void(*)(void*, monoString*, Color))UnityEngine::MaterialPropertyBlock.SetColorOffset;

UnityEngine::MaterialPropertyBlock.SetMatrixOffset = getRealOffset(0x1166F18);
UnityEngine::MaterialPropertyBlock.SetMatrix = (void(*)(void*, monoString*, int))UnityEngine::MaterialPropertyBlock.SetMatrixOffset;

UnityEngine::MaterialPropertyBlock.SetMatrix1Offset = getRealOffset(0x1166FC0);
UnityEngine::MaterialPropertyBlock.SetMatrix1 = (void(*)(void*, int, int))UnityEngine::MaterialPropertyBlock.SetMatrix1Offset;

UnityEngine::MaterialPropertyBlock.SetTextureOffset = getRealOffset(0x1167038);
UnityEngine::MaterialPropertyBlock.SetTexture = (void(*)(void*, monoString*, void *))UnityEngine::MaterialPropertyBlock.SetTextureOffset;

UnityEngine::MaterialPropertyBlock.SetTexture1Offset = getRealOffset(0x11670A4);
UnityEngine::MaterialPropertyBlock.SetTexture1 = (void(*)(void*, int, void *))UnityEngine::MaterialPropertyBlock.SetTexture1Offset;

UnityEngine::MaterialPropertyBlock.GetFloatOffset = getRealOffset(0x1167104);
UnityEngine::MaterialPropertyBlock.GetFloat = (float(*)(void*, int))UnityEngine::MaterialPropertyBlock.GetFloatOffset;

UnityEngine::MaterialPropertyBlock.GetVectorOffset = getRealOffset(0x116715C);
UnityEngine::MaterialPropertyBlock.GetVector = (int (*)(void*, int))UnityEngine::MaterialPropertyBlock.GetVectorOffset;

UnityEngine::MaterialPropertyBlock.GetMatrixOffset = getRealOffset(0x11671E8);
UnityEngine::MaterialPropertyBlock.GetMatrix = (int (*)(void*, int))UnityEngine::MaterialPropertyBlock.GetMatrixOffset;

UnityEngine::MaterialPropertyBlock.GetTextureOffset = getRealOffset(0x11672CC);
UnityEngine::MaterialPropertyBlock.GetTexture = (void *(*)(void*, int))UnityEngine::MaterialPropertyBlock.GetTextureOffset;

UnityEngine::Renderer.set_castShadowsOffset = getRealOffset(0x104C25C);
UnityEngine::Renderer.set_castShadows = (void(*)(void*, bool))UnityEngine::Renderer.set_castShadowsOffset;

UnityEngine::Renderer.get_boundsOffset = getRealOffset(0x104C318);
UnityEngine::Renderer.get_bounds = (int (*)(void*))UnityEngine::Renderer.get_boundsOffset;

UnityEngine::Renderer.SetStaticLightmapSTOffset = getRealOffset(0x104C400);
UnityEngine::Renderer.SetStaticLightmapST = (void(*)(void*, int))UnityEngine::Renderer.SetStaticLightmapSTOffset;

UnityEngine::Renderer.GetMaterialOffset = getRealOffset(0x104C4C0);
UnityEngine::Renderer.GetMaterial = (void *(*)(void*))UnityEngine::Renderer.GetMaterialOffset;

UnityEngine::Renderer.GetSharedMaterialOffset = getRealOffset(0x104C510);
UnityEngine::Renderer.GetSharedMaterial = (void *(*)(void*))UnityEngine::Renderer.GetSharedMaterialOffset;

UnityEngine::Renderer.SetMaterialOffset = getRealOffset(0x104C560);
UnityEngine::Renderer.SetMaterial = (void(*)(void*, void *))UnityEngine::Renderer.SetMaterialOffset;

UnityEngine::Renderer.GetMaterialArrayOffset = getRealOffset(0x104C5B8);
UnityEngine::Renderer.Internal_SetPropertyBlockOffset = getRealOffset(0x104C660);
UnityEngine::Renderer.Internal_SetPropertyBlock = (void(*)(void*, void *))UnityEngine::Renderer.Internal_SetPropertyBlockOffset;

UnityEngine::Renderer.Internal_GetPropertyBlockOffset = getRealOffset(0x104C6B8);
UnityEngine::Renderer.Internal_GetPropertyBlock = (void(*)(void*, void *))UnityEngine::Renderer.Internal_GetPropertyBlockOffset;

UnityEngine::Renderer.SetPropertyBlockOffset = getRealOffset(0x104C710);
UnityEngine::Renderer.SetPropertyBlock = (void(*)(void*, void *))UnityEngine::Renderer.SetPropertyBlockOffset;

UnityEngine::Renderer.GetPropertyBlockOffset = getRealOffset(0x104C768);
UnityEngine::Renderer.GetPropertyBlock = (void(*)(void*, void *))UnityEngine::Renderer.GetPropertyBlockOffset;

UnityEngine::Renderer.get_enabledOffset = getRealOffset(0x104C7C0);
UnityEngine::Renderer.get_enabled = (bool(*)(void*))UnityEngine::Renderer.get_enabledOffset;

UnityEngine::Renderer.set_enabledOffset = getRealOffset(0x104C810);
UnityEngine::Renderer.set_enabled = (void(*)(void*, bool))UnityEngine::Renderer.set_enabledOffset;

UnityEngine::Renderer.get_isVisibleOffset = getRealOffset(0x104C868);
UnityEngine::Renderer.get_isVisible = (bool(*)(void*))UnityEngine::Renderer.get_isVisibleOffset;

UnityEngine::Renderer.get_shadowCastingModeOffset = getRealOffset(0x104C8B8);
UnityEngine::Renderer.get_shadowCastingMode = (int (*)(void*))UnityEngine::Renderer.get_shadowCastingModeOffset;

UnityEngine::Renderer.set_shadowCastingModeOffset = getRealOffset(0x104C2C0);
UnityEngine::Renderer.set_shadowCastingMode = (void(*)(void*, int))UnityEngine::Renderer.set_shadowCastingModeOffset;

UnityEngine::Renderer.set_receiveShadowsOffset = getRealOffset(0x104C908);
UnityEngine::Renderer.set_receiveShadows = (void(*)(void*, bool))UnityEngine::Renderer.set_receiveShadowsOffset;

UnityEngine::Renderer.set_lightProbeUsageOffset = getRealOffset(0x104C960);
UnityEngine::Renderer.set_lightProbeUsage = (void(*)(void*, int))UnityEngine::Renderer.set_lightProbeUsageOffset;

UnityEngine::Renderer.set_reflectionProbeUsageOffset = getRealOffset(0x104C9B8);
UnityEngine::Renderer.set_reflectionProbeUsage = (void(*)(void*, int))UnityEngine::Renderer.set_reflectionProbeUsageOffset;

UnityEngine::Renderer.get_sortingLayerIDOffset = getRealOffset(0x104CA10);
UnityEngine::Renderer.get_sortingLayerID = (int(*)(void*))UnityEngine::Renderer.get_sortingLayerIDOffset;

UnityEngine::Renderer.set_sortingLayerIDOffset = getRealOffset(0x104CA60);
UnityEngine::Renderer.set_sortingLayerID = (void(*)(void*, int))UnityEngine::Renderer.set_sortingLayerIDOffset;

UnityEngine::Renderer.get_sortingOrderOffset = getRealOffset(0x104CAB8);
UnityEngine::Renderer.get_sortingOrder = (int(*)(void*))UnityEngine::Renderer.get_sortingOrderOffset;

UnityEngine::Renderer.set_sortingOrderOffset = getRealOffset(0x104CB08);
UnityEngine::Renderer.set_sortingOrder = (void(*)(void*, int))UnityEngine::Renderer.set_sortingOrderOffset;

UnityEngine::Renderer.set_staticBatchRootTransformOffset = getRealOffset(0x104CB60);
UnityEngine::Renderer.set_staticBatchRootTransform = (void(*)(void*, void *))UnityEngine::Renderer.set_staticBatchRootTransformOffset;

UnityEngine::Renderer.get_staticBatchIndexOffset = getRealOffset(0x104CBB8);
UnityEngine::Renderer.get_staticBatchIndex = (int(*)(void*))UnityEngine::Renderer.get_staticBatchIndexOffset;

UnityEngine::Renderer.SetStaticBatchInfoOffset = getRealOffset(0x104CC08);
UnityEngine::Renderer.SetStaticBatchInfo = (void(*)(void*, int, int))UnityEngine::Renderer.SetStaticBatchInfoOffset;

UnityEngine::Renderer.get_isPartOfStaticBatchOffset = getRealOffset(0x104CC68);
UnityEngine::Renderer.get_isPartOfStaticBatch = (bool(*)(void*))UnityEngine::Renderer.get_isPartOfStaticBatchOffset;

UnityEngine::Renderer.get_worldToLocalMatrixOffset = getRealOffset(0x104CCB8);
UnityEngine::Renderer.get_worldToLocalMatrix = (int (*)(void*))UnityEngine::Renderer.get_worldToLocalMatrixOffset;

UnityEngine::Renderer.GetLightmapIndexOffset = getRealOffset(0x104CDB0);
UnityEngine::Renderer.GetLightmapIndex = (int(*)(void*, int))UnityEngine::Renderer.GetLightmapIndexOffset;

UnityEngine::Renderer.SetLightmapIndexOffset = getRealOffset(0x104CE08);
UnityEngine::Renderer.SetLightmapIndex = (void(*)(void*, int, int))UnityEngine::Renderer.SetLightmapIndexOffset;

UnityEngine::Renderer.GetLightmapSTOffset = getRealOffset(0x104CE68);
UnityEngine::Renderer.GetLightmapST = (int (*)(void*, int))UnityEngine::Renderer.GetLightmapSTOffset;

UnityEngine::Renderer.get_lightmapIndexOffset = getRealOffset(0x104CF44);
UnityEngine::Renderer.get_lightmapIndex = (int(*)(void*))UnityEngine::Renderer.get_lightmapIndexOffset;

UnityEngine::Renderer.set_lightmapIndexOffset = getRealOffset(0x104CF98);
UnityEngine::Renderer.set_lightmapIndex = (void(*)(void*, int))UnityEngine::Renderer.set_lightmapIndexOffset;

UnityEngine::Renderer.get_lightmapScaleOffsetOffset = getRealOffset(0x104CFF4);
UnityEngine::Renderer.get_lightmapScaleOffset = (int (*)(void*))UnityEngine::Renderer.get_lightmapScaleOffsetOffset;

UnityEngine::Renderer.set_lightmapScaleOffsetOffset = getRealOffset(0x104D07C);
UnityEngine::Renderer.set_lightmapScaleOffset = (void(*)(void*, int))UnityEngine::Renderer.set_lightmapScaleOffsetOffset;

UnityEngine::Renderer.get_realtimeLightmapScaleOffsetOffset = getRealOffset(0x104D09C);
UnityEngine::Renderer.get_realtimeLightmapScaleOffset = (int (*)(void*))UnityEngine::Renderer.get_realtimeLightmapScaleOffsetOffset;

UnityEngine::Renderer.GetSharedMaterialArrayOffset = getRealOffset(0x104D124);
UnityEngine::Renderer.get_materialsOffset = getRealOffset(0x104D174);
UnityEngine::Renderer.get_materialOffset = getRealOffset(0x104D21C);
UnityEngine::Renderer.get_material = (void *(*)(void*))UnityEngine::Renderer.get_materialOffset;

UnityEngine::Renderer.set_materialOffset = getRealOffset(0x104D26C);
UnityEngine::Renderer.set_material = (void(*)(void*, void *))UnityEngine::Renderer.set_materialOffset;

UnityEngine::Renderer.get_sharedMaterialOffset = getRealOffset(0x104D2C4);
UnityEngine::Renderer.get_sharedMaterial = (void *(*)(void*))UnityEngine::Renderer.get_sharedMaterialOffset;

UnityEngine::Renderer.set_sharedMaterialOffset = getRealOffset(0x104D314);
UnityEngine::Renderer.set_sharedMaterial = (void(*)(void*, void *))UnityEngine::Renderer.set_sharedMaterialOffset;

UnityEngine::Renderer.get_sharedMaterialsOffset = getRealOffset(0x104D36C);
UnityEngine::RenderSettings.get_fogOffset = getRealOffset(0x1049218);
UnityEngine::RenderSettings.get_fog = (bool(*)())UnityEngine::RenderSettings.get_fogOffset;

UnityEngine::RenderSettings.set_fogOffset = getRealOffset(0x1049260);
UnityEngine::RenderSettings.set_fog = (void(*)(bool))UnityEngine::RenderSettings.set_fogOffset;

UnityEngine::RenderSettings.get_fogStartDistanceOffset = getRealOffset(0x10492B0);
UnityEngine::RenderSettings.get_fogStartDistance = (float(*)())UnityEngine::RenderSettings.get_fogStartDistanceOffset;

UnityEngine::RenderSettings.get_fogEndDistanceOffset = getRealOffset(0x10492F8);
UnityEngine::RenderSettings.get_fogEndDistance = (float(*)())UnityEngine::RenderSettings.get_fogEndDistanceOffset;

UnityEngine::RenderSettings.get_fogModeOffset = getRealOffset(0x1049340);
UnityEngine::RenderSettings.get_fogMode = (int (*)())UnityEngine::RenderSettings.get_fogModeOffset;

UnityEngine::RenderSettings.get_fogColorOffset = getRealOffset(0x1049388);
UnityEngine::RenderSettings.get_fogColor = (Color (*)())UnityEngine::RenderSettings.get_fogColorOffset;

UnityEngine::RenderSettings.set_fogColorOffset = getRealOffset(0x1049444);
UnityEngine::RenderSettings.set_fogColor = (void(*)(Color))UnityEngine::RenderSettings.set_fogColorOffset;

UnityEngine::RenderSettings.get_fogDensityOffset = getRealOffset(0x10494E8);
UnityEngine::RenderSettings.get_fogDensity = (float(*)())UnityEngine::RenderSettings.get_fogDensityOffset;

UnityEngine::RenderSettings.set_fogDensityOffset = getRealOffset(0x1049530);
UnityEngine::RenderSettings.set_fogDensity = (void(*)(float))UnityEngine::RenderSettings.set_fogDensityOffset;

UnityEngine::RenderSettings.get_ambientModeOffset = getRealOffset(0x1049580);
UnityEngine::RenderSettings.get_ambientMode = (int (*)())UnityEngine::RenderSettings.get_ambientModeOffset;

UnityEngine::RenderSettings.set_ambientIntensityOffset = getRealOffset(0x10495C8);
UnityEngine::RenderSettings.set_ambientIntensity = (void(*)(float))UnityEngine::RenderSettings.set_ambientIntensityOffset;

UnityEngine::RenderSettings.set_ambientLightOffset = getRealOffset(0x1049618);
UnityEngine::RenderSettings.set_ambientLight = (void(*)(Color))UnityEngine::RenderSettings.set_ambientLightOffset;

UnityEngine::RenderSettings.get_skyboxOffset = getRealOffset(0x10496BC);
UnityEngine::RenderSettings.get_skybox = (void *(*)())UnityEngine::RenderSettings.get_skyboxOffset;

UnityEngine::RenderSettings.set_skyboxOffset = getRealOffset(0x1049704);
UnityEngine::RenderSettings.set_skybox = (void(*)(void *))UnityEngine::RenderSettings.set_skyboxOffset;

UnityEngine::RenderSettings.get_ambientProbeOffset = getRealOffset(0x1049754);
UnityEngine::RenderSettings.get_ambientProbe = (int (*)())UnityEngine::RenderSettings.get_ambientProbeOffset;

UnityEngine::Shader.FindOffset = getRealOffset(0x1054D18);
UnityEngine::Shader.Find = (void *(*)(monoString*))UnityEngine::Shader.FindOffset;

UnityEngine::Shader.get_isSupportedOffset = getRealOffset(0x1054D68);
UnityEngine::Shader.get_isSupported = (bool(*)(void*))UnityEngine::Shader.get_isSupportedOffset;

UnityEngine::Shader.EnableKeywordOffset = getRealOffset(0x1054DB8);
UnityEngine::Shader.EnableKeyword = (void(*)(monoString*))UnityEngine::Shader.EnableKeywordOffset;

UnityEngine::Shader.DisableKeywordOffset = getRealOffset(0x1054E08);
UnityEngine::Shader.DisableKeyword = (void(*)(monoString*))UnityEngine::Shader.DisableKeywordOffset;

UnityEngine::Shader.get_disableBatchingOffset = getRealOffset(0x1054E58);
UnityEngine::Shader.get_disableBatching = (int (*)(void*))UnityEngine::Shader.get_disableBatchingOffset;

UnityEngine::Shader.PropertyToIDOffset = getRealOffset(0x1054EA8);
UnityEngine::Shader.PropertyToID = (int(*)(monoString*))UnityEngine::Shader.PropertyToIDOffset;

UnityEngine::Shader.SetGlobalFloatImplOffset = getRealOffset(0x1054EF8);
UnityEngine::Shader.SetGlobalFloatImpl = (void(*)(int, float))UnityEngine::Shader.SetGlobalFloatImplOffset;

UnityEngine::Shader.SetGlobalVectorImplOffset = getRealOffset(0x1054F50);
UnityEngine::Shader.SetGlobalVectorImpl = (void(*)(int, int))UnityEngine::Shader.SetGlobalVectorImplOffset;

UnityEngine::Shader.SetGlobalMatrixImplOffset = getRealOffset(0x1055010);
UnityEngine::Shader.SetGlobalMatrixImpl = (void(*)(int, int))UnityEngine::Shader.SetGlobalMatrixImplOffset;

UnityEngine::Shader.SetGlobalTextureImplOffset = getRealOffset(0x1055128);
UnityEngine::Shader.SetGlobalTextureImpl = (void(*)(int, void *))UnityEngine::Shader.SetGlobalTextureImplOffset;

UnityEngine::Shader.SetGlobalFloatOffset = getRealOffset(0x1055180);
UnityEngine::Shader.SetGlobalFloat = (void(*)(monoString*, float))UnityEngine::Shader.SetGlobalFloatOffset;

UnityEngine::Shader.SetGlobalVectorOffset = getRealOffset(0x105521C);
UnityEngine::Shader.SetGlobalVector = (void(*)(monoString*, int))UnityEngine::Shader.SetGlobalVectorOffset;

UnityEngine::Shader.SetGlobalVector1Offset = getRealOffset(0x1055298);
UnityEngine::Shader.SetGlobalVector1 = (void(*)(int, int))UnityEngine::Shader.SetGlobalVector1Offset;

UnityEngine::Shader.SetGlobalColorOffset = getRealOffset(0x10552B8);
UnityEngine::Shader.SetGlobalColor = (void(*)(monoString*, Color))UnityEngine::Shader.SetGlobalColorOffset;

UnityEngine::Shader.SetGlobalMatrixOffset = getRealOffset(0x105535C);
UnityEngine::Shader.SetGlobalMatrix = (void(*)(int, int))UnityEngine::Shader.SetGlobalMatrixOffset;

UnityEngine::Shader.SetGlobalTextureOffset = getRealOffset(0x10553CC);
UnityEngine::Shader.SetGlobalTexture = (void(*)(monoString*, void *))UnityEngine::Shader.SetGlobalTextureOffset;

UnityEngine::Shader.SetGlobalTexture1Offset = getRealOffset(0x1055468);
UnityEngine::Shader.SetGlobalTexture1 = (void(*)(int, void *))UnityEngine::Shader.SetGlobalTexture1Offset;

UnityEngine::Material.CreateWithShaderOffset = getRealOffset(0x1164304);
UnityEngine::Material.CreateWithShader = (void(*)(void *, void *))UnityEngine::Material.CreateWithShaderOffset;

UnityEngine::Material.CreateWithMaterialOffset = getRealOffset(0x116435C);
UnityEngine::Material.CreateWithMaterial = (void(*)(void *, void *))UnityEngine::Material.CreateWithMaterialOffset;

UnityEngine::Material.CreateWithStringOffset = getRealOffset(0x11643B4);
UnityEngine::Material.CreateWithString = (void(*)(void *))UnityEngine::Material.CreateWithStringOffset;

UnityEngine::Material.ctor1Offset = getRealOffset(0x11644D0);
UnityEngine::Material.ctor1 = (void(*)(void*, void *))UnityEngine::Material.ctor1Offset;

UnityEngine::Material.ctor2Offset = getRealOffset(0x1164594);
UnityEngine::Material.ctor2 = (void(*)(void*, monoString*))UnityEngine::Material.ctor2Offset;

UnityEngine::Material.get_shaderOffset = getRealOffset(0x1164650);
UnityEngine::Material.get_shader = (void *(*)(void*))UnityEngine::Material.get_shaderOffset;

UnityEngine::Material.set_shaderOffset = getRealOffset(0x11646A0);
UnityEngine::Material.set_shader = (void(*)(void*, void *))UnityEngine::Material.set_shaderOffset;

UnityEngine::Material.get_colorOffset = getRealOffset(0x11646F8);
UnityEngine::Material.get_color = (Color (*)(void*))UnityEngine::Material.get_colorOffset;

UnityEngine::Material.set_colorOffset = getRealOffset(0x116495C);
UnityEngine::Material.set_color = (void(*)(void*, Color))UnityEngine::Material.set_colorOffset;

UnityEngine::Material.get_mainTextureOffset = getRealOffset(0x1164AA4);
UnityEngine::Material.get_mainTexture = (void *(*)(void*))UnityEngine::Material.get_mainTextureOffset;

UnityEngine::Material.set_mainTextureOffset = getRealOffset(0x1164C54);
UnityEngine::Material.set_mainTexture = (void(*)(void*, void *))UnityEngine::Material.set_mainTextureOffset;

UnityEngine::Material.get_mainTextureOffsetOffset = getRealOffset(0x1164E20);

UnityEngine::Material.set_mainTextureOffsetOffset = getRealOffset(0x1164FC8);

UnityEngine::Material.get_mainTextureScaleOffset = getRealOffset(0x11650EC);
UnityEngine::Material.get_mainTextureScale = (Vector2 (*)(void*))UnityEngine::Material.get_mainTextureScaleOffset;

UnityEngine::Material.set_mainTextureScaleOffset = getRealOffset(0x1165290);
UnityEngine::Material.set_mainTextureScale = (void(*)(void*, Vector2))UnityEngine::Material.set_mainTextureScaleOffset;

UnityEngine::Material.GetFirstPropertyNameIdByAttributeOffset = getRealOffset(0x11647D8);
UnityEngine::Material.GetFirstPropertyNameIdByAttribute = (int(*)(void*, int))UnityEngine::Material.GetFirstPropertyNameIdByAttributeOffset;

UnityEngine::Material.HasPropertyOffset = getRealOffset(0x11653B4);
UnityEngine::Material.HasProperty = (bool(*)(void*, int))UnityEngine::Material.HasPropertyOffset;

UnityEngine::Material.HasProperty1Offset = getRealOffset(0x116540C);
UnityEngine::Material.HasProperty1 = (bool(*)(void*, monoString*))UnityEngine::Material.HasProperty1Offset;

UnityEngine::Material.get_renderQueueOffset = getRealOffset(0x1165470);
UnityEngine::Material.get_renderQueue = (int(*)(void*))UnityEngine::Material.get_renderQueueOffset;

UnityEngine::Material.set_renderQueueOffset = getRealOffset(0x11654C0);
UnityEngine::Material.set_renderQueue = (void(*)(void*, int))UnityEngine::Material.set_renderQueueOffset;

UnityEngine::Material.EnableKeywordOffset = getRealOffset(0x1165518);
UnityEngine::Material.EnableKeyword = (void(*)(void*, monoString*))UnityEngine::Material.EnableKeywordOffset;

UnityEngine::Material.DisableKeywordOffset = getRealOffset(0x1165570);
UnityEngine::Material.DisableKeyword = (void(*)(void*, monoString*))UnityEngine::Material.DisableKeywordOffset;

UnityEngine::Material.IsKeywordEnabledOffset = getRealOffset(0x11655C8);
UnityEngine::Material.IsKeywordEnabled = (bool(*)(void*, monoString*))UnityEngine::Material.IsKeywordEnabledOffset;

UnityEngine::Material.set_enableInstancingOffset = getRealOffset(0x1165620);
UnityEngine::Material.set_enableInstancing = (void(*)(void*, bool))UnityEngine::Material.set_enableInstancingOffset;

UnityEngine::Material.get_passCountOffset = getRealOffset(0x1165678);
UnityEngine::Material.get_passCount = (int(*)(void*))UnityEngine::Material.get_passCountOffset;

UnityEngine::Material.SetPassOffset = getRealOffset(0x11656C8);
UnityEngine::Material.SetPass = (bool(*)(void*, int))UnityEngine::Material.SetPassOffset;

UnityEngine::Material.CopyPropertiesFromMaterialOffset = getRealOffset(0x1165720);
UnityEngine::Material.CopyPropertiesFromMaterial = (void(*)(void*, void *))UnityEngine::Material.CopyPropertiesFromMaterialOffset;

UnityEngine::Material.GetShaderKeywordsOffset = getRealOffset(0x1165778);
UnityEngine::Material.get_shaderKeywordsOffset = getRealOffset(0x1165820);
UnityEngine::Material.SetFloatImplOffset = getRealOffset(0x11658C8);
UnityEngine::Material.SetFloatImpl = (void(*)(void*, int, float))UnityEngine::Material.SetFloatImplOffset;

UnityEngine::Material.SetColorImplOffset = getRealOffset(0x1165928);
UnityEngine::Material.SetColorImpl = (void(*)(void*, int, Color))UnityEngine::Material.SetColorImplOffset;

UnityEngine::Material.SetMatrixImplOffset = getRealOffset(0x1165A00);
UnityEngine::Material.SetMatrixImpl = (void(*)(void*, int, int))UnityEngine::Material.SetMatrixImplOffset;

UnityEngine::Material.SetTextureImplOffset = getRealOffset(0x1165B2C);
UnityEngine::Material.SetTextureImpl = (void(*)(void*, int, void *))UnityEngine::Material.SetTextureImplOffset;

UnityEngine::Material.GetFloatImplOffset = getRealOffset(0x1165B8C);
UnityEngine::Material.GetFloatImpl = (float(*)(void*, int))UnityEngine::Material.GetFloatImplOffset;

UnityEngine::Material.GetColorImplOffset = getRealOffset(0x1165BE4);
UnityEngine::Material.GetColorImpl = (Color (*)(void*, int))UnityEngine::Material.GetColorImplOffset;

UnityEngine::Material.GetTextureImplOffset = getRealOffset(0x1165CC0);
UnityEngine::Material.GetTextureImpl = (void *(*)(void*, int))UnityEngine::Material.GetTextureImplOffset;

UnityEngine::Material.GetTextureScaleAndOffsetImplOffset = getRealOffset(0x1165D18);
UnityEngine::Material.GetTextureScaleAndOffsetImpl = (int (*)(void*, int))UnityEngine::Material.GetTextureScaleAndOffsetImplOffset;

UnityEngine::Material.SetTextureOffsetImplOffset = getRealOffset(0x1165DF4);
UnityEngine::Material.SetTextureOffsetImpl = (void(*)(void*, int, Vector2))UnityEngine::Material.SetTextureOffsetImplOffset;

UnityEngine::Material.SetTextureScaleImplOffset = getRealOffset(0x1165EBC);
UnityEngine::Material.SetTextureScaleImpl = (void(*)(void*, int, Vector2))UnityEngine::Material.SetTextureScaleImplOffset;

UnityEngine::Material.SetFloatOffset = getRealOffset(0x1165F84);
UnityEngine::Material.SetFloat = (void(*)(void*, monoString*, float))UnityEngine::Material.SetFloatOffset;

UnityEngine::Material.SetFloat1Offset = getRealOffset(0x1165FF0);
UnityEngine::Material.SetFloat1 = (void(*)(void*, int, float))UnityEngine::Material.SetFloat1Offset;

UnityEngine::Material.SetIntOffset = getRealOffset(0x1166050);
UnityEngine::Material.SetInt = (void(*)(void*, monoString*, int))UnityEngine::Material.SetIntOffset;

UnityEngine::Material.SetColorOffset = getRealOffset(0x1164A58);
UnityEngine::Material.SetColor = (void(*)(void*, monoString*, Color))UnityEngine::Material.SetColorOffset;

UnityEngine::Material.SetColor1Offset = getRealOffset(0x1164A34);
UnityEngine::Material.SetColor1 = (void(*)(void*, int, Color))UnityEngine::Material.SetColor1Offset;

UnityEngine::Material.SetVectorOffset = getRealOffset(0x11660CC);
UnityEngine::Material.SetVector = (void(*)(void*, monoString*, int))UnityEngine::Material.SetVectorOffset;

UnityEngine::Material.SetVector1Offset = getRealOffset(0x116613C);
UnityEngine::Material.SetVector1 = (void(*)(void*, int, int))UnityEngine::Material.SetVector1Offset;

UnityEngine::Material.SetMatrixOffset = getRealOffset(0x116619C);
UnityEngine::Material.SetMatrix = (void(*)(void*, monoString*, int))UnityEngine::Material.SetMatrixOffset;

UnityEngine::Material.SetMatrix1Offset = getRealOffset(0x1166244);
UnityEngine::Material.SetMatrix1 = (void(*)(void*, int, int))UnityEngine::Material.SetMatrix1Offset;

UnityEngine::Material.SetTextureOffset = getRealOffset(0x1164DB4);
UnityEngine::Material.SetTexture = (void(*)(void*, monoString*, void *))UnityEngine::Material.SetTextureOffset;

UnityEngine::Material.SetTexture1Offset = getRealOffset(0x1164D54);
UnityEngine::Material.SetTexture1 = (void(*)(void*, int, void *))UnityEngine::Material.SetTexture1Offset;

UnityEngine::Material.GetFloatOffset = getRealOffset(0x11662BC);
UnityEngine::Material.GetFloat = (float(*)(void*, monoString*))UnityEngine::Material.GetFloatOffset;

UnityEngine::Material.GetFloat1Offset = getRealOffset(0x1166320);
UnityEngine::Material.GetFloat1 = (float(*)(void*, int))UnityEngine::Material.GetFloat1Offset;

UnityEngine::Material.GetColorOffset = getRealOffset(0x11648BC);
UnityEngine::Material.GetColor = (Color (*)(void*, monoString*))UnityEngine::Material.GetColorOffset;

UnityEngine::Material.GetColor1Offset = getRealOffset(0x1164830);
UnityEngine::Material.GetColor1 = (Color (*)(void*, int))UnityEngine::Material.GetColor1Offset;

UnityEngine::Material.GetVectorOffset = getRealOffset(0x1166378);
UnityEngine::Material.GetVector = (int (*)(void*, monoString*))UnityEngine::Material.GetVectorOffset;

UnityEngine::Material.GetVector1Offset = getRealOffset(0x1166438);
UnityEngine::Material.GetVector1 = (int (*)(void*, int))UnityEngine::Material.GetVector1Offset;

UnityEngine::Material.GetTextureOffset = getRealOffset(0x1164BF0);
UnityEngine::Material.GetTexture = (void *(*)(void*, monoString*))UnityEngine::Material.GetTextureOffset;

UnityEngine::Material.GetTexture1Offset = getRealOffset(0x1164B98);
UnityEngine::Material.GetTexture1 = (void *(*)(void*, int))UnityEngine::Material.GetTexture1Offset;

UnityEngine::Material.SetTextureOffsetOffset = getRealOffset(0x11650AC);

UnityEngine::Material.SetTextureOffset1Offset = getRealOffset(0x1165094);
UnityEngine::Material.SetTextureOffset1 = (void(*)(void*, int, Vector2))UnityEngine::Material.SetTextureOffset1Offset;

UnityEngine::Material.SetTextureScaleOffset = getRealOffset(0x1165374);
UnityEngine::Material.SetTextureScale = (void(*)(void*, monoString*, Vector2))UnityEngine::Material.SetTextureScaleOffset;

UnityEngine::Material.SetTextureScale1Offset = getRealOffset(0x116535C);
UnityEngine::Material.SetTextureScale1 = (void(*)(void*, int, Vector2))UnityEngine::Material.SetTextureScale1Offset;

UnityEngine::Material.GetTextureOffsetOffset = getRealOffset(0x1164F88);

UnityEngine::Material.GetTextureOffset1Offset = getRealOffset(0x1164EEC);
UnityEngine::Material.GetTextureOffset1 = (Vector2 (*)(void*, int))UnityEngine::Material.GetTextureOffset1Offset;

UnityEngine::Material.GetTextureScaleOffset = getRealOffset(0x1165250);
UnityEngine::Material.GetTextureScale = (Vector2 (*)(void*, monoString*))UnityEngine::Material.GetTextureScaleOffset;

UnityEngine::Material.GetTextureScale1Offset = getRealOffset(0x11651B8);
UnityEngine::Material.GetTextureScale1 = (Vector2 (*)(void*, int))UnityEngine::Material.GetTextureScale1Offset;

UnityEngine::LensFlare.set_colorOffset = getRealOffset(0x1161FF4);
UnityEngine::LensFlare.set_color = (void(*)(void*, Color))UnityEngine::LensFlare.set_colorOffset;

UnityEngine::Projector.get_materialOffset = getRealOffset(0x1176000);
UnityEngine::Projector.get_material = (void *(*)(void*))UnityEngine::Projector.get_materialOffset;

UnityEngine::Projector.set_materialOffset = getRealOffset(0x1176050);
UnityEngine::Projector.set_material = (void(*)(void*, void *))UnityEngine::Projector.set_materialOffset;

UnityEngine::Light.get_typeOffset = getRealOffset(0x11620B4);
UnityEngine::Light.get_type = (int (*)(void*))UnityEngine::Light.get_typeOffset;

UnityEngine::Light.set_typeOffset = getRealOffset(0x1162104);
UnityEngine::Light.set_type = (void(*)(void*, int))UnityEngine::Light.set_typeOffset;

UnityEngine::Light.get_spotAngleOffset = getRealOffset(0x116215C);
UnityEngine::Light.get_spotAngle = (float(*)(void*))UnityEngine::Light.get_spotAngleOffset;

UnityEngine::Light.set_spotAngleOffset = getRealOffset(0x11621AC);
UnityEngine::Light.set_spotAngle = (void(*)(void*, float))UnityEngine::Light.set_spotAngleOffset;

UnityEngine::Light.get_colorOffset = getRealOffset(0x1162204);
UnityEngine::Light.get_color = (Color (*)(void*))UnityEngine::Light.get_colorOffset;

UnityEngine::Light.set_colorOffset = getRealOffset(0x11622D0);
UnityEngine::Light.set_color = (void(*)(void*, Color))UnityEngine::Light.set_colorOffset;

UnityEngine::Light.get_intensityOffset = getRealOffset(0x1162390);
UnityEngine::Light.get_intensity = (float(*)(void*))UnityEngine::Light.get_intensityOffset;

UnityEngine::Light.set_intensityOffset = getRealOffset(0x11623E0);
UnityEngine::Light.set_intensity = (void(*)(void*, float))UnityEngine::Light.set_intensityOffset;

UnityEngine::Light.get_bounceIntensityOffset = getRealOffset(0x1162438);
UnityEngine::Light.get_bounceIntensity = (float(*)(void*))UnityEngine::Light.get_bounceIntensityOffset;

UnityEngine::Light.set_bounceIntensityOffset = getRealOffset(0x1162488);
UnityEngine::Light.set_bounceIntensity = (void(*)(void*, float))UnityEngine::Light.set_bounceIntensityOffset;

UnityEngine::Light.get_rangeOffset = getRealOffset(0x11624E0);
UnityEngine::Light.get_range = (float(*)(void*))UnityEngine::Light.get_rangeOffset;

UnityEngine::Light.set_rangeOffset = getRealOffset(0x1162530);
UnityEngine::Light.set_range = (void(*)(void*, float))UnityEngine::Light.set_rangeOffset;

UnityEngine::Light.get_bakingOutputOffset = getRealOffset(0x1162588);
UnityEngine::Light.get_bakingOutput = (int (*)(void*))UnityEngine::Light.get_bakingOutputOffset;

UnityEngine::Light.set_bakingOutputOffset = getRealOffset(0x1162668);
UnityEngine::Light.set_bakingOutput = (void(*)(void*, int))UnityEngine::Light.set_bakingOutputOffset;

UnityEngine::Light.set_cullingMaskOffset = getRealOffset(0x1162730);
UnityEngine::Light.set_cullingMask = (void(*)(void*, int))UnityEngine::Light.set_cullingMaskOffset;

UnityEngine::Light.get_shadowsOffset = getRealOffset(0x1162788);
UnityEngine::Light.get_shadows = (int (*)(void*))UnityEngine::Light.get_shadowsOffset;

UnityEngine::Light.set_renderModeOffset = getRealOffset(0x11627D8);
UnityEngine::Light.set_renderMode = (void(*)(void*, int))UnityEngine::Light.set_renderModeOffset;

UnityEngine::MeshFilter.DontStripMeshFilterOffset = getRealOffset(0x116DFB0);
UnityEngine::MeshFilter.DontStripMeshFilter = (void(*)(void*))UnityEngine::MeshFilter.DontStripMeshFilterOffset;

UnityEngine::MeshFilter.get_sharedMeshOffset = getRealOffset(0x116DFB4);
UnityEngine::MeshFilter.get_sharedMesh = (void *(*)(void*))UnityEngine::MeshFilter.get_sharedMeshOffset;

UnityEngine::MeshFilter.set_sharedMeshOffset = getRealOffset(0x116E004);
UnityEngine::MeshFilter.set_sharedMesh = (void(*)(void*, void *))UnityEngine::MeshFilter.set_sharedMeshOffset;

UnityEngine::MeshFilter.get_meshOffset = getRealOffset(0x116E05C);
UnityEngine::MeshFilter.get_mesh = (void *(*)(void*))UnityEngine::MeshFilter.get_meshOffset;

UnityEngine::MeshFilter.set_meshOffset = getRealOffset(0x116E0AC);
UnityEngine::MeshFilter.set_mesh = (void(*)(void*, void *))UnityEngine::MeshFilter.set_meshOffset;

UnityEngine::SkinnedMeshRenderer.get_updateWhenOffscreenOffset = getRealOffset(0x105553C);
UnityEngine::SkinnedMeshRenderer.get_updateWhenOffscreen = (bool(*)(void*))UnityEngine::SkinnedMeshRenderer.get_updateWhenOffscreenOffset;

UnityEngine::SkinnedMeshRenderer.set_updateWhenOffscreenOffset = getRealOffset(0x105558C);
UnityEngine::SkinnedMeshRenderer.set_updateWhenOffscreen = (void(*)(void*, bool))UnityEngine::SkinnedMeshRenderer.set_updateWhenOffscreenOffset;

UnityEngine::SkinnedMeshRenderer.get_bonesOffset = getRealOffset(0x10555E4);
UnityEngine::SkinnedMeshRenderer.get_sharedMeshOffset = getRealOffset(0x105568C);
UnityEngine::SkinnedMeshRenderer.get_sharedMesh = (void *(*)(void*))UnityEngine::SkinnedMeshRenderer.get_sharedMeshOffset;

UnityEngine::SkinnedMeshRenderer.set_sharedMeshOffset = getRealOffset(0x10556DC);
UnityEngine::SkinnedMeshRenderer.set_sharedMesh = (void(*)(void*, void *))UnityEngine::SkinnedMeshRenderer.set_sharedMeshOffset;

UnityEngine::SkinnedMeshRenderer.SetLocalAABBOffset = getRealOffset(0x1055734);
UnityEngine::SkinnedMeshRenderer.SetLocalAABB = (void(*)(void*, int))UnityEngine::SkinnedMeshRenderer.SetLocalAABBOffset;

UnityEngine::SkinnedMeshRenderer.set_localBoundsOffset = getRealOffset(0x1055804);
UnityEngine::SkinnedMeshRenderer.set_localBounds = (void(*)(void*, int))UnityEngine::SkinnedMeshRenderer.set_localBoundsOffset;

UnityEngine::MeshRenderer.DontStripMeshRendererOffset = getRealOffset(0x116E104);
UnityEngine::MeshRenderer.DontStripMeshRenderer = (void(*)(void*))UnityEngine::MeshRenderer.DontStripMeshRendererOffset;

UnityEngine::MeshRenderer.get_additionalVertexStreamsOffset = getRealOffset(0x116E108);
UnityEngine::MeshRenderer.get_additionalVertexStreams = (void *(*)(void*))UnityEngine::MeshRenderer.get_additionalVertexStreamsOffset;

UnityEngine::MeshRenderer.set_additionalVertexStreamsOffset = getRealOffset(0x116E158);
UnityEngine::MeshRenderer.set_additionalVertexStreams = (void(*)(void*, void *))UnityEngine::MeshRenderer.set_additionalVertexStreamsOffset;

UnityEngine::LODGroup.get_lodCountOffset = getRealOffset(0x1161CB4);
UnityEngine::LODGroup.get_lodCount = (int(*)(void*))UnityEngine::LODGroup.get_lodCountOffset;

UnityEngine::LODGroup.RecalculateBoundsOffset = getRealOffset(0x1161D04);
UnityEngine::LODGroup.RecalculateBounds = (void(*)(void*))UnityEngine::LODGroup.RecalculateBoundsOffset;

UnityEngine::LODGroup.GetLODsOffset = getRealOffset(0x1161D54);
UnityEngine::LightProbeGroup.get_probePositionsOffset = getRealOffset(0x1162830);
UnityEngine::Mesh.Internal_CreateOffset = getRealOffset(0x116B274);
UnityEngine::Mesh.Internal_Create = (void(*)(void *))UnityEngine::Mesh.Internal_CreateOffset;

UnityEngine::Mesh.FromInstanceIDOffset = getRealOffset(0x116B380);
UnityEngine::Mesh.FromInstanceID = (void *(*)(int))UnityEngine::Mesh.FromInstanceIDOffset;

UnityEngine::Mesh.GetTrianglesImplOffset = getRealOffset(0x116B3D0);
UnityEngine::Mesh.GetIndicesImplOffset = getRealOffset(0x116B430);
UnityEngine::Mesh.SetIndicesImplOffset = getRealOffset(0x116B490);
UnityEngine::Mesh.SetIndicesImpl = (void(*)(void*, int, int, int, void *, int, int, bool, int))UnityEngine::Mesh.SetIndicesImplOffset;

UnityEngine::Mesh.PrintErrorCantAccessChannelOffset = getRealOffset(0x116B534);
UnityEngine::Mesh.PrintErrorCantAccessChannel = (void(*)(void*, int))UnityEngine::Mesh.PrintErrorCantAccessChannelOffset;

UnityEngine::Mesh.HasVertexAttributeOffset = getRealOffset(0x116B58C);
UnityEngine::Mesh.HasVertexAttribute = (bool(*)(void*, int))UnityEngine::Mesh.HasVertexAttributeOffset;

UnityEngine::Mesh.SetArrayForChannelImplOffset = getRealOffset(0x116B5E4);
UnityEngine::Mesh.SetArrayForChannelImpl = (void(*)(void*, int, int, int, void *, int, int, int))UnityEngine::Mesh.SetArrayForChannelImplOffset;

UnityEngine::Mesh.GetAllocArrayFromChannelImplOffset = getRealOffset(0x116B64C);
UnityEngine::Mesh.GetAllocArrayFromChannelImpl = (void *(*)(void*, int, int, int))UnityEngine::Mesh.GetAllocArrayFromChannelImplOffset;

UnityEngine::Mesh.GetBoneWeightsImplOffset = getRealOffset(0x116B6B4);
UnityEngine::Mesh.get_bindposesOffset = getRealOffset(0x116B75C);
UnityEngine::Mesh.get_isReadableOffset = getRealOffset(0x116B804);
UnityEngine::Mesh.get_isReadable = (bool(*)(void*))UnityEngine::Mesh.get_isReadableOffset;

UnityEngine::Mesh.get_canAccessOffset = getRealOffset(0x116B854);
UnityEngine::Mesh.get_canAccess = (bool(*)(void*))UnityEngine::Mesh.get_canAccessOffset;

UnityEngine::Mesh.get_vertexCountOffset = getRealOffset(0x116B8A4);
UnityEngine::Mesh.get_vertexCount = (int(*)(void*))UnityEngine::Mesh.get_vertexCountOffset;

UnityEngine::Mesh.get_subMeshCountOffset = getRealOffset(0x116B8F4);
UnityEngine::Mesh.get_subMeshCount = (int(*)(void*))UnityEngine::Mesh.get_subMeshCountOffset;

UnityEngine::Mesh.set_subMeshCountOffset = getRealOffset(0x116B944);
UnityEngine::Mesh.set_subMeshCount = (void(*)(void*, int))UnityEngine::Mesh.set_subMeshCountOffset;

UnityEngine::Mesh.get_boundsOffset = getRealOffset(0x116B99C);
UnityEngine::Mesh.get_bounds = (int (*)(void*))UnityEngine::Mesh.get_boundsOffset;

UnityEngine::Mesh.set_boundsOffset = getRealOffset(0x116BA84);
UnityEngine::Mesh.set_bounds = (void(*)(void*, int))UnityEngine::Mesh.set_boundsOffset;

UnityEngine::Mesh.ClearImplOffset = getRealOffset(0x116BB54);
UnityEngine::Mesh.ClearImpl = (void(*)(void*, bool))UnityEngine::Mesh.ClearImplOffset;

UnityEngine::Mesh.RecalculateBoundsImplOffset = getRealOffset(0x116BBAC);
UnityEngine::Mesh.RecalculateBoundsImpl = (void(*)(void*))UnityEngine::Mesh.RecalculateBoundsImplOffset;

UnityEngine::Mesh.RecalculateNormalsImplOffset = getRealOffset(0x116BBFC);
UnityEngine::Mesh.RecalculateNormalsImpl = (void(*)(void*))UnityEngine::Mesh.RecalculateNormalsImplOffset;

UnityEngine::Mesh.MarkDynamicImplOffset = getRealOffset(0x116BC4C);
UnityEngine::Mesh.MarkDynamicImpl = (void(*)(void*))UnityEngine::Mesh.MarkDynamicImplOffset;

UnityEngine::Mesh.GetUVChannelOffset = getRealOffset(0x116BD14);
UnityEngine::Mesh.GetUVChannel = (int (*)(void*, int))UnityEngine::Mesh.GetUVChannelOffset;

UnityEngine::Mesh.DefaultDimensionForChannelOffset = getRealOffset(0x116BDC0);
UnityEngine::Mesh.DefaultDimensionForChannel = (int(*)(int))UnityEngine::Mesh.DefaultDimensionForChannelOffset;

UnityEngine::Mesh.SetSizedArrayForChannelOffset = getRealOffset(0x116BE90);
UnityEngine::Mesh.SetSizedArrayForChannel = (void(*)(void*, int, int, int, void *, int, int, int))UnityEngine::Mesh.SetSizedArrayForChannelOffset;

UnityEngine::Mesh.get_verticesOffset = getRealOffset(0x116C1AC);
UnityEngine::Mesh.get_normalsOffset = getRealOffset(0x116C274);
UnityEngine::Mesh.get_tangentsOffset = getRealOffset(0x116C33C);
UnityEngine::Mesh.get_uvOffset = getRealOffset(0x116C404);
UnityEngine::Mesh.get_uv2Offset = getRealOffset(0x116C4CC);
UnityEngine::Mesh.get_uv3Offset = getRealOffset(0x116C594);
UnityEngine::Mesh.get_uv4Offset = getRealOffset(0x116C65C);
UnityEngine::Mesh.get_colorsOffset = getRealOffset(0x116C724);
UnityEngine::Mesh.get_colors32Offset = getRealOffset(0x116C7EC);
UnityEngine::Mesh.PrintErrorCantAccessIndicesOffset = getRealOffset(0x116CEF0);
UnityEngine::Mesh.PrintErrorCantAccessIndices = (void(*)(void*))UnityEngine::Mesh.PrintErrorCantAccessIndicesOffset;

UnityEngine::Mesh.CheckCanAccessSubmeshOffset = getRealOffset(0x116D044);
UnityEngine::Mesh.CheckCanAccessSubmesh = (bool(*)(void*, int, bool))UnityEngine::Mesh.CheckCanAccessSubmeshOffset;

UnityEngine::Mesh.CheckCanAccessSubmeshTrianglesOffset = getRealOffset(0x116D1C0);
UnityEngine::Mesh.CheckCanAccessSubmeshTriangles = (bool(*)(void*, int))UnityEngine::Mesh.CheckCanAccessSubmeshTrianglesOffset;

UnityEngine::Mesh.CheckCanAccessSubmeshIndicesOffset = getRealOffset(0x116D1C8);
UnityEngine::Mesh.CheckCanAccessSubmeshIndices = (bool(*)(void*, int))UnityEngine::Mesh.CheckCanAccessSubmeshIndicesOffset;

UnityEngine::Mesh.get_trianglesOffset = getRealOffset(0x116D1D0);
UnityEngine::Mesh.GetTrianglesOffset = getRealOffset(0x116D448);
UnityEngine::Mesh.GetTriangles1Offset = getRealOffset(0x116D450);
UnityEngine::Mesh.GetIndicesOffset = getRealOffset(0x116D518);
UnityEngine::Mesh.GetIndices1Offset = getRealOffset(0x116D520);
UnityEngine::Mesh.CheckIndicesArrayRangeOffset = getRealOffset(0x116D5E8);
UnityEngine::Mesh.CheckIndicesArrayRange = (void(*)(void*, int, int, int))UnityEngine::Mesh.CheckIndicesArrayRangeOffset;

UnityEngine::Mesh.SetTrianglesImplOffset = getRealOffset(0x116D3A4);
UnityEngine::Mesh.SetTrianglesImpl = (void(*)(void*, int, int, void *, int, int, int, bool, int))UnityEngine::Mesh.SetTrianglesImplOffset;

UnityEngine::Mesh.get_boneWeightsOffset = getRealOffset(0x116DAEC);
UnityEngine::Mesh.ClearOffset = getRealOffset(0x116DB94);
UnityEngine::Mesh.Clear = (void(*)(void*, bool))UnityEngine::Mesh.ClearOffset;

UnityEngine::Mesh.Clear1Offset = getRealOffset(0x116DBEC);
UnityEngine::Mesh.Clear1 = (void(*)(void*))UnityEngine::Mesh.Clear1Offset;

UnityEngine::Mesh.RecalculateBoundsOffset = getRealOffset(0x116DC40);
UnityEngine::Mesh.RecalculateBounds = (void(*)(void*))UnityEngine::Mesh.RecalculateBoundsOffset;

UnityEngine::Mesh.RecalculateNormalsOffset = getRealOffset(0x116DD70);
UnityEngine::Mesh.RecalculateNormals = (void(*)(void*))UnityEngine::Mesh.RecalculateNormalsOffset;

UnityEngine::Mesh.MarkDynamicOffset = getRealOffset(0x116DEA0);
UnityEngine::Mesh.MarkDynamic = (void(*)(void*))UnityEngine::Mesh.MarkDynamicOffset;

UnityEngine::BoneWeight.get_weight0Offset = getRealOffset(0x3F1B40);
UnityEngine::BoneWeight.get_weight0 = (float(*)(void*))UnityEngine::BoneWeight.get_weight0Offset;

UnityEngine::BoneWeight.set_weight0Offset = getRealOffset(0x3F1B48);
UnityEngine::BoneWeight.set_weight0 = (void(*)(void*, float))UnityEngine::BoneWeight.set_weight0Offset;

UnityEngine::BoneWeight.get_weight1Offset = getRealOffset(0x3F1B50);
UnityEngine::BoneWeight.get_weight1 = (float(*)(void*))UnityEngine::BoneWeight.get_weight1Offset;

UnityEngine::BoneWeight.set_weight1Offset = getRealOffset(0x3F1B58);
UnityEngine::BoneWeight.set_weight1 = (void(*)(void*, float))UnityEngine::BoneWeight.set_weight1Offset;

UnityEngine::BoneWeight.get_weight2Offset = getRealOffset(0x3F1B60);
UnityEngine::BoneWeight.get_weight2 = (float(*)(void*))UnityEngine::BoneWeight.get_weight2Offset;

UnityEngine::BoneWeight.set_weight2Offset = getRealOffset(0x3F1B68);
UnityEngine::BoneWeight.set_weight2 = (void(*)(void*, float))UnityEngine::BoneWeight.set_weight2Offset;

UnityEngine::BoneWeight.get_weight3Offset = getRealOffset(0x3F1B70);
UnityEngine::BoneWeight.get_weight3 = (float(*)(void*))UnityEngine::BoneWeight.get_weight3Offset;

UnityEngine::BoneWeight.set_weight3Offset = getRealOffset(0x3F1B78);
UnityEngine::BoneWeight.set_weight3 = (void(*)(void*, float))UnityEngine::BoneWeight.set_weight3Offset;

UnityEngine::BoneWeight.get_boneIndex0Offset = getRealOffset(0x3F1B80);
UnityEngine::BoneWeight.get_boneIndex0 = (int(*)(void*))UnityEngine::BoneWeight.get_boneIndex0Offset;

UnityEngine::BoneWeight.set_boneIndex0Offset = getRealOffset(0x3F1B88);
UnityEngine::BoneWeight.set_boneIndex0 = (void(*)(void*, int))UnityEngine::BoneWeight.set_boneIndex0Offset;

UnityEngine::BoneWeight.get_boneIndex1Offset = getRealOffset(0x3F1B90);
UnityEngine::BoneWeight.get_boneIndex1 = (int(*)(void*))UnityEngine::BoneWeight.get_boneIndex1Offset;

UnityEngine::BoneWeight.set_boneIndex1Offset = getRealOffset(0x3F1B98);
UnityEngine::BoneWeight.set_boneIndex1 = (void(*)(void*, int))UnityEngine::BoneWeight.set_boneIndex1Offset;

UnityEngine::BoneWeight.get_boneIndex2Offset = getRealOffset(0x3F1BA0);
UnityEngine::BoneWeight.get_boneIndex2 = (int(*)(void*))UnityEngine::BoneWeight.get_boneIndex2Offset;

UnityEngine::BoneWeight.set_boneIndex2Offset = getRealOffset(0x3F1BA8);
UnityEngine::BoneWeight.set_boneIndex2 = (void(*)(void*, int))UnityEngine::BoneWeight.set_boneIndex2Offset;

UnityEngine::BoneWeight.get_boneIndex3Offset = getRealOffset(0x3F1BB0);
UnityEngine::BoneWeight.get_boneIndex3 = (int(*)(void*))UnityEngine::BoneWeight.get_boneIndex3Offset;

UnityEngine::BoneWeight.set_boneIndex3Offset = getRealOffset(0x3F1BB8);
UnityEngine::BoneWeight.set_boneIndex3 = (void(*)(void*, int))UnityEngine::BoneWeight.set_boneIndex3Offset;

UnityEngine::BoneWeight.GetHashCodeOffset = getRealOffset(0x3F1BC0);
UnityEngine::BoneWeight.GetHashCode = (int(*)(void*))UnityEngine::BoneWeight.GetHashCodeOffset;

UnityEngine::BoneWeight.Equals1Offset = getRealOffset(0x3F1BD0);
UnityEngine::BoneWeight.Equals1 = (bool(*)(void*, int))UnityEngine::BoneWeight.Equals1Offset;

UnityEngine::CombineInstance.get_meshOffset = getRealOffset(0x3F1FE0);
UnityEngine::CombineInstance.get_mesh = (void *(*)(void*))UnityEngine::CombineInstance.get_meshOffset;

UnityEngine::CombineInstance.set_meshOffset = getRealOffset(0x3F1FEC);
UnityEngine::CombineInstance.set_mesh = (void(*)(void*, void *))UnityEngine::CombineInstance.set_meshOffset;

UnityEngine::CombineInstance.set_transformOffset = getRealOffset(0x3F1FF4);
UnityEngine::CombineInstance.set_transform = (void(*)(void*, int))UnityEngine::CombineInstance.set_transformOffset;

UnityEngine::Texture.get_mipmapCountOffset = getRealOffset(0x105975C);
UnityEngine::Texture.get_mipmapCount = (int(*)(void*))UnityEngine::Texture.get_mipmapCountOffset;

UnityEngine::Texture.GetDataWidthOffset = getRealOffset(0x10597AC);
UnityEngine::Texture.GetDataWidth = (int(*)(void*))UnityEngine::Texture.GetDataWidthOffset;

UnityEngine::Texture.GetDataHeightOffset = getRealOffset(0x10597FC);
UnityEngine::Texture.GetDataHeight = (int(*)(void*))UnityEngine::Texture.GetDataHeightOffset;

UnityEngine::Texture.GetDimensionOffset = getRealOffset(0x105984C);
UnityEngine::Texture.GetDimension = (int (*)(void*))UnityEngine::Texture.GetDimensionOffset;

UnityEngine::Texture.get_widthOffset = getRealOffset(0x105989C);
UnityEngine::Texture.get_width = (int(*)(void*))UnityEngine::Texture.get_widthOffset;

UnityEngine::Texture.set_widthOffset = getRealOffset(0x10598EC);
UnityEngine::Texture.set_width = (void(*)(void*, int))UnityEngine::Texture.set_widthOffset;

UnityEngine::Texture.get_heightOffset = getRealOffset(0x1059964);
UnityEngine::Texture.get_height = (int(*)(void*))UnityEngine::Texture.get_heightOffset;

UnityEngine::Texture.set_heightOffset = getRealOffset(0x10599B4);
UnityEngine::Texture.set_height = (void(*)(void*, int))UnityEngine::Texture.set_heightOffset;

UnityEngine::Texture.get_dimensionOffset = getRealOffset(0x1059A2C);
UnityEngine::Texture.get_dimension = (int (*)(void*))UnityEngine::Texture.get_dimensionOffset;

UnityEngine::Texture.set_dimensionOffset = getRealOffset(0x1059A7C);
UnityEngine::Texture.set_dimension = (void(*)(void*, int))UnityEngine::Texture.set_dimensionOffset;

UnityEngine::Texture.get_isReadableOffset = getRealOffset(0x1059AF4);
UnityEngine::Texture.get_isReadable = (bool(*)(void*))UnityEngine::Texture.get_isReadableOffset;

UnityEngine::Texture.get_wrapModeOffset = getRealOffset(0x1059B44);
UnityEngine::Texture.get_wrapMode = (int (*)(void*))UnityEngine::Texture.get_wrapModeOffset;

UnityEngine::Texture.set_wrapModeOffset = getRealOffset(0x1059B94);
UnityEngine::Texture.set_wrapMode = (void(*)(void*, int))UnityEngine::Texture.set_wrapModeOffset;

UnityEngine::Texture.set_filterModeOffset = getRealOffset(0x1059BEC);
UnityEngine::Texture.set_filterMode = (void(*)(void*, int))UnityEngine::Texture.set_filterModeOffset;

UnityEngine::Texture.get_anisoLevelOffset = getRealOffset(0x1059C44);
UnityEngine::Texture.get_anisoLevel = (int(*)(void*))UnityEngine::Texture.get_anisoLevelOffset;

UnityEngine::Texture.set_anisoLevelOffset = getRealOffset(0x1059C94);
UnityEngine::Texture.set_anisoLevel = (void(*)(void*, int))UnityEngine::Texture.set_anisoLevelOffset;

UnityEngine::Texture.get_texelSizeOffset = getRealOffset(0x1059CEC);
UnityEngine::Texture.get_texelSize = (Vector2 (*)(void*))UnityEngine::Texture.get_texelSizeOffset;

UnityEngine::Texture.ValidateFormatOffset = getRealOffset(0x1059DB8);
UnityEngine::Texture.ValidateFormat = (bool(*)(void*, int))UnityEngine::Texture.ValidateFormatOffset;

UnityEngine::Texture.ValidateFormat1Offset = getRealOffset(0x104B1DC);
UnityEngine::Texture.ValidateFormat1 = (bool(*)(void*, int, int))UnityEngine::Texture.ValidateFormat1Offset;

UnityEngine::Texture.CreateNonReadableExceptionOffset = getRealOffset(0x1059F58);
UnityEngine::Texture.CreateNonReadableException = (void *(*)(void*, void *))UnityEngine::Texture.CreateNonReadableExceptionOffset;

UnityEngine::Texture2D.get_formatOffset = getRealOffset(0x105A0E4);
UnityEngine::Texture2D.get_format = (int (*)(void*))UnityEngine::Texture2D.get_formatOffset;

UnityEngine::Texture2D.get_whiteTextureOffset = getRealOffset(0x105A134);
UnityEngine::Texture2D.get_whiteTexture = (void *(*)())UnityEngine::Texture2D.get_whiteTextureOffset;

UnityEngine::Texture2D.get_blackTextureOffset = getRealOffset(0x105A17C);
UnityEngine::Texture2D.get_blackTexture = (void *(*)())UnityEngine::Texture2D.get_blackTextureOffset;

UnityEngine::Texture2D.get_isReadableOffset = getRealOffset(0x105A338);
UnityEngine::Texture2D.get_isReadable = (bool(*)(void*))UnityEngine::Texture2D.get_isReadableOffset;

UnityEngine::Texture2D.ApplyImplOffset = getRealOffset(0x105A388);
UnityEngine::Texture2D.ApplyImpl = (void(*)(void*, bool, bool))UnityEngine::Texture2D.ApplyImplOffset;

UnityEngine::Texture2D.ResizeImplOffset = getRealOffset(0x105A3E8);
UnityEngine::Texture2D.ResizeImpl = (bool(*)(void*, int, int))UnityEngine::Texture2D.ResizeImplOffset;

UnityEngine::Texture2D.SetPixelImplOffset = getRealOffset(0x105A448);
UnityEngine::Texture2D.SetPixelImpl = (void(*)(void*, int, int, int, Color))UnityEngine::Texture2D.SetPixelImplOffset;

UnityEngine::Texture2D.GetPixelImplOffset = getRealOffset(0x105A540);
UnityEngine::Texture2D.GetPixelImpl = (Color (*)(void*, int, int, int))UnityEngine::Texture2D.GetPixelImplOffset;

UnityEngine::Texture2D.GetPixelBilinearImplOffset = getRealOffset(0x105A634);
UnityEngine::Texture2D.GetPixelBilinearImpl = (Color (*)(void*, int, float, float))UnityEngine::Texture2D.GetPixelBilinearImplOffset;

UnityEngine::Texture2D.ResizeWithFormatImplOffset = getRealOffset(0x105A730);
UnityEngine::Texture2D.ResizeWithFormatImpl = (bool(*)(void*, int, int, int, bool))UnityEngine::Texture2D.ResizeWithFormatImplOffset;

UnityEngine::Texture2D.ReadPixelsImplOffset = getRealOffset(0x105A7A8);
UnityEngine::Texture2D.ReadPixelsImpl = (void(*)(void*, int, int, int, bool))UnityEngine::Texture2D.ReadPixelsImplOffset;

UnityEngine::Texture2D.GetPixelsOffset = getRealOffset(0x105A9C0);
UnityEngine::Texture2D.GetPixels1Offset = getRealOffset(0x105AA28);
UnityEngine::Texture2D.GetPixels32Offset = getRealOffset(0x105AAA8);
UnityEngine::Texture2D.GetPixels321Offset = getRealOffset(0x105AB00);
UnityEngine::Texture2D.ctor1Offset = getRealOffset(0x105ADAC);
UnityEngine::Texture2D.ctor1 = (void(*)(void*, int, int, int, bool, bool))UnityEngine::Texture2D.ctor1Offset;

UnityEngine::Texture2D.ctor2Offset = getRealOffset(0x105AE44);
UnityEngine::Texture2D.ctor2 = (void(*)(void*, int, int, int, bool))UnityEngine::Texture2D.ctor2Offset;

UnityEngine::Texture2D.ctor3Offset = getRealOffset(0x105AEDC);
UnityEngine::Texture2D.ctor3 = (void(*)(void*, int, int))UnityEngine::Texture2D.ctor3Offset;

UnityEngine::Texture2D.SetPixelOffset = getRealOffset(0x105AF88);
UnityEngine::Texture2D.SetPixel = (void(*)(void*, int, int, Color))UnityEngine::Texture2D.SetPixelOffset;

UnityEngine::Texture2D.GetPixelOffset = getRealOffset(0x105B26C);
UnityEngine::Texture2D.GetPixel = (Color (*)(void*, int, int))UnityEngine::Texture2D.GetPixelOffset;

UnityEngine::Texture2D.GetPixelBilinearOffset = getRealOffset(0x105B384);
UnityEngine::Texture2D.GetPixelBilinear = (Color (*)(void*, float, float))UnityEngine::Texture2D.GetPixelBilinearOffset;

UnityEngine::Texture2D.ApplyOffset = getRealOffset(0x105B610);
UnityEngine::Texture2D.Apply = (void(*)(void*, bool, bool))UnityEngine::Texture2D.ApplyOffset;

UnityEngine::Texture2D.Apply1Offset = getRealOffset(0x105B6E0);
UnityEngine::Texture2D.Apply1 = (void(*)(void*, bool))UnityEngine::Texture2D.Apply1Offset;

UnityEngine::Texture2D.Apply2Offset = getRealOffset(0x105B6E8);
UnityEngine::Texture2D.Apply2 = (void(*)(void*))UnityEngine::Texture2D.Apply2Offset;

UnityEngine::Texture2D.ResizeOffset = getRealOffset(0x105B6F4);
UnityEngine::Texture2D.Resize = (bool(*)(void*, int, int))UnityEngine::Texture2D.ResizeOffset;

UnityEngine::Texture2D.Resize1Offset = getRealOffset(0x105B7C4);
UnityEngine::Texture2D.Resize1 = (bool(*)(void*, int, int, int, bool))UnityEngine::Texture2D.Resize1Offset;

UnityEngine::Texture2D.ReadPixelsOffset = getRealOffset(0x105B8AC);
UnityEngine::Texture2D.ReadPixels = (void(*)(void*, int, int, int, bool))UnityEngine::Texture2D.ReadPixelsOffset;

UnityEngine::Texture2D.ReadPixels1Offset = getRealOffset(0x105B970);
UnityEngine::Texture2D.ReadPixels1 = (void(*)(void*, int, int, int))UnityEngine::Texture2D.ReadPixels1Offset;

UnityEngine::Texture2D.GetPixels11Offset = getRealOffset(0x105BA60);
UnityEngine::Texture2D.GetPixels2Offset = getRealOffset(0x105BB18);
UnityEngine::Texture2D.EncodeToJPGOffset = getRealOffset(0x105BB20);
UnityEngine::Cubemap.get_formatOffset = getRealOffset(0x1138980);
UnityEngine::Cubemap.get_format = (int (*)(void*))UnityEngine::Cubemap.get_formatOffset;

UnityEngine::Cubemap.ApplyImplOffset = getRealOffset(0x1138B40);
UnityEngine::Cubemap.ApplyImpl = (void(*)(void*, bool, bool))UnityEngine::Cubemap.ApplyImplOffset;

UnityEngine::Cubemap.get_isReadableOffset = getRealOffset(0x1138BA0);
UnityEngine::Cubemap.get_isReadable = (bool(*)(void*))UnityEngine::Cubemap.get_isReadableOffset;

UnityEngine::Cubemap.GetPixelsOffset = getRealOffset(0x1138BF0);
UnityEngine::Cubemap.GetPixels1Offset = getRealOffset(0x1138C50);
UnityEngine::Cubemap.ctor1Offset = getRealOffset(0x1138DB8);
UnityEngine::Cubemap.ctor1 = (void(*)(void*, int, int, int))UnityEngine::Cubemap.ctor1Offset;

UnityEngine::Cubemap.ctor2Offset = getRealOffset(0x1138EAC);
UnityEngine::Cubemap.ctor2 = (void(*)(void*, int, int, int))UnityEngine::Cubemap.ctor2Offset;

UnityEngine::Cubemap.ctor3Offset = getRealOffset(0x1139050);
UnityEngine::Cubemap.ctor3 = (void(*)(void*, int, int, int, int))UnityEngine::Cubemap.ctor3Offset;

UnityEngine::Cubemap.ctor6Offset = getRealOffset(0x11391E8);
UnityEngine::Cubemap.ctor6 = (void(*)(void*, int, int, bool))UnityEngine::Cubemap.ctor6Offset;

UnityEngine::Cubemap.ApplyOffset = getRealOffset(0x1139274);
UnityEngine::Cubemap.Apply = (void(*)(void*, bool, bool))UnityEngine::Cubemap.ApplyOffset;

UnityEngine::Cubemap.Apply1Offset = getRealOffset(0x113934C);
UnityEngine::Cubemap.Apply1 = (void(*)(void*, bool))UnityEngine::Cubemap.Apply1Offset;

UnityEngine::Texture3D.get_isReadableOffset = getRealOffset(0x105C13C);
UnityEngine::Texture3D.get_isReadable = (bool(*)(void*))UnityEngine::Texture3D.get_isReadableOffset;

UnityEngine::Texture3D.Internal_CreateImplOffset = getRealOffset(0x105C18C);
UnityEngine::Texture3D.Internal_CreateImpl = (bool(*)(void *, int, int, int, int, int, int))UnityEngine::Texture3D.Internal_CreateImplOffset;

UnityEngine::Texture3D.Internal_CreateOffset = getRealOffset(0x105C1F4);
UnityEngine::Texture3D.Internal_Create = (void(*)(void *, int, int, int, int, int, int))UnityEngine::Texture3D.Internal_CreateOffset;

UnityEngine::Texture3D.ApplyImplOffset = getRealOffset(0x105C300);
UnityEngine::Texture3D.ApplyImpl = (void(*)(void*, bool, bool))UnityEngine::Texture3D.ApplyImplOffset;

UnityEngine::Texture3D.ctor1Offset = getRealOffset(0x105C4A0);
UnityEngine::Texture3D.ctor1 = (void(*)(void*, int, int, int, int, int))UnityEngine::Texture3D.ctor1Offset;

UnityEngine::Texture3D.ctor2Offset = getRealOffset(0x105C558);
UnityEngine::Texture3D.ctor2 = (void(*)(void*, int, int, int, int, int, int))UnityEngine::Texture3D.ctor2Offset;

UnityEngine::Texture3D.ctor3Offset = getRealOffset(0x105C624);
UnityEngine::Texture3D.ctor3 = (void(*)(void*, int, int, int, int, int))UnityEngine::Texture3D.ctor3Offset;

UnityEngine::Texture3D.ctor4Offset = getRealOffset(0x105C718);
UnityEngine::Texture3D.ctor4 = (void(*)(void*, int, int, int, int, bool))UnityEngine::Texture3D.ctor4Offset;

UnityEngine::Texture3D.ApplyOffset = getRealOffset(0x105C778);
UnityEngine::Texture3D.Apply = (void(*)(void*, bool, bool))UnityEngine::Texture3D.ApplyOffset;

UnityEngine::Texture3D.Apply1Offset = getRealOffset(0x105C848);
UnityEngine::Texture3D.Apply1 = (void(*)(void*))UnityEngine::Texture3D.Apply1Offset;

UnityEngine::Texture2DArray.get_isReadableOffset = getRealOffset(0x105BBAC);
UnityEngine::Texture2DArray.get_isReadable = (bool(*)(void*))UnityEngine::Texture2DArray.get_isReadableOffset;

UnityEngine::Texture2DArray.Internal_CreateImplOffset = getRealOffset(0x105BBFC);
UnityEngine::Texture2DArray.Internal_CreateImpl = (bool(*)(void *, int, int, int, int, int, int))UnityEngine::Texture2DArray.Internal_CreateImplOffset;

UnityEngine::Texture2DArray.Internal_CreateOffset = getRealOffset(0x105BC64);
UnityEngine::Texture2DArray.Internal_Create = (void(*)(void *, int, int, int, int, int, int))UnityEngine::Texture2DArray.Internal_CreateOffset;

UnityEngine::Texture2DArray.ctor1Offset = getRealOffset(0x105BDF4);
UnityEngine::Texture2DArray.ctor1 = (void(*)(void*, int, int, int, int, int))UnityEngine::Texture2DArray.ctor1Offset;

UnityEngine::Texture2DArray.ctor2Offset = getRealOffset(0x105BEAC);
UnityEngine::Texture2DArray.ctor2 = (void(*)(void*, int, int, int, int, int, int))UnityEngine::Texture2DArray.ctor2Offset;

UnityEngine::Texture2DArray.ctor3Offset = getRealOffset(0x105BF78);
UnityEngine::Texture2DArray.ctor3 = (void(*)(void*, int, int, int, int, int, bool))UnityEngine::Texture2DArray.ctor3Offset;

UnityEngine::Texture2DArray.ctor4Offset = getRealOffset(0x105C070);
UnityEngine::Texture2DArray.ctor4 = (void(*)(void*, int, int, int, int, bool, bool))UnityEngine::Texture2DArray.ctor4Offset;

UnityEngine::Texture2DArray.ctor5Offset = getRealOffset(0x105C0D4);
UnityEngine::Texture2DArray.ctor5 = (void(*)(void*, int, int, int, int, bool))UnityEngine::Texture2DArray.ctor5Offset;

UnityEngine::CubemapArray.get_isReadableOffset = getRealOffset(0x1139354);
UnityEngine::CubemapArray.get_isReadable = (bool(*)(void*))UnityEngine::CubemapArray.get_isReadableOffset;

UnityEngine::CubemapArray.Internal_CreateImplOffset = getRealOffset(0x11393A4);
UnityEngine::CubemapArray.Internal_CreateImpl = (bool(*)(void *, int, int, int, int, int))UnityEngine::CubemapArray.Internal_CreateImplOffset;

UnityEngine::CubemapArray.Internal_CreateOffset = getRealOffset(0x113940C);
UnityEngine::CubemapArray.Internal_Create = (void(*)(void *, int, int, int, int, int))UnityEngine::CubemapArray.Internal_CreateOffset;

UnityEngine::CubemapArray.ctor1Offset = getRealOffset(0x113955C);
UnityEngine::CubemapArray.ctor1 = (void(*)(void*, int, int, int, int))UnityEngine::CubemapArray.ctor1Offset;

UnityEngine::CubemapArray.ctor2Offset = getRealOffset(0x113960C);
UnityEngine::CubemapArray.ctor2 = (void(*)(void*, int, int, int, int, int))UnityEngine::CubemapArray.ctor2Offset;

UnityEngine::CubemapArray.ctor3Offset = getRealOffset(0x11396D8);
UnityEngine::CubemapArray.ctor3 = (void(*)(void*, int, int, int, int, bool))UnityEngine::CubemapArray.ctor3Offset;

UnityEngine::CubemapArray.ctor4Offset = getRealOffset(0x1139810);
UnityEngine::CubemapArray.ctor4 = (void(*)(void*, int, int, int, bool, bool))UnityEngine::CubemapArray.ctor4Offset;

UnityEngine::CubemapArray.ctor5Offset = getRealOffset(0x113986C);
UnityEngine::CubemapArray.ctor5 = (void(*)(void*, int, int, int, bool))UnityEngine::CubemapArray.ctor5Offset;

UnityEngine::RenderTexture.get_widthOffset = getRealOffset(0x104981C);
UnityEngine::RenderTexture.get_width = (int(*)(void*))UnityEngine::RenderTexture.get_widthOffset;

UnityEngine::RenderTexture.set_widthOffset = getRealOffset(0x104986C);
UnityEngine::RenderTexture.set_width = (void(*)(void*, int))UnityEngine::RenderTexture.set_widthOffset;

UnityEngine::RenderTexture.get_heightOffset = getRealOffset(0x10498C4);
UnityEngine::RenderTexture.get_height = (int(*)(void*))UnityEngine::RenderTexture.get_heightOffset;

UnityEngine::RenderTexture.set_heightOffset = getRealOffset(0x1049914);
UnityEngine::RenderTexture.set_height = (void(*)(void*, int))UnityEngine::RenderTexture.set_heightOffset;

UnityEngine::RenderTexture.get_dimensionOffset = getRealOffset(0x104996C);
UnityEngine::RenderTexture.get_dimension = (int (*)(void*))UnityEngine::RenderTexture.get_dimensionOffset;

UnityEngine::RenderTexture.set_dimensionOffset = getRealOffset(0x10499BC);
UnityEngine::RenderTexture.set_dimension = (void(*)(void*, int))UnityEngine::RenderTexture.set_dimensionOffset;

UnityEngine::RenderTexture.get_graphicsFormatOffset = getRealOffset(0x1049A14);
UnityEngine::RenderTexture.get_graphicsFormat = (int (*)(void*))UnityEngine::RenderTexture.get_graphicsFormatOffset;

UnityEngine::RenderTexture.set_graphicsFormatOffset = getRealOffset(0x1049A64);
UnityEngine::RenderTexture.set_graphicsFormat = (void(*)(void*, int))UnityEngine::RenderTexture.set_graphicsFormatOffset;

UnityEngine::RenderTexture.set_useMipMapOffset = getRealOffset(0x1049ABC);
UnityEngine::RenderTexture.set_useMipMap = (void(*)(void*, bool))UnityEngine::RenderTexture.set_useMipMapOffset;

UnityEngine::RenderTexture.get_formatOffset = getRealOffset(0x1049B14);
UnityEngine::RenderTexture.get_format = (int (*)(void*))UnityEngine::RenderTexture.get_formatOffset;

UnityEngine::RenderTexture.set_autoGenerateMipsOffset = getRealOffset(0x1049B6C);
UnityEngine::RenderTexture.set_autoGenerateMips = (void(*)(void*, bool))UnityEngine::RenderTexture.set_autoGenerateMipsOffset;

UnityEngine::RenderTexture.set_antiAliasingOffset = getRealOffset(0x1049BC4);
UnityEngine::RenderTexture.set_antiAliasing = (void(*)(void*, int))UnityEngine::RenderTexture.set_antiAliasingOffset;

UnityEngine::RenderTexture.GetActiveOffset = getRealOffset(0x1049C1C);
UnityEngine::RenderTexture.GetActive = (void *(*)())UnityEngine::RenderTexture.GetActiveOffset;

UnityEngine::RenderTexture.SetActiveOffset = getRealOffset(0x1049C64);
UnityEngine::RenderTexture.SetActive = (void(*)(void *))UnityEngine::RenderTexture.SetActiveOffset;

UnityEngine::RenderTexture.get_activeOffset = getRealOffset(0x1049CB4);
UnityEngine::RenderTexture.get_active = (void *(*)())UnityEngine::RenderTexture.get_activeOffset;

UnityEngine::RenderTexture.set_activeOffset = getRealOffset(0x1049CFC);
UnityEngine::RenderTexture.set_active = (void(*)(void *))UnityEngine::RenderTexture.set_activeOffset;

UnityEngine::RenderTexture.GetColorBufferOffset = getRealOffset(0x1049D4C);
UnityEngine::RenderTexture.GetColorBuffer = (int (*)(void*))UnityEngine::RenderTexture.GetColorBufferOffset;

UnityEngine::RenderTexture.GetDepthBufferOffset = getRealOffset(0x1049E18);
UnityEngine::RenderTexture.GetDepthBuffer = (int (*)(void*))UnityEngine::RenderTexture.GetDepthBufferOffset;

UnityEngine::RenderTexture.get_colorBufferOffset = getRealOffset(0x1049EE4);
UnityEngine::RenderTexture.get_colorBuffer = (int (*)(void*))UnityEngine::RenderTexture.get_colorBufferOffset;

UnityEngine::RenderTexture.get_depthBufferOffset = getRealOffset(0x1049F58);
UnityEngine::RenderTexture.get_depthBuffer = (int (*)(void*))UnityEngine::RenderTexture.get_depthBufferOffset;

UnityEngine::RenderTexture.DiscardContentsOffset = getRealOffset(0x1049FCC);
UnityEngine::RenderTexture.DiscardContents = (void(*)(void*, bool, bool))UnityEngine::RenderTexture.DiscardContentsOffset;

UnityEngine::RenderTexture.MarkRestoreExpectedOffset = getRealOffset(0x104A02C);
UnityEngine::RenderTexture.MarkRestoreExpected = (void(*)(void*))UnityEngine::RenderTexture.MarkRestoreExpectedOffset;

UnityEngine::RenderTexture.DiscardContents1Offset = getRealOffset(0x104A07C);
UnityEngine::RenderTexture.DiscardContents1 = (void(*)(void*))UnityEngine::RenderTexture.DiscardContents1Offset;

UnityEngine::RenderTexture.CreateOffset = getRealOffset(0x104A0D4);
UnityEngine::RenderTexture.Create = (bool(*)(void*))UnityEngine::RenderTexture.CreateOffset;

UnityEngine::RenderTexture.ReleaseOffset = getRealOffset(0x104A124);
UnityEngine::RenderTexture.Release = (void(*)(void*))UnityEngine::RenderTexture.ReleaseOffset;

UnityEngine::RenderTexture.IsCreatedOffset = getRealOffset(0x104A174);
UnityEngine::RenderTexture.IsCreated = (bool(*)(void*))UnityEngine::RenderTexture.IsCreatedOffset;

UnityEngine::RenderTexture.SetSRGBReadWriteOffset = getRealOffset(0x104A1C4);
UnityEngine::RenderTexture.SetSRGBReadWrite = (void(*)(void*, bool))UnityEngine::RenderTexture.SetSRGBReadWriteOffset;

UnityEngine::RenderTexture.Internal_CreateOffset = getRealOffset(0x104A21C);
UnityEngine::RenderTexture.Internal_Create = (void(*)(void *))UnityEngine::RenderTexture.Internal_CreateOffset;

UnityEngine::RenderTexture.SetRenderTextureDescriptorOffset = getRealOffset(0x104A26C);
UnityEngine::RenderTexture.SetRenderTextureDescriptor = (void(*)(void*, int))UnityEngine::RenderTexture.SetRenderTextureDescriptorOffset;

UnityEngine::RenderTexture.GetDescriptorOffset = getRealOffset(0x104A370);
UnityEngine::RenderTexture.GetDescriptor = (int (*)(void*))UnityEngine::RenderTexture.GetDescriptorOffset;

UnityEngine::RenderTexture.GetTemporary_InternalOffset = getRealOffset(0x104A46C);
UnityEngine::RenderTexture.GetTemporary_Internal = (void *(*)(int))UnityEngine::RenderTexture.GetTemporary_InternalOffset;

UnityEngine::RenderTexture.ReleaseTemporaryOffset = getRealOffset(0x104A550);
UnityEngine::RenderTexture.ReleaseTemporary = (void(*)(void *))UnityEngine::RenderTexture.ReleaseTemporaryOffset;

UnityEngine::RenderTexture.get_depthOffset = getRealOffset(0x104A5A0);
UnityEngine::RenderTexture.get_depth = (int(*)(void*))UnityEngine::RenderTexture.get_depthOffset;

UnityEngine::RenderTexture.set_depthOffset = getRealOffset(0x104A5F0);
UnityEngine::RenderTexture.set_depth = (void(*)(void*, int))UnityEngine::RenderTexture.set_depthOffset;

UnityEngine::RenderTexture.ctor1Offset = getRealOffset(0x104A73C);
UnityEngine::RenderTexture.ctor1 = (void(*)(void*, int))UnityEngine::RenderTexture.ctor1Offset;

UnityEngine::RenderTexture.ctor2Offset = getRealOffset(0x104ABF8);
UnityEngine::RenderTexture.ctor2 = (void(*)(void*, void *))UnityEngine::RenderTexture.ctor2Offset;

UnityEngine::RenderTexture.ctor3Offset = getRealOffset(0x104AEFC);
UnityEngine::RenderTexture.ctor3 = (void(*)(void*, int, int, int, int))UnityEngine::RenderTexture.ctor3Offset;

UnityEngine::RenderTexture.ctor4Offset = getRealOffset(0x104AFCC);
UnityEngine::RenderTexture.ctor4 = (void(*)(void*, int, int, int, int))UnityEngine::RenderTexture.ctor4Offset;

UnityEngine::RenderTexture.ctor5Offset = getRealOffset(0x104B3A8);
UnityEngine::RenderTexture.ctor5 = (void(*)(void*, int, int, int, int, int))UnityEngine::RenderTexture.ctor5Offset;

UnityEngine::RenderTexture.ctor6Offset = getRealOffset(0x104B80C);
UnityEngine::RenderTexture.ctor6 = (void(*)(void*, int, int, int, int, int))UnityEngine::RenderTexture.ctor6Offset;

UnityEngine::RenderTexture.ctor7Offset = getRealOffset(0x104BA24);
UnityEngine::RenderTexture.ctor7 = (void(*)(void*, int, int, int, int))UnityEngine::RenderTexture.ctor7Offset;

UnityEngine::RenderTexture.ctor8Offset = getRealOffset(0x104BA6C);
UnityEngine::RenderTexture.ctor8 = (void(*)(void*, int, int, int))UnityEngine::RenderTexture.ctor8Offset;

UnityEngine::RenderTexture.ctor9Offset = getRealOffset(0x104BAB4);
UnityEngine::RenderTexture.ctor9 = (void(*)(void*, int, int, int, int, int))UnityEngine::RenderTexture.ctor9Offset;

UnityEngine::RenderTexture.get_descriptorOffset = getRealOffset(0x104AE1C);
UnityEngine::RenderTexture.get_descriptor = (int (*)(void*))UnityEngine::RenderTexture.get_descriptorOffset;

UnityEngine::RenderTexture.set_descriptorOffset = getRealOffset(0x104B734);
UnityEngine::RenderTexture.set_descriptor = (void(*)(void*, int))UnityEngine::RenderTexture.set_descriptorOffset;

UnityEngine::RenderTexture.ValidateRenderTextureDescOffset = getRealOffset(0x104A8C0);
UnityEngine::RenderTexture.ValidateRenderTextureDesc = (void(*)(int))UnityEngine::RenderTexture.ValidateRenderTextureDescOffset;

UnityEngine::RenderTexture.GetCompatibleFormatOffset = getRealOffset(0x104B854);
UnityEngine::RenderTexture.GetCompatibleFormat = (int (*)(int, int))UnityEngine::RenderTexture.GetCompatibleFormatOffset;

UnityEngine::RenderTexture.GetTemporaryOffset = getRealOffset(0x104BC64);
UnityEngine::RenderTexture.GetTemporary = (void *(*)(int))UnityEngine::RenderTexture.GetTemporaryOffset;

UnityEngine::RenderTexture.GetTemporaryImplOffset = getRealOffset(0x104BD50);
UnityEngine::RenderTexture.GetTemporaryImpl = (void *(*)(int, int, int, int, int, int, int, bool))UnityEngine::RenderTexture.GetTemporaryImplOffset;

UnityEngine::RenderTexture.GetTemporary1Offset = getRealOffset(0x104BF2C);
UnityEngine::RenderTexture.GetTemporary1 = (void *(*)(int, int, int, int, int))UnityEngine::RenderTexture.GetTemporary1Offset;

UnityEngine::RenderTexture.GetTemporary2Offset = getRealOffset(0x104BF84);
UnityEngine::RenderTexture.GetTemporary2 = (void *(*)(int, int, int, int))UnityEngine::RenderTexture.GetTemporary2Offset;

UnityEngine::RenderTexture.GetTemporary3Offset = getRealOffset(0x104BFD8);
UnityEngine::RenderTexture.GetTemporary3 = (void *(*)(int, int, int))UnityEngine::RenderTexture.GetTemporary3Offset;

UnityEngine::RenderTexture.GetTemporary4Offset = getRealOffset(0x104C02C);
UnityEngine::RenderTexture.GetTemporary4 = (void *(*)(int, int))UnityEngine::RenderTexture.GetTemporary4Offset;

UnityEngine::RenderTexture.set_isCubemapOffset = getRealOffset(0x104C07C);
UnityEngine::RenderTexture.set_isCubemap = (void(*)(void*, bool))UnityEngine::RenderTexture.set_isCubemapOffset;

UnityEngine::RenderTextureDescriptor.get_widthOffset = getRealOffset(0x3EEEB4);
UnityEngine::RenderTextureDescriptor.get_width = (int(*)(void*))UnityEngine::RenderTextureDescriptor.get_widthOffset;

UnityEngine::RenderTextureDescriptor.set_widthOffset = getRealOffset(0x3EEEBC);
UnityEngine::RenderTextureDescriptor.set_width = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_widthOffset;

UnityEngine::RenderTextureDescriptor.get_heightOffset = getRealOffset(0x3EEEC4);
UnityEngine::RenderTextureDescriptor.get_height = (int(*)(void*))UnityEngine::RenderTextureDescriptor.get_heightOffset;

UnityEngine::RenderTextureDescriptor.set_heightOffset = getRealOffset(0x3EEECC);
UnityEngine::RenderTextureDescriptor.set_height = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_heightOffset;

UnityEngine::RenderTextureDescriptor.get_msaaSamplesOffset = getRealOffset(0x3EEED4);
UnityEngine::RenderTextureDescriptor.get_msaaSamples = (int(*)(void*))UnityEngine::RenderTextureDescriptor.get_msaaSamplesOffset;

UnityEngine::RenderTextureDescriptor.set_msaaSamplesOffset = getRealOffset(0x3EEEDC);
UnityEngine::RenderTextureDescriptor.set_msaaSamples = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_msaaSamplesOffset;

UnityEngine::RenderTextureDescriptor.get_volumeDepthOffset = getRealOffset(0x3EEEE4);
UnityEngine::RenderTextureDescriptor.get_volumeDepth = (int(*)(void*))UnityEngine::RenderTextureDescriptor.get_volumeDepthOffset;

UnityEngine::RenderTextureDescriptor.set_volumeDepthOffset = getRealOffset(0x3EEEEC);
UnityEngine::RenderTextureDescriptor.set_volumeDepth = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_volumeDepthOffset;

UnityEngine::RenderTextureDescriptor.set_mipCountOffset = getRealOffset(0x3EEEF4);
UnityEngine::RenderTextureDescriptor.set_mipCount = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_mipCountOffset;

UnityEngine::RenderTextureDescriptor.get_graphicsFormatOffset = getRealOffset(0x3EEEFC);
UnityEngine::RenderTextureDescriptor.get_graphicsFormat = (int (*)(void*))UnityEngine::RenderTextureDescriptor.get_graphicsFormatOffset;

UnityEngine::RenderTextureDescriptor.set_graphicsFormatOffset = getRealOffset(0x3EEF04);
UnityEngine::RenderTextureDescriptor.set_graphicsFormat = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_graphicsFormatOffset;

UnityEngine::RenderTextureDescriptor.get_depthBufferBitsOffset = getRealOffset(0x3EEF38);
UnityEngine::RenderTextureDescriptor.get_depthBufferBits = (int(*)(void*))UnityEngine::RenderTextureDescriptor.get_depthBufferBitsOffset;

UnityEngine::RenderTextureDescriptor.set_depthBufferBitsOffset = getRealOffset(0x3EEF40);
UnityEngine::RenderTextureDescriptor.set_depthBufferBits = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_depthBufferBitsOffset;

UnityEngine::RenderTextureDescriptor.set_dimensionOffset = getRealOffset(0x3EEF64);
UnityEngine::RenderTextureDescriptor.set_dimension = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_dimensionOffset;

UnityEngine::RenderTextureDescriptor.set_shadowSamplingModeOffset = getRealOffset(0x3EEF6C);
UnityEngine::RenderTextureDescriptor.set_shadowSamplingMode = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_shadowSamplingModeOffset;

UnityEngine::RenderTextureDescriptor.get_vrUsageOffset = getRealOffset(0x3EEF74);
UnityEngine::RenderTextureDescriptor.get_vrUsage = (int (*)(void*))UnityEngine::RenderTextureDescriptor.get_vrUsageOffset;

UnityEngine::RenderTextureDescriptor.set_vrUsageOffset = getRealOffset(0x3EEF7C);
UnityEngine::RenderTextureDescriptor.set_vrUsage = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_vrUsageOffset;

UnityEngine::RenderTextureDescriptor.set_memorylessOffset = getRealOffset(0x3EEF84);
UnityEngine::RenderTextureDescriptor.set_memoryless = (void(*)(void*, int))UnityEngine::RenderTextureDescriptor.set_memorylessOffset;

UnityEngine::RenderTextureDescriptor.ctor1Offset = getRealOffset(0x3EEFB0);
UnityEngine::RenderTextureDescriptor.ctor1 = (void(*)(void*, int, int, int, int, int))UnityEngine::RenderTextureDescriptor.ctor1Offset;

UnityEngine::RenderTextureDescriptor.SetOrClearRenderTextureCreationFlagOffset = getRealOffset(0x3EEFD8);
UnityEngine::RenderTextureDescriptor.SetOrClearRenderTextureCreationFlag = (void(*)(void*, bool, int))UnityEngine::RenderTextureDescriptor.SetOrClearRenderTextureCreationFlagOffset;

UnityEngine::RenderTextureDescriptor.set_createdFromScriptOffset = getRealOffset(0x3EEFF0);
UnityEngine::RenderTextureDescriptor.set_createdFromScript = (void(*)(void*, bool))UnityEngine::RenderTextureDescriptor.set_createdFromScriptOffset;

UnityEngine::RenderTextureDescriptor.set_useDynamicScaleOffset = getRealOffset(0x3EF008);
UnityEngine::RenderTextureDescriptor.set_useDynamicScale = (void(*)(void*, bool))UnityEngine::RenderTextureDescriptor.set_useDynamicScaleOffset;

UnityEngine::Handheld.PlayFullScreenMovieOffset = getRealOffset(0x1146284);
UnityEngine::Handheld.PlayFullScreenMovie = (bool(*)(monoString*, Color, int, int))UnityEngine::Handheld.PlayFullScreenMovieOffset;

UnityEngine::Handheld.PlayFullScreenMovie_BindingsOffset = getRealOffset(0x11462B0);
UnityEngine::Handheld.PlayFullScreenMovie_Bindings = (bool(*)(monoString*, Color, int, int))UnityEngine::Handheld.PlayFullScreenMovie_BindingsOffset;

UnityEngine::Hash128.CompareToOffset = getRealOffset(0x3F2720);
UnityEngine::Hash128.CompareTo = (int(*)(void*, int))UnityEngine::Hash128.CompareToOffset;

UnityEngine::Hash128.ToStringOffset = getRealOffset(0x3F2744);
UnityEngine::Hash128.ToString = (monoString *(*)(void*))UnityEngine::Hash128.ToStringOffset;

UnityEngine::Hash128.Internal_Hash128ToStringOffset = getRealOffset(0x11464E0);
UnityEngine::Hash128.Internal_Hash128ToString = (monoString *(*)(int))UnityEngine::Hash128.Internal_Hash128ToStringOffset;

UnityEngine::Hash128.Equals1Offset = getRealOffset(0x3F2774);
UnityEngine::Hash128.Equals1 = (bool(*)(void*, int))UnityEngine::Hash128.Equals1Offset;

UnityEngine::Hash128.GetHashCodeOffset = getRealOffset(0x3F27C0);
UnityEngine::Hash128.GetHashCode = (int(*)(void*))UnityEngine::Hash128.GetHashCodeOffset;

UnityEngine::Hash128.op_EqualityOffset = getRealOffset(0x114663C);
UnityEngine::Hash128.op_Equality = (bool(*)(int, int))UnityEngine::Hash128.op_EqualityOffset;

UnityEngine::Hash128.op_LessThanOffset = getRealOffset(0x1146400);
UnityEngine::Hash128.op_LessThan = (bool(*)(int, int))UnityEngine::Hash128.op_LessThanOffset;

UnityEngine::Hash128.op_GreaterThanOffset = getRealOffset(0x114643C);
UnityEngine::Hash128.op_GreaterThan = (bool(*)(int, int))UnityEngine::Hash128.op_GreaterThanOffset;

UnityEngine::Cursor.SetCursorOffset = getRealOffset(0x113A1A0);
UnityEngine::Cursor.SetCursor = (void(*)(void *, Vector2, int))UnityEngine::Cursor.SetCursorOffset;

UnityEngine::Cursor.set_visibleOffset = getRealOffset(0x113A268);
UnityEngine::Cursor.set_visible = (void(*)(bool))UnityEngine::Cursor.set_visibleOffset;

UnityEngine::Cursor.get_lockStateOffset = getRealOffset(0x113A2B8);
UnityEngine::Cursor.get_lockState = (int (*)())UnityEngine::Cursor.get_lockStateOffset;

UnityEngine::Cursor.set_lockStateOffset = getRealOffset(0x113A300);
UnityEngine::Cursor.set_lockState = (void(*)(int))UnityEngine::Cursor.set_lockStateOffset;

UnityEngine::Logger.get_logHandlerOffset = getRealOffset(0x1162C70);
UnityEngine::Logger.get_logHandler = (void *(*)(void*))UnityEngine::Logger.get_logHandlerOffset;

UnityEngine::Logger.set_logHandlerOffset = getRealOffset(0x1162C78);
UnityEngine::Logger.set_logHandler = (void(*)(void*, void *))UnityEngine::Logger.set_logHandlerOffset;

UnityEngine::Logger.get_logEnabledOffset = getRealOffset(0x1162C80);
UnityEngine::Logger.get_logEnabled = (bool(*)(void*))UnityEngine::Logger.get_logEnabledOffset;

UnityEngine::Logger.set_logEnabledOffset = getRealOffset(0x1162C88);
UnityEngine::Logger.set_logEnabled = (void(*)(void*, bool))UnityEngine::Logger.set_logEnabledOffset;

UnityEngine::Logger.get_filterLogTypeOffset = getRealOffset(0x1162C90);
UnityEngine::Logger.get_filterLogType = (int (*)(void*))UnityEngine::Logger.get_filterLogTypeOffset;

UnityEngine::Logger.set_filterLogTypeOffset = getRealOffset(0x1162C98);
UnityEngine::Logger.set_filterLogType = (void(*)(void*, int))UnityEngine::Logger.set_filterLogTypeOffset;

UnityEngine::Logger.IsLogTypeAllowedOffset = getRealOffset(0x1162CA0);
UnityEngine::Logger.IsLogTypeAllowed = (bool(*)(void*, int))UnityEngine::Logger.IsLogTypeAllowedOffset;

UnityEngine::Logger.LogExceptionOffset = getRealOffset(0x1163B04);
UnityEngine::Logger.LogException = (void(*)(void*, void *, void *))UnityEngine::Logger.LogExceptionOffset;

UnityEngine::UnityLogWriter.WriteStringToUnityLogOffset = getRealOffset(0x1061128);
UnityEngine::UnityLogWriter.WriteStringToUnityLog = (void(*)(monoString*))UnityEngine::UnityLogWriter.WriteStringToUnityLogOffset;

UnityEngine::UnityLogWriter.WriteStringToUnityLogImplOffset = getRealOffset(0x1061180);
UnityEngine::UnityLogWriter.WriteStringToUnityLogImpl = (void(*)(monoString*))UnityEngine::UnityLogWriter.WriteStringToUnityLogImplOffset;

UnityEngine::UnityLogWriter.InitOffset = getRealOffset(0x10611D0);
UnityEngine::UnityLogWriter.Init = (void(*)())UnityEngine::UnityLogWriter.InitOffset;

UnityEngine::UnityLogWriter.get_EncodingOffset = getRealOffset(0x10612E0);
UnityEngine::UnityLogWriter.get_Encoding = (void *(*)(void*))UnityEngine::UnityLogWriter.get_EncodingOffset;

UnityEngine::UnityLogWriter.Write1Offset = getRealOffset(0x1061358);
UnityEngine::UnityLogWriter.Write1 = (void(*)(void*, monoString*))UnityEngine::UnityLogWriter.Write1Offset;

UnityEngine::UColor.ctor1Offset = getRealOffset(0x3F1F1C);
UnityEngine::UColor.ctor1 = (void(*)(void*, float, float, float))UnityEngine::UColor.ctor1Offset;

UnityEngine::UColor.ToStringOffset = getRealOffset(0x3F1F2C);
UnityEngine::UColor.ToString = (monoString *(*)(void*))UnityEngine::UColor.ToStringOffset;

UnityEngine::UColor.GetHashCodeOffset = getRealOffset(0x3F1F34);
UnityEngine::UColor.GetHashCode = (int(*)(void*))UnityEngine::UColor.GetHashCodeOffset;

UnityEngine::UColor.Equals1Offset = getRealOffset(0x3F1F44);
UnityEngine::UColor.Equals1 = (bool(*)(void*, Color))UnityEngine::UColor.Equals1Offset;

UnityEngine::UColor.op_AdditionOffset = getRealOffset(0x1136724);
UnityEngine::UColor.op_Addition = (Color (*)(Color, Color))UnityEngine::UColor.op_AdditionOffset;

UnityEngine::UColor.op_SubtractionOffset = getRealOffset(0x1136768);
UnityEngine::UColor.op_Subtraction = (Color (*)(Color, Color))UnityEngine::UColor.op_SubtractionOffset;

UnityEngine::UColor.op_MultiplyOffset = getRealOffset(0x11367AC);
UnityEngine::UColor.op_Multiply = (Color (*)(Color, Color))UnityEngine::UColor.op_MultiplyOffset;

UnityEngine::UColor.op_Multiply1Offset = getRealOffset(0x11367F0);
UnityEngine::UColor.op_Multiply1 = (Color (*)(Color, float))UnityEngine::UColor.op_Multiply1Offset;

UnityEngine::UColor.op_Multiply2Offset = getRealOffset(0x1136828);
UnityEngine::UColor.op_Multiply2 = (Color (*)(float, Color))UnityEngine::UColor.op_Multiply2Offset;

UnityEngine::UColor.op_EqualityOffset = getRealOffset(0x1136860);
UnityEngine::UColor.op_Equality = (bool(*)(Color, Color))UnityEngine::UColor.op_EqualityOffset;

UnityEngine::UColor.op_InequalityOffset = getRealOffset(0x1136998);
UnityEngine::UColor.op_Inequality = (bool(*)(Color, Color))UnityEngine::UColor.op_InequalityOffset;

UnityEngine::UColor.LerpOffset = getRealOffset(0x11369D4);
UnityEngine::UColor.Lerp = (Color (*)(Color, Color, float))UnityEngine::UColor.LerpOffset;

UnityEngine::UColor.RGBMultipliedOffset = getRealOffset(0x3F1F68);
UnityEngine::UColor.RGBMultiplied = (Color (*)(void*, float))UnityEngine::UColor.RGBMultipliedOffset;

UnityEngine::UColor.get_redOffset = getRealOffset(0x1136B08);
UnityEngine::UColor.get_red = (Color (*)())UnityEngine::UColor.get_redOffset;

UnityEngine::UColor.get_greenOffset = getRealOffset(0x1136B28);
UnityEngine::UColor.get_green = (Color (*)())UnityEngine::UColor.get_greenOffset;

UnityEngine::UColor.get_blueOffset = getRealOffset(0x1136B48);
UnityEngine::UColor.get_blue = (Color (*)())UnityEngine::UColor.get_blueOffset;

UnityEngine::UColor.get_whiteOffset = getRealOffset(0x1136B68);
UnityEngine::UColor.get_white = (Color (*)())UnityEngine::UColor.get_whiteOffset;

UnityEngine::UColor.get_blackOffset = getRealOffset(0x1136B78);
UnityEngine::UColor.get_black = (Color (*)())UnityEngine::UColor.get_blackOffset;

UnityEngine::UColor.get_yellowOffset = getRealOffset(0x1136B98);
UnityEngine::UColor.get_yellow = (Color (*)())UnityEngine::UColor.get_yellowOffset;

UnityEngine::UColor.get_cyanOffset = getRealOffset(0x1136BB8);
UnityEngine::UColor.get_cyan = (Color (*)())UnityEngine::UColor.get_cyanOffset;

UnityEngine::UColor.get_magentaOffset = getRealOffset(0x1136BD8);
UnityEngine::UColor.get_magenta = (Color (*)())UnityEngine::UColor.get_magentaOffset;

UnityEngine::UColor.get_greyOffset = getRealOffset(0x1136BF8);
UnityEngine::UColor.get_grey = (Color (*)())UnityEngine::UColor.get_greyOffset;

UnityEngine::UColor.get_clearOffset = getRealOffset(0x1136C18);
UnityEngine::UColor.get_clear = (Color (*)())UnityEngine::UColor.get_clearOffset;

UnityEngine::UColor.get_linearOffset = getRealOffset(0x3F1F9C);
UnityEngine::UColor.get_linear = (Color (*)(void*))UnityEngine::UColor.get_linearOffset;

UnityEngine::UColor.get_maxColorComponentOffset = getRealOffset(0x3F1FB0);
UnityEngine::UColor.get_maxColorComponent = (float(*)(void*))UnityEngine::UColor.get_maxColorComponentOffset;

UnityEngine::UColor.op_ImplicitOffset = getRealOffset(0x11365C0);
UnityEngine::UColor.op_Implicit = (int (*)(Color))UnityEngine::UColor.op_ImplicitOffset;

UnityEngine::UColor.op_Implicit1Offset = getRealOffset(0x1136D7C);
UnityEngine::UColor.op_Implicit1 = (Color (*)(int))UnityEngine::UColor.op_Implicit1Offset;

UnityEngine::UColor.get_ItemOffset = getRealOffset(0x3F1FB8);
UnityEngine::UColor.get_Item = (float(*)(void*, int))UnityEngine::UColor.get_ItemOffset;

UnityEngine::UColor.HSVToRGBOffset = getRealOffset(0x1136EA0);
UnityEngine::UColor.HSVToRGB = (Color (*)(float, float, float, bool))UnityEngine::UColor.HSVToRGBOffset;

UnityEngine::Color32.op_ImplicitOffset = getRealOffset(0x11370E4);
UnityEngine::Color32.op_Implicit = (int (*)(Color))UnityEngine::Color32.op_ImplicitOffset;

UnityEngine::Color32.op_Implicit1Offset = getRealOffset(0x11374B0);
UnityEngine::Color32.op_Implicit1 = (Color (*)(int))UnityEngine::Color32.op_Implicit1Offset;

UnityEngine::Color32.ToStringOffset = getRealOffset(0x3F1FD8);
UnityEngine::Color32.ToString = (monoString *(*)(void*))UnityEngine::Color32.ToStringOffset;

UnityEngine::ColorUtility.ToHtmlStringRGBOffset = getRealOffset(0x1137780);
UnityEngine::ColorUtility.ToHtmlStringRGB = (monoString *(*)(Color))UnityEngine::ColorUtility.ToHtmlStringRGBOffset;

UnityEngine::ColorUtility.ToHtmlStringRGBAOffset = getRealOffset(0x11379EC);
UnityEngine::ColorUtility.ToHtmlStringRGBA = (monoString *(*)(Color))UnityEngine::ColorUtility.ToHtmlStringRGBAOffset;

UnityEngine::Gradient.InitOffset = getRealOffset(0x1143AA8);
UnityEngine::Gradient.CleanupOffset = getRealOffset(0x1143AF0);
UnityEngine::Gradient.Cleanup = (void(*)(void*))UnityEngine::Gradient.CleanupOffset;

UnityEngine::Gradient.FinalizeOffset = getRealOffset(0x1143BF0);
UnityEngine::Gradient.Finalize = (void(*)(void*))UnityEngine::Gradient.FinalizeOffset;

UnityEngine::Gradient.EvaluateOffset = getRealOffset(0x1143C8C);
UnityEngine::Gradient.Evaluate = (Color (*)(void*, float))UnityEngine::Gradient.EvaluateOffset;

UnityEngine::Gradient.get_colorKeysOffset = getRealOffset(0x1143D68);
UnityEngine::Gradient.get_alphaKeysOffset = getRealOffset(0x1143DB8);
UnityEngine::Gradient.Equals1Offset = getRealOffset(0x1143F4C);
UnityEngine::Gradient.Equals1 = (bool(*)(void*, void *))UnityEngine::Gradient.Equals1Offset;

UnityEngine::Gradient.GetHashCodeOffset = getRealOffset(0x1144040);
UnityEngine::Gradient.GetHashCode = (int(*)(void*))UnityEngine::Gradient.GetHashCodeOffset;

UnityEngine::Matrix4x4.GetLossyScaleOffset = getRealOffset(0x3F2D24);
UnityEngine::Matrix4x4.GetLossyScale = (Vector3 (*)(void*))UnityEngine::Matrix4x4.GetLossyScaleOffset;

UnityEngine::Matrix4x4.get_lossyScaleOffset = getRealOffset(0x3F2D38);
UnityEngine::Matrix4x4.get_lossyScale = (Vector3 (*)(void*))UnityEngine::Matrix4x4.get_lossyScaleOffset;

UnityEngine::Matrix4x4.TRSOffset = getRealOffset(0x1168F20);
UnityEngine::Matrix4x4.TRS = (int (*)(Vector3, int, Vector3))UnityEngine::Matrix4x4.TRSOffset;

UnityEngine::Matrix4x4.SetTRSOffset = getRealOffset(0x3F2D7C);
UnityEngine::Matrix4x4.SetTRS = (void(*)(void*, Vector3, int, Vector3))UnityEngine::Matrix4x4.SetTRSOffset;

UnityEngine::Matrix4x4.InverseOffset = getRealOffset(0x11691CC);
UnityEngine::Matrix4x4.Inverse = (int (*)(int))UnityEngine::Matrix4x4.InverseOffset;

UnityEngine::Matrix4x4.get_inverseOffset = getRealOffset(0x3F2DD0);
UnityEngine::Matrix4x4.get_inverse = (int (*)(void*))UnityEngine::Matrix4x4.get_inverseOffset;

UnityEngine::Matrix4x4.TransposeOffset = getRealOffset(0x11694F8);
UnityEngine::Matrix4x4.Transpose = (int (*)(int))UnityEngine::Matrix4x4.TransposeOffset;

UnityEngine::Matrix4x4.get_transposeOffset = getRealOffset(0x3F2DE4);
UnityEngine::Matrix4x4.get_transpose = (int (*)(void*))UnityEngine::Matrix4x4.get_transposeOffset;

UnityEngine::Matrix4x4.get_ItemOffset = getRealOffset(0x3F2E6C);
UnityEngine::Matrix4x4.get_Item = (float(*)(void*, int, int))UnityEngine::Matrix4x4.get_ItemOffset;

UnityEngine::Matrix4x4.set_ItemOffset = getRealOffset(0x3F2E78);
UnityEngine::Matrix4x4.set_Item = (void(*)(void*, int, int, float))UnityEngine::Matrix4x4.set_ItemOffset;

UnityEngine::Matrix4x4.get_Item1Offset = getRealOffset(0x3F2E88);
UnityEngine::Matrix4x4.get_Item1 = (float(*)(void*, int))UnityEngine::Matrix4x4.get_Item1Offset;

UnityEngine::Matrix4x4.set_Item1Offset = getRealOffset(0x3F2E90);
UnityEngine::Matrix4x4.set_Item1 = (void(*)(void*, int, float))UnityEngine::Matrix4x4.set_Item1Offset;

UnityEngine::Matrix4x4.GetHashCodeOffset = getRealOffset(0x3F2E98);
UnityEngine::Matrix4x4.GetHashCode = (int(*)(void*))UnityEngine::Matrix4x4.GetHashCodeOffset;

UnityEngine::Matrix4x4.Equals1Offset = getRealOffset(0x3F2EA8);
UnityEngine::Matrix4x4.Equals1 = (bool(*)(void*, int))UnityEngine::Matrix4x4.Equals1Offset;

UnityEngine::Matrix4x4.op_MultiplyOffset = getRealOffset(0x116A060);
UnityEngine::Matrix4x4.op_Multiply = (int (*)(int, int))UnityEngine::Matrix4x4.op_MultiplyOffset;

UnityEngine::Matrix4x4.op_Multiply1Offset = getRealOffset(0x116A248);
UnityEngine::Matrix4x4.op_Multiply1 = (int (*)(int, int))UnityEngine::Matrix4x4.op_Multiply1Offset;

UnityEngine::Matrix4x4.op_EqualityOffset = getRealOffset(0x116A2EC);
UnityEngine::Matrix4x4.op_Equality = (bool(*)(int, int))UnityEngine::Matrix4x4.op_EqualityOffset;

UnityEngine::Matrix4x4.GetColumnOffset = getRealOffset(0x3F2F1C);
UnityEngine::Matrix4x4.GetColumn = (int (*)(void*, int))UnityEngine::Matrix4x4.GetColumnOffset;

UnityEngine::Matrix4x4.GetRowOffset = getRealOffset(0x3F2F30);
UnityEngine::Matrix4x4.GetRow = (int (*)(void*, int))UnityEngine::Matrix4x4.GetRowOffset;

UnityEngine::Matrix4x4.SetRowOffset = getRealOffset(0x3F2F44);
UnityEngine::Matrix4x4.SetRow = (void(*)(void*, int, int))UnityEngine::Matrix4x4.SetRowOffset;

UnityEngine::Matrix4x4.MultiplyPointOffset = getRealOffset(0x3F2F6C);
UnityEngine::Matrix4x4.MultiplyPoint = (Vector3 (*)(void*, Vector3))UnityEngine::Matrix4x4.MultiplyPointOffset;

UnityEngine::Matrix4x4.MultiplyPoint3x4Offset = getRealOffset(0x3F2F90);
UnityEngine::Matrix4x4.MultiplyPoint3x4 = (Vector3 (*)(void*, Vector3))UnityEngine::Matrix4x4.MultiplyPoint3x4Offset;

UnityEngine::Matrix4x4.MultiplyVectorOffset = getRealOffset(0x3F2FB4);
UnityEngine::Matrix4x4.MultiplyVector = (Vector3 (*)(void*, Vector3))UnityEngine::Matrix4x4.MultiplyVectorOffset;

UnityEngine::Matrix4x4.get_identityOffset = getRealOffset(0x116A944);
UnityEngine::Matrix4x4.get_identity = (int (*)())UnityEngine::Matrix4x4.get_identityOffset;

UnityEngine::Matrix4x4.ToStringOffset = getRealOffset(0x3F2FD8);
UnityEngine::Matrix4x4.ToString = (monoString *(*)(void*))UnityEngine::Matrix4x4.ToStringOffset;

UnityEngine::UVector3.SlerpOffset = getRealOffset(0x1063484);
UnityEngine::UVector3.Slerp = (Vector3 (*)(Vector3, Vector3, float))UnityEngine::UVector3.SlerpOffset;

UnityEngine::UVector3.LerpOffset = getRealOffset(0x1063600);
UnityEngine::UVector3.Lerp = (Vector3 (*)(Vector3, Vector3, float))UnityEngine::UVector3.LerpOffset;

UnityEngine::UVector3.MoveTowardsOffset = getRealOffset(0x10636E8);
UnityEngine::UVector3.MoveTowards = (Vector3 (*)(Vector3, Vector3, float))UnityEngine::UVector3.MoveTowardsOffset;

UnityEngine::UVector3.get_ItemOffset = getRealOffset(0x3EFAE4);
UnityEngine::UVector3.get_Item = (float(*)(void*, int))UnityEngine::UVector3.get_ItemOffset;

UnityEngine::UVector3.set_ItemOffset = getRealOffset(0x3EFAEC);
UnityEngine::UVector3.set_Item = (void(*)(void*, int, float))UnityEngine::UVector3.set_ItemOffset;

UnityEngine::UVector3.ctor1Offset = getRealOffset(0x3EFB00);
UnityEngine::UVector3.ctor1 = (void(*)(void*, float, float))UnityEngine::UVector3.ctor1Offset;

UnityEngine::UVector3.SetOffset = getRealOffset(0x3EFB10);
UnityEngine::UVector3.Set = (void(*)(void*, float, float, float))UnityEngine::UVector3.SetOffset;

UnityEngine::UVector3.ScaleOffset = getRealOffset(0x10639CC);
UnityEngine::UVector3.Scale = (Vector3 (*)(Vector3, Vector3))UnityEngine::UVector3.ScaleOffset;

UnityEngine::UVector3.Scale1Offset = getRealOffset(0x3EFB1C);
UnityEngine::UVector3.Scale1 = (void(*)(void*, Vector3))UnityEngine::UVector3.Scale1Offset;

UnityEngine::UVector3.CrossOffset = getRealOffset(0x1063A34);
UnityEngine::UVector3.Cross = (Vector3 (*)(Vector3, Vector3))UnityEngine::UVector3.CrossOffset;

UnityEngine::UVector3.GetHashCodeOffset = getRealOffset(0x3EFB50);
UnityEngine::UVector3.GetHashCode = (int(*)(void*))UnityEngine::UVector3.GetHashCodeOffset;

UnityEngine::UVector3.Equals1Offset = getRealOffset(0x3EFB60);
UnityEngine::UVector3.Equals1 = (bool(*)(void*, Vector3))UnityEngine::UVector3.Equals1Offset;

UnityEngine::UVector3.NormalizeOffset = getRealOffset(0x1063B30);
UnityEngine::UVector3.Normalize = (Vector3 (*)(Vector3))UnityEngine::UVector3.NormalizeOffset;

UnityEngine::UVector3.Normalize1Offset = getRealOffset(0x3EFBAC);
UnityEngine::UVector3.Normalize1 = (void(*)(void*))UnityEngine::UVector3.Normalize1Offset;

UnityEngine::UVector3.get_normalizedOffset = getRealOffset(0x3EFBB4);
UnityEngine::UVector3.get_normalized = (Vector3 (*)(void*))UnityEngine::UVector3.get_normalizedOffset;

UnityEngine::UVector3.DotOffset = getRealOffset(0x1063FB4);
UnityEngine::UVector3.Dot = (float(*)(Vector3, Vector3))UnityEngine::UVector3.DotOffset;

UnityEngine::UVector3.ProjectOffset = getRealOffset(0x1063FE0);
UnityEngine::UVector3.Project = (Vector3 (*)(Vector3, Vector3))UnityEngine::UVector3.ProjectOffset;

UnityEngine::UVector3.AngleOffset = getRealOffset(0x1064174);
UnityEngine::UVector3.Angle = (float(*)(Vector3, Vector3))UnityEngine::UVector3.AngleOffset;

UnityEngine::UVector3.DistanceOffset = getRealOffset(0x1064364);
UnityEngine::UVector3.Distance = (float(*)(Vector3, Vector3))UnityEngine::UVector3.DistanceOffset;

UnityEngine::UVector3.MagnitudeOffset = getRealOffset(0x1063C60);
UnityEngine::UVector3.Magnitude = (float(*)(Vector3))UnityEngine::UVector3.MagnitudeOffset;

UnityEngine::UVector3.get_magnitudeOffset = getRealOffset(0x3EFBC8);
UnityEngine::UVector3.get_magnitude = (float(*)(void*))UnityEngine::UVector3.get_magnitudeOffset;

UnityEngine::UVector3.SqrMagnitudeOffset = getRealOffset(0x1064504);
UnityEngine::UVector3.SqrMagnitude = (float(*)(Vector3))UnityEngine::UVector3.SqrMagnitudeOffset;

UnityEngine::UVector3.get_sqrMagnitudeOffset = getRealOffset(0x3EFBD0);
UnityEngine::UVector3.get_sqrMagnitude = (float(*)(void*))UnityEngine::UVector3.get_sqrMagnitudeOffset;

UnityEngine::UVector3.MinOffset = getRealOffset(0x1064524);
UnityEngine::UVector3.Min = (Vector3 (*)(Vector3, Vector3))UnityEngine::UVector3.MinOffset;

UnityEngine::UVector3.MaxOffset = getRealOffset(0x1064604);
UnityEngine::UVector3.Max = (Vector3 (*)(Vector3, Vector3))UnityEngine::UVector3.MaxOffset;

UnityEngine::UVector3.get_zeroOffset = getRealOffset(0x1063D48);
UnityEngine::UVector3.get_zero = (Vector3 (*)())UnityEngine::UVector3.get_zeroOffset;

UnityEngine::UVector3.get_oneOffset = getRealOffset(0x10646E4);
UnityEngine::UVector3.get_one = (Vector3 (*)())UnityEngine::UVector3.get_oneOffset;

UnityEngine::UVector3.get_forwardOffset = getRealOffset(0x105E694);
UnityEngine::UVector3.get_forward = (Vector3 (*)())UnityEngine::UVector3.get_forwardOffset;

UnityEngine::UVector3.get_backOffset = getRealOffset(0x106476C);
UnityEngine::UVector3.get_back = (Vector3 (*)())UnityEngine::UVector3.get_backOffset;

UnityEngine::UVector3.get_upOffset = getRealOffset(0x105E4A8);
UnityEngine::UVector3.get_up = (Vector3 (*)())UnityEngine::UVector3.get_upOffset;

UnityEngine::UVector3.get_downOffset = getRealOffset(0x10647F4);
UnityEngine::UVector3.get_down = (Vector3 (*)())UnityEngine::UVector3.get_downOffset;

UnityEngine::UVector3.get_leftOffset = getRealOffset(0x106487C);
UnityEngine::UVector3.get_left = (Vector3 (*)())UnityEngine::UVector3.get_leftOffset;

UnityEngine::UVector3.get_rightOffset = getRealOffset(0x105E2BC);
UnityEngine::UVector3.get_right = (Vector3 (*)())UnityEngine::UVector3.get_rightOffset;

UnityEngine::UVector3.op_AdditionOffset = getRealOffset(0x105F0E0);
UnityEngine::UVector3.op_Addition = (Vector3 (*)(Vector3, Vector3))UnityEngine::UVector3.op_AdditionOffset;

UnityEngine::UVector3.op_SubtractionOffset = getRealOffset(0x105F9A4);
UnityEngine::UVector3.op_Subtraction = (Vector3 (*)(Vector3, Vector3))UnityEngine::UVector3.op_SubtractionOffset;

UnityEngine::UVector3.op_UnaryNegationOffset = getRealOffset(0x1064904);
UnityEngine::UVector3.op_UnaryNegation = (Vector3 (*)(Vector3))UnityEngine::UVector3.op_UnaryNegationOffset;

UnityEngine::UVector3.op_MultiplyOffset = getRealOffset(0x1064918);
UnityEngine::UVector3.op_Multiply = (Vector3 (*)(Vector3, float))UnityEngine::UVector3.op_MultiplyOffset;

UnityEngine::UVector3.op_Multiply1Offset = getRealOffset(0x1064944);
UnityEngine::UVector3.op_Multiply1 = (Vector3 (*)(float, Vector3))UnityEngine::UVector3.op_Multiply1Offset;

UnityEngine::UVector3.op_DivisionOffset = getRealOffset(0x1063D1C);
UnityEngine::UVector3.op_Division = (Vector3 (*)(Vector3, float))UnityEngine::UVector3.op_DivisionOffset;

UnityEngine::UVector3.op_EqualityOffset = getRealOffset(0x1064970);
UnityEngine::UVector3.op_Equality = (bool(*)(Vector3, Vector3))UnityEngine::UVector3.op_EqualityOffset;

UnityEngine::UVector3.op_InequalityOffset = getRealOffset(0x10649BC);
UnityEngine::UVector3.op_Inequality = (bool(*)(Vector3, Vector3))UnityEngine::UVector3.op_InequalityOffset;

UnityEngine::UVector3.ToStringOffset = getRealOffset(0x3EFBF0);
UnityEngine::UVector3.ToString = (monoString *(*)(void*))UnityEngine::UVector3.ToStringOffset;

UnityEngine::UVector3.ToString1Offset = getRealOffset(0x3EFBF8);
UnityEngine::UVector3.ToString1 = (monoString *(*)(void*, monoString*))UnityEngine::UVector3.ToString1Offset;

UnityEngine::UVector3.Slerp_InjectedOffset = getRealOffset(0x1063598);
UnityEngine::UVector3.Slerp_Injected = (void(*)(Vector3 *, Vector3 *, float, Vector3 *))UnityEngine::UVector3.Slerp_InjectedOffset;

UnityEngine::Quaternion.FromToRotationOffset = getRealOffset(0x1176490);
UnityEngine::Quaternion.FromToRotation = (int (*)(Vector3, Vector3))UnityEngine::Quaternion.FromToRotationOffset;

UnityEngine::Quaternion.InverseOffset = getRealOffset(0x11765E8);
UnityEngine::Quaternion.Inverse = (int (*)(int))UnityEngine::Quaternion.InverseOffset;

UnityEngine::Quaternion.SlerpOffset = getRealOffset(0x1176724);
UnityEngine::Quaternion.Slerp = (int (*)(int, int, float))UnityEngine::Quaternion.SlerpOffset;

UnityEngine::Quaternion.SlerpUnclampedOffset = getRealOffset(0x1176894);
UnityEngine::Quaternion.SlerpUnclamped = (int (*)(int, int, float))UnityEngine::Quaternion.SlerpUnclampedOffset;

UnityEngine::Quaternion.LerpOffset = getRealOffset(0x1176A04);
UnityEngine::Quaternion.Lerp = (int (*)(int, int, float))UnityEngine::Quaternion.LerpOffset;

UnityEngine::Quaternion.Internal_FromEulerRadOffset = getRealOffset(0x1176B74);
UnityEngine::Quaternion.Internal_FromEulerRad = (int (*)(Vector3))UnityEngine::Quaternion.Internal_FromEulerRadOffset;

UnityEngine::Quaternion.Internal_ToEulerRadOffset = getRealOffset(0x1176CA8);
UnityEngine::Quaternion.Internal_ToEulerRad = (Vector3 (*)(int))UnityEngine::Quaternion.Internal_ToEulerRadOffset;

UnityEngine::Quaternion.AngleAxisOffset = getRealOffset(0x1176F1C);
UnityEngine::Quaternion.AngleAxis = (int (*)(float, Vector3))UnityEngine::Quaternion.AngleAxisOffset;

UnityEngine::Quaternion.LookRotationOffset = getRealOffset(0x1177064);
UnityEngine::Quaternion.LookRotation = (int (*)(Vector3, Vector3))UnityEngine::Quaternion.LookRotationOffset;

UnityEngine::Quaternion.LookRotation1Offset = getRealOffset(0x11771BC);
UnityEngine::Quaternion.LookRotation1 = (int (*)(Vector3))UnityEngine::Quaternion.LookRotation1Offset;

UnityEngine::Quaternion.get_identityOffset = getRealOffset(0x11772BC);
UnityEngine::Quaternion.get_identity = (int (*)())UnityEngine::Quaternion.get_identityOffset;

UnityEngine::Quaternion.op_MultiplyOffset = getRealOffset(0x117733C);
UnityEngine::Quaternion.op_Multiply = (int (*)(int, int))UnityEngine::Quaternion.op_MultiplyOffset;

UnityEngine::Quaternion.op_Multiply1Offset = getRealOffset(0x11773B0);
UnityEngine::Quaternion.op_Multiply1 = (Vector3 (*)(int, Vector3))UnityEngine::Quaternion.op_Multiply1Offset;

UnityEngine::Quaternion.IsEqualUsingDotOffset = getRealOffset(0x1177464);
UnityEngine::Quaternion.IsEqualUsingDot = (bool(*)(float))UnityEngine::Quaternion.IsEqualUsingDotOffset;

UnityEngine::Quaternion.op_EqualityOffset = getRealOffset(0x1177484);
UnityEngine::Quaternion.op_Equality = (bool(*)(int, int))UnityEngine::Quaternion.op_EqualityOffset;

UnityEngine::Quaternion.op_InequalityOffset = getRealOffset(0x117759C);
UnityEngine::Quaternion.op_Inequality = (bool(*)(int, int))UnityEngine::Quaternion.op_InequalityOffset;

UnityEngine::Quaternion.DotOffset = getRealOffset(0x1177564);
UnityEngine::Quaternion.Dot = (float(*)(int, int))UnityEngine::Quaternion.DotOffset;

UnityEngine::Quaternion.SetLookRotationOffset = getRealOffset(0x3F32C4);
UnityEngine::Quaternion.SetLookRotation = (void(*)(void*, Vector3, Vector3))UnityEngine::Quaternion.SetLookRotationOffset;

UnityEngine::Quaternion.AngleOffset = getRealOffset(0x1177710);
UnityEngine::Quaternion.Angle = (float(*)(int, int))UnityEngine::Quaternion.AngleOffset;

UnityEngine::Quaternion.Internal_MakePositiveOffset = getRealOffset(0x1177860);
UnityEngine::Quaternion.Internal_MakePositive = (Vector3 (*)(Vector3))UnityEngine::Quaternion.Internal_MakePositiveOffset;

UnityEngine::Quaternion.get_eulerAnglesOffset = getRealOffset(0x3F32F4);
UnityEngine::Quaternion.get_eulerAngles = (Vector3 (*)(void*))UnityEngine::Quaternion.get_eulerAnglesOffset;

UnityEngine::Quaternion.EulerOffset = getRealOffset(0x1177A38);
UnityEngine::Quaternion.Euler = (int (*)(float, float, float))UnityEngine::Quaternion.EulerOffset;

UnityEngine::Quaternion.Euler1Offset = getRealOffset(0x1177B50);
UnityEngine::Quaternion.Euler1 = (int (*)(Vector3))UnityEngine::Quaternion.Euler1Offset;

UnityEngine::Quaternion.RotateTowardsOffset = getRealOffset(0x1177D04);
UnityEngine::Quaternion.RotateTowards = (int (*)(int, int, float))UnityEngine::Quaternion.RotateTowardsOffset;

UnityEngine::Quaternion.GetHashCodeOffset = getRealOffset(0x3F3310);
UnityEngine::Quaternion.GetHashCode = (int(*)(void*))UnityEngine::Quaternion.GetHashCodeOffset;

UnityEngine::Quaternion.Equals1Offset = getRealOffset(0x3F3320);
UnityEngine::Quaternion.Equals1 = (bool(*)(void*, int))UnityEngine::Quaternion.Equals1Offset;

UnityEngine::Quaternion.ToStringOffset = getRealOffset(0x3F3344);
UnityEngine::Quaternion.ToString = (monoString *(*)(void*))UnityEngine::Quaternion.ToStringOffset;

UnityEngine::Quaternion.ToString1Offset = getRealOffset(0x3F334C);
UnityEngine::Quaternion.ToString1 = (monoString *(*)(void*, monoString*))UnityEngine::Quaternion.ToString1Offset;

UnityEngine::Mathf.NextPowerOfTwoOffset = getRealOffset(0x1167324);
UnityEngine::Mathf.NextPowerOfTwo = (int(*)(int))UnityEngine::Mathf.NextPowerOfTwoOffset;

UnityEngine::Mathf.GammaToLinearSpaceOffset = getRealOffset(0x1167374);
UnityEngine::Mathf.GammaToLinearSpace = (float(*)(float))UnityEngine::Mathf.GammaToLinearSpaceOffset;

UnityEngine::Mathf.LinearToGammaSpaceOffset = getRealOffset(0x11673C4);
UnityEngine::Mathf.LinearToGammaSpace = (float(*)(float))UnityEngine::Mathf.LinearToGammaSpaceOffset;

UnityEngine::Mathf.PerlinNoiseOffset = getRealOffset(0x1167414);
UnityEngine::Mathf.PerlinNoise = (float(*)(float, float))UnityEngine::Mathf.PerlinNoiseOffset;

UnityEngine::Mathf.SinOffset = getRealOffset(0x116746C);
UnityEngine::Mathf.Sin = (float(*)(float))UnityEngine::Mathf.SinOffset;

UnityEngine::Mathf.CosOffset = getRealOffset(0x1167500);
UnityEngine::Mathf.Cos = (float(*)(float))UnityEngine::Mathf.CosOffset;

UnityEngine::Mathf.TanOffset = getRealOffset(0x1167594);
UnityEngine::Mathf.Tan = (float(*)(float))UnityEngine::Mathf.TanOffset;

UnityEngine::Mathf.AsinOffset = getRealOffset(0x1167628);
UnityEngine::Mathf.Asin = (float(*)(float))UnityEngine::Mathf.AsinOffset;

UnityEngine::Mathf.AcosOffset = getRealOffset(0x11676BC);
UnityEngine::Mathf.Acos = (float(*)(float))UnityEngine::Mathf.AcosOffset;

UnityEngine::Mathf.AtanOffset = getRealOffset(0x1167750);
UnityEngine::Mathf.Atan = (float(*)(float))UnityEngine::Mathf.AtanOffset;

UnityEngine::Mathf.Atan2Offset = getRealOffset(0x11677E4);
UnityEngine::Mathf.Atan2 = (float(*)(float, float))UnityEngine::Mathf.Atan2Offset;

UnityEngine::Mathf.SqrtOffset = getRealOffset(0x1167888);
UnityEngine::Mathf.Sqrt = (float(*)(float))UnityEngine::Mathf.SqrtOffset;

UnityEngine::Mathf.AbsOffset = getRealOffset(0x1167928);
UnityEngine::Mathf.Abs = (float(*)(float))UnityEngine::Mathf.AbsOffset;

UnityEngine::Mathf.Abs1Offset = getRealOffset(0x116799C);
UnityEngine::Mathf.Abs1 = (int(*)(int))UnityEngine::Mathf.Abs1Offset;

UnityEngine::Mathf.MinOffset = getRealOffset(0x1167A18);
UnityEngine::Mathf.Min = (float(*)(float, float))UnityEngine::Mathf.MinOffset;

UnityEngine::Mathf.Min1Offset = getRealOffset(0x1167A34);
UnityEngine::Mathf.Min1 = (int(*)(int, int))UnityEngine::Mathf.Min1Offset;

UnityEngine::Mathf.MaxOffset = getRealOffset(0x1167A40);
UnityEngine::Mathf.Max = (float(*)(float, float))UnityEngine::Mathf.MaxOffset;

UnityEngine::Mathf.Max1Offset = getRealOffset(0x1167A5C);
UnityEngine::Mathf.Max1 = (int(*)(int, int))UnityEngine::Mathf.Max1Offset;

UnityEngine::Mathf.PowOffset = getRealOffset(0x1167A68);
UnityEngine::Mathf.Pow = (float(*)(float, float))UnityEngine::Mathf.PowOffset;

UnityEngine::Mathf.ExpOffset = getRealOffset(0x1167B1C);
UnityEngine::Mathf.Exp = (float(*)(float))UnityEngine::Mathf.ExpOffset;

UnityEngine::Mathf.LogOffset = getRealOffset(0x1167BB0);
UnityEngine::Mathf.Log = (float(*)(float, float))UnityEngine::Mathf.LogOffset;

UnityEngine::Mathf.Log1Offset = getRealOffset(0x1167C64);
UnityEngine::Mathf.Log1 = (float(*)(float))UnityEngine::Mathf.Log1Offset;

UnityEngine::Mathf.CeilOffset = getRealOffset(0x1167CF8);
UnityEngine::Mathf.Ceil = (float(*)(float))UnityEngine::Mathf.CeilOffset;

UnityEngine::Mathf.FloorOffset = getRealOffset(0x1167D70);
UnityEngine::Mathf.Floor = (float(*)(float))UnityEngine::Mathf.FloorOffset;

UnityEngine::Mathf.RoundOffset = getRealOffset(0x1167DE8);
UnityEngine::Mathf.Round = (float(*)(float))UnityEngine::Mathf.RoundOffset;

UnityEngine::Mathf.CeilToIntOffset = getRealOffset(0x1167F00);
UnityEngine::Mathf.CeilToInt = (int(*)(float))UnityEngine::Mathf.CeilToIntOffset;

UnityEngine::Mathf.FloorToIntOffset = getRealOffset(0x1167F84);
UnityEngine::Mathf.FloorToInt = (int(*)(float))UnityEngine::Mathf.FloorToIntOffset;

UnityEngine::Mathf.RoundToIntOffset = getRealOffset(0x1168008);
UnityEngine::Mathf.RoundToInt = (int(*)(float))UnityEngine::Mathf.RoundToIntOffset;

UnityEngine::Mathf.SignOffset = getRealOffset(0x1168120);
UnityEngine::Mathf.Sign = (float(*)(float))UnityEngine::Mathf.SignOffset;

UnityEngine::Mathf.ClampOffset = getRealOffset(0x1168140);
UnityEngine::Mathf.Clamp = (float(*)(float, float, float))UnityEngine::Mathf.ClampOffset;

UnityEngine::Mathf.Clamp1Offset = getRealOffset(0x1168170);
UnityEngine::Mathf.Clamp1 = (int(*)(int, int, int))UnityEngine::Mathf.Clamp1Offset;

UnityEngine::Mathf.Clamp01Offset = getRealOffset(0x1168188);
UnityEngine::Mathf.Clamp01 = (float(*)(float))UnityEngine::Mathf.Clamp01Offset;

UnityEngine::Mathf.LerpOffset = getRealOffset(0x11681AC);
UnityEngine::Mathf.Lerp = (float(*)(float, float, float))UnityEngine::Mathf.LerpOffset;

UnityEngine::Mathf.LerpUnclampedOffset = getRealOffset(0x1168260);
UnityEngine::Mathf.LerpUnclamped = (float(*)(float, float, float))UnityEngine::Mathf.LerpUnclampedOffset;

UnityEngine::Mathf.LerpAngleOffset = getRealOffset(0x116827C);
UnityEngine::Mathf.LerpAngle = (float(*)(float, float, float))UnityEngine::Mathf.LerpAngleOffset;

UnityEngine::Mathf.MoveTowardsOffset = getRealOffset(0x1168440);
UnityEngine::Mathf.MoveTowards = (float(*)(float, float, float))UnityEngine::Mathf.MoveTowardsOffset;

UnityEngine::Mathf.SmoothStepOffset = getRealOffset(0x1168520);
UnityEngine::Mathf.SmoothStep = (float(*)(float, float, float))UnityEngine::Mathf.SmoothStepOffset;

UnityEngine::Mathf.ApproximatelyOffset = getRealOffset(0x11685F4);
UnityEngine::Mathf.Approximately = (bool(*)(float, float))UnityEngine::Mathf.ApproximatelyOffset;

UnityEngine::Mathf.RepeatOffset = getRealOffset(0x1168384);
UnityEngine::Mathf.Repeat = (float(*)(float, float))UnityEngine::Mathf.RepeatOffset;

UnityEngine::Mathf.PingPongOffset = getRealOffset(0x1168B44);
UnityEngine::Mathf.PingPong = (float(*)(float, float))UnityEngine::Mathf.PingPongOffset;

UnityEngine::Mathf.InverseLerpOffset = getRealOffset(0x1168BE8);
UnityEngine::Mathf.InverseLerp = (float(*)(float, float, float))UnityEngine::Mathf.InverseLerpOffset;

UnityEngine::Mathf.DeltaAngleOffset = getRealOffset(0x1168A84);
UnityEngine::Mathf.DeltaAngle = (float(*)(float, float))UnityEngine::Mathf.DeltaAngleOffset;

UnityEngine::UVector2.get_ItemOffset = getRealOffset(0x3EF998);
UnityEngine::UVector2.get_Item = (float(*)(void*, int))UnityEngine::UVector2.get_ItemOffset;

UnityEngine::UVector2.set_ItemOffset = getRealOffset(0x3EF9A0);
UnityEngine::UVector2.set_Item = (void(*)(void*, int, float))UnityEngine::UVector2.set_ItemOffset;

UnityEngine::UVector2.SetOffset = getRealOffset(0x3EF9B4);
UnityEngine::UVector2.Set = (void(*)(void*, float, float))UnityEngine::UVector2.SetOffset;

UnityEngine::UVector2.LerpOffset = getRealOffset(0x106208C);
UnityEngine::UVector2.Lerp = (Vector2 (*)(Vector2, Vector2, float))UnityEngine::UVector2.LerpOffset;

UnityEngine::UVector2.ScaleOffset = getRealOffset(0x1062150);
UnityEngine::UVector2.Scale = (Vector2 (*)(Vector2, Vector2))UnityEngine::UVector2.ScaleOffset;

UnityEngine::UVector2.NormalizeOffset = getRealOffset(0x3EF9C0);
UnityEngine::UVector2.Normalize = (void(*)(void*))UnityEngine::UVector2.NormalizeOffset;

UnityEngine::UVector2.get_normalizedOffset = getRealOffset(0x3EF9C8);
UnityEngine::UVector2.get_normalized = (Vector2 (*)(void*))UnityEngine::UVector2.get_normalizedOffset;

UnityEngine::UVector2.ToStringOffset = getRealOffset(0x3EF9FC);
UnityEngine::UVector2.ToString = (monoString *(*)(void*))UnityEngine::UVector2.ToStringOffset;

UnityEngine::UVector2.ToString1Offset = getRealOffset(0x3EFA04);
UnityEngine::UVector2.ToString1 = (monoString *(*)(void*, monoString*))UnityEngine::UVector2.ToString1Offset;

UnityEngine::UVector2.GetHashCodeOffset = getRealOffset(0x3EFA0C);
UnityEngine::UVector2.GetHashCode = (int(*)(void*))UnityEngine::UVector2.GetHashCodeOffset;

UnityEngine::UVector2.Equals1Offset = getRealOffset(0x3EFA44);
UnityEngine::UVector2.Equals1 = (bool(*)(void*, Vector2))UnityEngine::UVector2.Equals1Offset;

UnityEngine::UVector2.DotOffset = getRealOffset(0x106281C);
UnityEngine::UVector2.Dot = (float(*)(Vector2, Vector2))UnityEngine::UVector2.DotOffset;

UnityEngine::UVector2.get_magnitudeOffset = getRealOffset(0x3EFA78);
UnityEngine::UVector2.get_magnitude = (float(*)(void*))UnityEngine::UVector2.get_magnitudeOffset;

UnityEngine::UVector2.get_sqrMagnitudeOffset = getRealOffset(0x3EFA80);
UnityEngine::UVector2.get_sqrMagnitude = (float(*)(void*))UnityEngine::UVector2.get_sqrMagnitudeOffset;

UnityEngine::UVector2.AngleOffset = getRealOffset(0x1062854);
UnityEngine::UVector2.Angle = (float(*)(Vector2, Vector2))UnityEngine::UVector2.AngleOffset;

UnityEngine::UVector2.DistanceOffset = getRealOffset(0x1062A00);
UnityEngine::UVector2.Distance = (float(*)(Vector2, Vector2))UnityEngine::UVector2.DistanceOffset;

UnityEngine::UVector2.ClampMagnitudeOffset = getRealOffset(0x1062AC8);
UnityEngine::UVector2.ClampMagnitude = (Vector2 (*)(Vector2, float))UnityEngine::UVector2.ClampMagnitudeOffset;

UnityEngine::UVector2.op_AdditionOffset = getRealOffset(0x1062BA8);
UnityEngine::UVector2.op_Addition = (Vector2 (*)(Vector2, Vector2))UnityEngine::UVector2.op_AdditionOffset;

UnityEngine::UVector2.op_SubtractionOffset = getRealOffset(0x1062BCC);
UnityEngine::UVector2.op_Subtraction = (Vector2 (*)(Vector2, Vector2))UnityEngine::UVector2.op_SubtractionOffset;

UnityEngine::UVector2.op_MultiplyOffset = getRealOffset(0x1062BF0);
UnityEngine::UVector2.op_Multiply = (Vector2 (*)(Vector2, Vector2))UnityEngine::UVector2.op_MultiplyOffset;

UnityEngine::UVector2.op_DivisionOffset = getRealOffset(0x1062C14);
UnityEngine::UVector2.op_Division = (Vector2 (*)(Vector2, Vector2))UnityEngine::UVector2.op_DivisionOffset;

UnityEngine::UVector2.op_Multiply1Offset = getRealOffset(0x1062C38);
UnityEngine::UVector2.op_Multiply1 = (Vector2 (*)(Vector2, float))UnityEngine::UVector2.op_Multiply1Offset;

UnityEngine::UVector2.op_Multiply2Offset = getRealOffset(0x1062C58);
UnityEngine::UVector2.op_Multiply2 = (Vector2 (*)(float, Vector2))UnityEngine::UVector2.op_Multiply2Offset;

UnityEngine::UVector2.op_Division1Offset = getRealOffset(0x106230C);
UnityEngine::UVector2.op_Division1 = (Vector2 (*)(Vector2, float))UnityEngine::UVector2.op_Division1Offset;

UnityEngine::UVector2.op_EqualityOffset = getRealOffset(0x1062C78);
UnityEngine::UVector2.op_Equality = (bool(*)(Vector2, Vector2))UnityEngine::UVector2.op_EqualityOffset;

UnityEngine::UVector2.op_InequalityOffset = getRealOffset(0x1062CB4);
UnityEngine::UVector2.op_Inequality = (bool(*)(Vector2, Vector2))UnityEngine::UVector2.op_InequalityOffset;

UnityEngine::UVector2.op_ImplicitOffset = getRealOffset(0x1062D68);
UnityEngine::UVector2.op_Implicit = (Vector2 (*)(Vector3))UnityEngine::UVector2.op_ImplicitOffset;

UnityEngine::UVector2.op_Implicit1Offset = getRealOffset(0x1062D70);
UnityEngine::UVector2.op_Implicit1 = (Vector3 (*)(Vector2))UnityEngine::UVector2.op_Implicit1Offset;

UnityEngine::UVector2.get_zeroOffset = getRealOffset(0x106232C);
UnityEngine::UVector2.get_zero = (Vector2 (*)())UnityEngine::UVector2.get_zeroOffset;

UnityEngine::UVector2.get_oneOffset = getRealOffset(0x1062D7C);
UnityEngine::UVector2.get_one = (Vector2 (*)())UnityEngine::UVector2.get_oneOffset;

UnityEngine::UVector2.get_upOffset = getRealOffset(0x1062E04);
UnityEngine::UVector2.get_up = (Vector2 (*)())UnityEngine::UVector2.get_upOffset;

UnityEngine::UVector2.get_rightOffset = getRealOffset(0x1062E8C);
UnityEngine::UVector2.get_right = (Vector2 (*)())UnityEngine::UVector2.get_rightOffset;

UnityEngine::Vector2Int.get_xOffset = getRealOffset(0x3EFA98);
UnityEngine::Vector2Int.get_x = (int(*)(void*))UnityEngine::Vector2Int.get_xOffset;

UnityEngine::Vector2Int.set_xOffset = getRealOffset(0x3EFAA0);
UnityEngine::Vector2Int.set_x = (void(*)(void*, int))UnityEngine::Vector2Int.set_xOffset;

UnityEngine::Vector2Int.get_yOffset = getRealOffset(0x3EFAA8);
UnityEngine::Vector2Int.get_y = (int(*)(void*))UnityEngine::Vector2Int.get_yOffset;

UnityEngine::Vector2Int.set_yOffset = getRealOffset(0x3EFAB0);
UnityEngine::Vector2Int.set_y = (void(*)(void*, int))UnityEngine::Vector2Int.set_yOffset;

UnityEngine::Vector2Int.op_ImplicitOffset = getRealOffset(0x1063008);
UnityEngine::Vector2Int.op_Implicit = (Vector2 (*)(int))UnityEngine::Vector2Int.op_ImplicitOffset;

UnityEngine::Vector2Int.op_EqualityOffset = getRealOffset(0x1063024);
UnityEngine::Vector2Int.op_Equality = (bool(*)(int, int))UnityEngine::Vector2Int.op_EqualityOffset;

UnityEngine::Vector2Int.op_InequalityOffset = getRealOffset(0x106303C);
UnityEngine::Vector2Int.op_Inequality = (bool(*)(int, int))UnityEngine::Vector2Int.op_InequalityOffset;

UnityEngine::Vector2Int.Equals1Offset = getRealOffset(0x3EFACC);
UnityEngine::Vector2Int.Equals1 = (bool(*)(void*, int))UnityEngine::Vector2Int.Equals1Offset;

UnityEngine::Vector2Int.GetHashCodeOffset = getRealOffset(0x3EFAD4);
UnityEngine::Vector2Int.GetHashCode = (int(*)(void*))UnityEngine::Vector2Int.GetHashCodeOffset;

UnityEngine::Vector2Int.ToStringOffset = getRealOffset(0x3EFADC);
UnityEngine::Vector2Int.ToString = (monoString *(*)(void*))UnityEngine::Vector2Int.ToStringOffset;

UnityEngine::Vector2Int.get_zeroOffset = getRealOffset(0x1063354);
UnityEngine::Vector2Int.get_zero = (int (*)())UnityEngine::Vector2Int.get_zeroOffset;

UnityEngine::Vector3Int.get_xOffset = getRealOffset(0x3FF544);
UnityEngine::Vector3Int.get_x = (int(*)(void*))UnityEngine::Vector3Int.get_xOffset;

UnityEngine::Vector3Int.set_xOffset = getRealOffset(0x3FF54C);
UnityEngine::Vector3Int.set_x = (void(*)(void*, int))UnityEngine::Vector3Int.set_xOffset;

UnityEngine::Vector3Int.get_yOffset = getRealOffset(0x3FF554);
UnityEngine::Vector3Int.get_y = (int(*)(void*))UnityEngine::Vector3Int.get_yOffset;

UnityEngine::Vector3Int.set_yOffset = getRealOffset(0x3FF55C);
UnityEngine::Vector3Int.set_y = (void(*)(void*, int))UnityEngine::Vector3Int.set_yOffset;

UnityEngine::Vector3Int.get_zOffset = getRealOffset(0x3FF564);
UnityEngine::Vector3Int.get_z = (int(*)(void*))UnityEngine::Vector3Int.get_zOffset;

UnityEngine::Vector3Int.set_zOffset = getRealOffset(0x3FF56C);
UnityEngine::Vector3Int.set_z = (void(*)(void*, int))UnityEngine::Vector3Int.set_zOffset;

UnityEngine::Vector3Int.op_ImplicitOffset = getRealOffset(0x16FC4B8);
UnityEngine::Vector3Int.op_Implicit = (Vector3 (*)(int))UnityEngine::Vector3Int.op_ImplicitOffset;

UnityEngine::Vector3Int.op_AdditionOffset = getRealOffset(0x16FC53C);
UnityEngine::Vector3Int.op_Addition = (int (*)(int, int))UnityEngine::Vector3Int.op_AdditionOffset;

UnityEngine::Vector3Int.op_SubtractionOffset = getRealOffset(0x16FC560);
UnityEngine::Vector3Int.op_Subtraction = (int (*)(int, int))UnityEngine::Vector3Int.op_SubtractionOffset;

UnityEngine::Vector3Int.op_MultiplyOffset = getRealOffset(0x16FC584);
UnityEngine::Vector3Int.op_Multiply = (int (*)(int, int))UnityEngine::Vector3Int.op_MultiplyOffset;

UnityEngine::Vector3Int.op_EqualityOffset = getRealOffset(0x16FC59C);
UnityEngine::Vector3Int.op_Equality = (bool(*)(int, int))UnityEngine::Vector3Int.op_EqualityOffset;

UnityEngine::Vector3Int.op_InequalityOffset = getRealOffset(0x16FC5C8);
UnityEngine::Vector3Int.op_Inequality = (bool(*)(int, int))UnityEngine::Vector3Int.op_InequalityOffset;

UnityEngine::Vector3Int.Equals1Offset = getRealOffset(0x3FF588);
UnityEngine::Vector3Int.Equals1 = (bool(*)(void*, int))UnityEngine::Vector3Int.Equals1Offset;

UnityEngine::Vector3Int.GetHashCodeOffset = getRealOffset(0x3FF5A4);
UnityEngine::Vector3Int.GetHashCode = (int(*)(void*))UnityEngine::Vector3Int.GetHashCodeOffset;

UnityEngine::Vector3Int.ToStringOffset = getRealOffset(0x3FF5AC);
UnityEngine::Vector3Int.ToString = (monoString *(*)(void*))UnityEngine::Vector3Int.ToStringOffset;

UnityEngine::Vector3Int.ToString1Offset = getRealOffset(0x3FF5B4);
UnityEngine::Vector3Int.ToString1 = (monoString *(*)(void*, monoString*))UnityEngine::Vector3Int.ToString1Offset;

UnityEngine::Vector3Int.get_zeroOffset = getRealOffset(0x16FCB8C);
UnityEngine::Vector3Int.get_zero = (int (*)())UnityEngine::Vector3Int.get_zeroOffset;

UnityEngine::Vector4.get_ItemOffset = getRealOffset(0x3FF5BC);
UnityEngine::Vector4.get_Item = (float(*)(void*, int))UnityEngine::Vector4.get_ItemOffset;

UnityEngine::Vector4.set_ItemOffset = getRealOffset(0x3FF5C4);
UnityEngine::Vector4.set_Item = (void(*)(void*, int, float))UnityEngine::Vector4.set_ItemOffset;

UnityEngine::Vector4.ctor1Offset = getRealOffset(0x3FF5E0);
UnityEngine::Vector4.ctor1 = (void(*)(void*, float, float, float))UnityEngine::Vector4.ctor1Offset;

UnityEngine::Vector4.LerpOffset = getRealOffset(0x16FCEA0);
UnityEngine::Vector4.Lerp = (int (*)(int, int, float))UnityEngine::Vector4.LerpOffset;

UnityEngine::Vector4.GetHashCodeOffset = getRealOffset(0x3FF5F0);
UnityEngine::Vector4.GetHashCode = (int(*)(void*))UnityEngine::Vector4.GetHashCodeOffset;

UnityEngine::Vector4.Equals1Offset = getRealOffset(0x3FF600);
UnityEngine::Vector4.Equals1 = (bool(*)(void*, int))UnityEngine::Vector4.Equals1Offset;

UnityEngine::Vector4.DotOffset = getRealOffset(0x16FD124);
UnityEngine::Vector4.Dot = (float(*)(int, int))UnityEngine::Vector4.DotOffset;

UnityEngine::Vector4.get_magnitudeOffset = getRealOffset(0x3FF664);
UnityEngine::Vector4.get_magnitude = (float(*)(void*))UnityEngine::Vector4.get_magnitudeOffset;

UnityEngine::Vector4.get_sqrMagnitudeOffset = getRealOffset(0x3FF66C);
UnityEngine::Vector4.get_sqrMagnitude = (float(*)(void*))UnityEngine::Vector4.get_sqrMagnitudeOffset;

UnityEngine::Vector4.get_zeroOffset = getRealOffset(0x16FD2E0);
UnityEngine::Vector4.get_zero = (int (*)())UnityEngine::Vector4.get_zeroOffset;

UnityEngine::Vector4.get_oneOffset = getRealOffset(0x16FD360);
UnityEngine::Vector4.get_one = (int (*)())UnityEngine::Vector4.get_oneOffset;

UnityEngine::Vector4.op_AdditionOffset = getRealOffset(0x16FD3E4);
UnityEngine::Vector4.op_Addition = (int (*)(int, int))UnityEngine::Vector4.op_AdditionOffset;

UnityEngine::Vector4.op_UnaryNegationOffset = getRealOffset(0x16FD428);
UnityEngine::Vector4.op_UnaryNegation = (int (*)(int))UnityEngine::Vector4.op_UnaryNegationOffset;

UnityEngine::Vector4.op_MultiplyOffset = getRealOffset(0x16FD454);
UnityEngine::Vector4.op_Multiply = (int (*)(int, float))UnityEngine::Vector4.op_MultiplyOffset;

UnityEngine::Vector4.op_DivisionOffset = getRealOffset(0x16FD48C);
UnityEngine::Vector4.op_Division = (int (*)(int, float))UnityEngine::Vector4.op_DivisionOffset;

UnityEngine::Vector4.op_EqualityOffset = getRealOffset(0x16FD4C4);
UnityEngine::Vector4.op_Equality = (bool(*)(int, int))UnityEngine::Vector4.op_EqualityOffset;

UnityEngine::Vector4.op_InequalityOffset = getRealOffset(0x16FD520);
UnityEngine::Vector4.op_Inequality = (bool(*)(int, int))UnityEngine::Vector4.op_InequalityOffset;

UnityEngine::Vector4.op_ImplicitOffset = getRealOffset(0x16FD610);
UnityEngine::Vector4.op_Implicit = (int (*)(Vector3))UnityEngine::Vector4.op_ImplicitOffset;

UnityEngine::Vector4.op_Implicit1Offset = getRealOffset(0x16FD61C);
UnityEngine::Vector4.op_Implicit1 = (Vector3 (*)(int))UnityEngine::Vector4.op_Implicit1Offset;

UnityEngine::Vector4.op_Implicit2Offset = getRealOffset(0x16FD67C);
UnityEngine::Vector4.op_Implicit2 = (int (*)(Vector2))UnityEngine::Vector4.op_Implicit2Offset;

UnityEngine::Vector4.ToStringOffset = getRealOffset(0x3FF674);
UnityEngine::Vector4.ToString = (monoString *(*)(void*))UnityEngine::Vector4.ToStringOffset;

UnityEngine::Ping.FinalizeOffset = getRealOffset(0x1172DFC);
UnityEngine::Ping.Finalize = (void(*)(void*))UnityEngine::Ping.FinalizeOffset;

UnityEngine::Ping.DestroyPingOffset = getRealOffset(0x1172E5C);
UnityEngine::Ping.DestroyPing = (void(*)(void*))UnityEngine::Ping.DestroyPingOffset;

UnityEngine::Ping.Internal_CreateOffset = getRealOffset(0x1172DAC);
UnityEngine::Ping.get_isDoneOffset = getRealOffset(0x1172F54);
UnityEngine::Ping.get_isDone = (bool(*)(void*))UnityEngine::Ping.get_isDoneOffset;

UnityEngine::Ping.Internal_IsDoneOffset = getRealOffset(0x1172FF8);
UnityEngine::Ping.Internal_IsDone = (bool(*)(void*))UnityEngine::Ping.Internal_IsDoneOffset;

UnityEngine::Ping.get_timeOffset = getRealOffset(0x1173048);
UnityEngine::Ping.get_time = (int(*)(void*))UnityEngine::Ping.get_timeOffset;

UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativePollOffset = getRealOffset(0x1174D5C);
UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativePoll = (void(*)(void*))UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativePollOffset;

UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeRegisterInternalOffset = getRealOffset(0x1174DEC);
UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeRegisterInternal = (void(*)(void*, int))UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeRegisterInternalOffset;

UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeUnregisterInternalOffset = getRealOffset(0x1174EF4);
UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeUnregisterInternal = (void(*)(void*, int))UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeUnregisterInternalOffset;

UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeInitializeOffset = getRealOffset(0x1174FFC);
UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeInitialize = (void(*)(void*))UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeInitializeOffset;

UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeIsConnectedOffset = getRealOffset(0x117508C);
UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeIsConnected = (bool(*)(void*))UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeIsConnectedOffset;

UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeDisconnectAllOffset = getRealOffset(0x117511C);
UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeDisconnectAll = (void(*)(void*))UnityEngine::PlayerConnectionInternal.UnityEngineIPlayerEditorConnectionNativeDisconnectAllOffset;

UnityEngine::PlayerConnectionInternal.IsConnectedOffset = getRealOffset(0x11750D4);
UnityEngine::PlayerConnectionInternal.IsConnected = (bool(*)())UnityEngine::PlayerConnectionInternal.IsConnectedOffset;

UnityEngine::PlayerConnectionInternal.InitializeOffset = getRealOffset(0x1175044);
UnityEngine::PlayerConnectionInternal.Initialize = (void(*)())UnityEngine::PlayerConnectionInternal.InitializeOffset;

UnityEngine::PlayerConnectionInternal.RegisterInternalOffset = getRealOffset(0x1174EA4);
UnityEngine::PlayerConnectionInternal.RegisterInternal = (void(*)(monoString*))UnityEngine::PlayerConnectionInternal.RegisterInternalOffset;

UnityEngine::PlayerConnectionInternal.UnregisterInternalOffset = getRealOffset(0x1174FAC);
UnityEngine::PlayerConnectionInternal.UnregisterInternal = (void(*)(monoString*))UnityEngine::PlayerConnectionInternal.UnregisterInternalOffset;

UnityEngine::PlayerConnectionInternal.PollInternalOffset = getRealOffset(0x1174DA4);
UnityEngine::PlayerConnectionInternal.PollInternal = (void(*)())UnityEngine::PlayerConnectionInternal.PollInternalOffset;

UnityEngine::PlayerConnectionInternal.DisconnectAllOffset = getRealOffset(0x1175164);
UnityEngine::PlayerConnectionInternal.DisconnectAll = (void(*)())UnityEngine::PlayerConnectionInternal.DisconnectAllOffset;

UnityEngine::PlayerPrefs.TrySetIntOffset = getRealOffset(0x11751AC);
UnityEngine::PlayerPrefs.TrySetInt = (bool(*)(monoString*, int))UnityEngine::PlayerPrefs.TrySetIntOffset;

UnityEngine::PlayerPrefs.TrySetFloatOffset = getRealOffset(0x1175204);
UnityEngine::PlayerPrefs.TrySetFloat = (bool(*)(monoString*, float))UnityEngine::PlayerPrefs.TrySetFloatOffset;

UnityEngine::PlayerPrefs.TrySetSetStringOffset = getRealOffset(0x117525C);
UnityEngine::PlayerPrefs.TrySetSetString = (bool(*)(monoString*, monoString*))UnityEngine::PlayerPrefs.TrySetSetStringOffset;

UnityEngine::PlayerPrefs.SetIntOffset = getRealOffset(0x11752B4);
UnityEngine::PlayerPrefs.SetInt = (void(*)(monoString*, int))UnityEngine::PlayerPrefs.SetIntOffset;

UnityEngine::PlayerPrefs.GetIntOffset = getRealOffset(0x1175414);
UnityEngine::PlayerPrefs.GetInt = (int(*)(monoString*, int))UnityEngine::PlayerPrefs.GetIntOffset;

UnityEngine::PlayerPrefs.GetInt1Offset = getRealOffset(0x117546C);
UnityEngine::PlayerPrefs.GetInt1 = (int(*)(monoString*))UnityEngine::PlayerPrefs.GetInt1Offset;

UnityEngine::PlayerPrefs.SetFloatOffset = getRealOffset(0x11754C0);
UnityEngine::PlayerPrefs.SetFloat = (void(*)(monoString*, float))UnityEngine::PlayerPrefs.SetFloatOffset;

UnityEngine::PlayerPrefs.GetFloatOffset = getRealOffset(0x117559C);
UnityEngine::PlayerPrefs.GetFloat = (float(*)(monoString*, float))UnityEngine::PlayerPrefs.GetFloatOffset;

UnityEngine::PlayerPrefs.GetFloat1Offset = getRealOffset(0x11755F4);
UnityEngine::PlayerPrefs.GetFloat1 = (float(*)(monoString*))UnityEngine::PlayerPrefs.GetFloat1Offset;

UnityEngine::PlayerPrefs.SetStringOffset = getRealOffset(0x1175648);
UnityEngine::PlayerPrefs.SetString = (void(*)(monoString*, monoString*))UnityEngine::PlayerPrefs.SetStringOffset;

UnityEngine::PlayerPrefs.GetStringOffset = getRealOffset(0x1175724);
UnityEngine::PlayerPrefs.GetString = (monoString *(*)(monoString*, monoString*))UnityEngine::PlayerPrefs.GetStringOffset;

UnityEngine::PlayerPrefs.GetString1Offset = getRealOffset(0x117577C);
UnityEngine::PlayerPrefs.GetString1 = (monoString *(*)(monoString*))UnityEngine::PlayerPrefs.GetString1Offset;

UnityEngine::PlayerPrefs.HasKeyOffset = getRealOffset(0x1175814);
UnityEngine::PlayerPrefs.HasKey = (bool(*)(monoString*))UnityEngine::PlayerPrefs.HasKeyOffset;

UnityEngine::PlayerPrefs.DeleteKeyOffset = getRealOffset(0x1175864);
UnityEngine::PlayerPrefs.DeleteKey = (void(*)(monoString*))UnityEngine::PlayerPrefs.DeleteKeyOffset;

UnityEngine::PlayerPrefs.DeleteAllOffset = getRealOffset(0x11758B4);
UnityEngine::PlayerPrefs.DeleteAll = (void(*)())UnityEngine::PlayerPrefs.DeleteAllOffset;

UnityEngine::PlayerPrefs.SaveOffset = getRealOffset(0x11758FC);
UnityEngine::PlayerPrefs.Save = (void(*)())UnityEngine::PlayerPrefs.SaveOffset;

UnityEngine::SpaceAttribute.ctor1Offset = getRealOffset(0x1055990);
UnityEngine::SpaceAttribute.ctor1 = (void(*)(void*, float))UnityEngine::SpaceAttribute.ctor1Offset;

UnityEngine::Random.RangeOffset = getRealOffset(0x1178584);
UnityEngine::Random.Range = (float(*)(float, float))UnityEngine::Random.RangeOffset;

UnityEngine::Random.Range1Offset = getRealOffset(0x11785DC);
UnityEngine::Random.Range1 = (int(*)(int, int))UnityEngine::Random.Range1Offset;

UnityEngine::Random.RandomRangeIntOffset = getRealOffset(0x1178634);
UnityEngine::Random.RandomRangeInt = (int(*)(int, int))UnityEngine::Random.RandomRangeIntOffset;

UnityEngine::Random.get_valueOffset = getRealOffset(0x117868C);
UnityEngine::Random.get_value = (float(*)())UnityEngine::Random.get_valueOffset;

UnityEngine::Random.get_insideUnitSphereOffset = getRealOffset(0x11786D4);
UnityEngine::Random.get_insideUnitSphere = (Vector3 (*)())UnityEngine::Random.get_insideUnitSphereOffset;

UnityEngine::Random.get_insideUnitCircleOffset = getRealOffset(0x11787EC);
UnityEngine::Random.get_insideUnitCircle = (Vector2 (*)())UnityEngine::Random.get_insideUnitCircleOffset;

UnityEngine::Random.get_onUnitSphereOffset = getRealOffset(0x1178858);
UnityEngine::Random.get_onUnitSphere = (Vector3 (*)())UnityEngine::Random.get_onUnitSphereOffset;

UnityEngine::Random.get_rotationOffset = getRealOffset(0x1178920);
UnityEngine::Random.get_rotation = (int (*)())UnityEngine::Random.get_rotationOffset;

UnityEngine::Random.ColorHSVOffset = getRealOffset(0x11789DC);
UnityEngine::Random.ColorHSV = (Color (*)(float, float, float, float, float, float, float, float))UnityEngine::Random.ColorHSVOffset;

UnityEngine::Random.get_insideUnitSphere_InjectedOffset = getRealOffset(0x117874C);
UnityEngine::Random.get_insideUnitSphere_Injected = (void(*)(Vector3 *))UnityEngine::Random.get_insideUnitSphere_InjectedOffset;

UnityEngine::Random.get_onUnitSphere_InjectedOffset = getRealOffset(0x11788D0);
UnityEngine::Random.get_onUnitSphere_Injected = (void(*)(Vector3 *))UnityEngine::Random.get_onUnitSphere_InjectedOffset;

UnityEngine::ResourceRequest.get_assetOffset = getRealOffset(0x1051E10);
UnityEngine::ResourceRequest.get_asset = (void *(*)(void*))UnityEngine::ResourceRequest.get_assetOffset;

UnityEngine::Resources.FindObjectsOfTypeAllOffset = getRealOffset(0x1051EC8);
UnityEngine::Resources.LoadOffset = getRealOffset(0x1051F18);
UnityEngine::Resources.Load = (void *(*)(monoString*))UnityEngine::Resources.LoadOffset;

UnityEngine::Resources.Load2Offset = getRealOffset(0x1051E68);
UnityEngine::Resources.Load2 = (void *(*)(monoString*, void *))UnityEngine::Resources.Load2Offset;

UnityEngine::Resources.LoadAsyncOffset = getRealOffset(0x1051FEC);
UnityEngine::Resources.LoadAsync = (void *(*)(monoString*))UnityEngine::Resources.LoadAsyncOffset;

UnityEngine::Resources.LoadAsync1Offset = getRealOffset(0x1052084);
UnityEngine::Resources.LoadAsync1 = (void *(*)(monoString*, void *))UnityEngine::Resources.LoadAsync1Offset;

UnityEngine::Resources.LoadAsyncInternalOffset = getRealOffset(0x1052108);
UnityEngine::Resources.LoadAsyncInternal = (void *(*)(monoString*, void *))UnityEngine::Resources.LoadAsyncInternalOffset;

UnityEngine::Resources.GetBuiltinResourceOffset = getRealOffset(0x1052160);
UnityEngine::Resources.GetBuiltinResource = (void *(*)(void *, monoString*))UnityEngine::Resources.GetBuiltinResourceOffset;

UnityEngine::Resources.UnloadAssetOffset = getRealOffset(0x10521B8);
UnityEngine::Resources.UnloadAsset = (void(*)(void *))UnityEngine::Resources.UnloadAssetOffset;

UnityEngine::Resources.UnloadUnusedAssetsOffset = getRealOffset(0x1052208);
UnityEngine::Resources.UnloadUnusedAssets = (void *(*)())UnityEngine::Resources.UnloadUnusedAssetsOffset;

UnityEngine::AsyncOperation.get_isDoneOffset = getRealOffset(0x1131354);
UnityEngine::AsyncOperation.get_isDone = (bool(*)(void*))UnityEngine::AsyncOperation.get_isDoneOffset;

UnityEngine::AsyncOperation.get_progressOffset = getRealOffset(0x11313A4);
UnityEngine::AsyncOperation.get_progress = (float(*)(void*))UnityEngine::AsyncOperation.get_progressOffset;

UnityEngine::AsyncOperation.FinalizeOffset = getRealOffset(0x11313F4);
UnityEngine::AsyncOperation.Finalize = (void(*)(void*))UnityEngine::AsyncOperation.FinalizeOffset;

UnityEngine::AsyncOperation.InvokeCompletionEventOffset = getRealOffset(0x1131494);
UnityEngine::AsyncOperation.InvokeCompletionEvent = (void(*)(void*))UnityEngine::AsyncOperation.InvokeCompletionEventOffset;

UnityEngine::AttributeHelperEngine.GetParentTypeDisallowingMultipleInclusionOffset = getRealOffset(0x113150C);
UnityEngine::AttributeHelperEngine.GetParentTypeDisallowingMultipleInclusion = (void *(*)(void *))UnityEngine::AttributeHelperEngine.GetParentTypeDisallowingMultipleInclusionOffset;

UnityEngine::AttributeHelperEngine.GetRequiredComponentsOffset = getRealOffset(0x1131624);
UnityEngine::AttributeHelperEngine.GetExecuteModeOffset = getRealOffset(0x1131A50);
UnityEngine::AttributeHelperEngine.GetExecuteMode = (int(*)(void *))UnityEngine::AttributeHelperEngine.GetExecuteModeOffset;

UnityEngine::AttributeHelperEngine.CheckIsEditorScriptOffset = getRealOffset(0x1131BA0);
UnityEngine::AttributeHelperEngine.CheckIsEditorScript = (int(*)(void *))UnityEngine::AttributeHelperEngine.CheckIsEditorScriptOffset;

UnityEngine::AttributeHelperEngine.GetDefaultExecutionOrderForOffset = getRealOffset(0x1131CB0);
UnityEngine::AttributeHelperEngine.GetDefaultExecutionOrderFor = (int(*)(void *))UnityEngine::AttributeHelperEngine.GetDefaultExecutionOrderForOffset;

UnityEngine::RequireComponent.ctor1Offset = getRealOffset(0x1051BE4);
UnityEngine::RequireComponent.ctor1 = (void(*)(void*, void *, void *))UnityEngine::RequireComponent.ctor1Offset;

UnityEngine::RequireComponent.ctor2Offset = getRealOffset(0x1051C0C);
UnityEngine::RequireComponent.ctor2 = (void(*)(void*, void *, void *, void *))UnityEngine::RequireComponent.ctor2Offset;

UnityEngine::AddComponentMenu.ctor1Offset = getRealOffset(0x112E284);
UnityEngine::AddComponentMenu.ctor1 = (void(*)(void*, monoString*, int))UnityEngine::AddComponentMenu.ctor1Offset;

UnityEngine::CreateAssetMenuAttribute.set_menuNameOffset = getRealOffset(0x1138960);
UnityEngine::CreateAssetMenuAttribute.set_menuName = (void(*)(void*, monoString*))UnityEngine::CreateAssetMenuAttribute.set_menuNameOffset;

UnityEngine::CreateAssetMenuAttribute.set_fileNameOffset = getRealOffset(0x1138968);
UnityEngine::CreateAssetMenuAttribute.set_fileName = (void(*)(void*, monoString*))UnityEngine::CreateAssetMenuAttribute.set_fileNameOffset;

UnityEngine::CreateAssetMenuAttribute.set_orderOffset = getRealOffset(0x1138970);
UnityEngine::CreateAssetMenuAttribute.set_order = (void(*)(void*, int))UnityEngine::CreateAssetMenuAttribute.set_orderOffset;

UnityEngine::ContextMenu.ctor1Offset = getRealOffset(0x11387DC);
UnityEngine::ContextMenu.ctor1 = (void(*)(void*, monoString*, bool))UnityEngine::ContextMenu.ctor1Offset;

UnityEngine::ContextMenu.ctor2Offset = getRealOffset(0x1138810);
UnityEngine::ContextMenu.ctor2 = (void(*)(void*, monoString*, bool, int))UnityEngine::ContextMenu.ctor2Offset;

UnityEngine::DefaultExecutionOrder.get_orderOffset = getRealOffset(0x1131D44);
UnityEngine::DefaultExecutionOrder.get_order = (int(*)(void*))UnityEngine::DefaultExecutionOrder.get_orderOffset;

UnityEngine::Behaviour.get_enabledOffset = getRealOffset(0x11320C4);
UnityEngine::Behaviour.get_enabled = (bool(*)(void*))UnityEngine::Behaviour.get_enabledOffset;

UnityEngine::Behaviour.set_enabledOffset = getRealOffset(0x1132114);
UnityEngine::Behaviour.set_enabled = (void(*)(void*, bool))UnityEngine::Behaviour.set_enabledOffset;

UnityEngine::Behaviour.get_isActiveAndEnabledOffset = getRealOffset(0x113216C);
UnityEngine::Behaviour.get_isActiveAndEnabled = (bool(*)(void*))UnityEngine::Behaviour.get_isActiveAndEnabledOffset;

UnityEngine::ClassLibraryInitializer.InitOffset = getRealOffset(0x1136320);
UnityEngine::ClassLibraryInitializer.Init = (void(*)())UnityEngine::ClassLibraryInitializer.InitOffset;

UnityEngine::Component.get_transformOffset = getRealOffset(0x1137E08);
UnityEngine::Component.get_transform = (void *(*)(void*))UnityEngine::Component.get_transformOffset;

UnityEngine::Component.get_gameObjectOffset = getRealOffset(0x1137E58);
UnityEngine::Component.get_gameObject = (void *(*)(void*))UnityEngine::Component.get_gameObjectOffset;

UnityEngine::Component.GetComponentOffset = getRealOffset(0x1137EA8);
UnityEngine::Component.GetComponent = (void *(*)(void*, void *))UnityEngine::Component.GetComponentOffset;

UnityEngine::Component.GetComponent2Offset = getRealOffset(0x1138008);
UnityEngine::Component.GetComponent2 = (void *(*)(void*, monoString*))UnityEngine::Component.GetComponent2Offset;

UnityEngine::Component.GetComponentInChildrenOffset = getRealOffset(0x1138060);
UnityEngine::Component.GetComponentInChildren = (void *(*)(void*, void *, bool))UnityEngine::Component.GetComponentInChildrenOffset;

UnityEngine::Component.GetComponentInParentOffset = getRealOffset(0x1138170);
UnityEngine::Component.GetComponentInParent = (void *(*)(void*, void *))UnityEngine::Component.GetComponentInParentOffset;

UnityEngine::Component.GetComponentsOffset = getRealOffset(0x1138270);
UnityEngine::Component.get_tagOffset = getRealOffset(0x1138494);
UnityEngine::Component.get_tag = (monoString *(*)(void*))UnityEngine::Component.get_tagOffset;

UnityEngine::Component.CompareTagOffset = getRealOffset(0x1138584);
UnityEngine::Component.CompareTag = (bool(*)(void*, monoString*))UnityEngine::Component.CompareTagOffset;

UnityEngine::Coroutine.FinalizeOffset = getRealOffset(0x1138870);
UnityEngine::Coroutine.Finalize = (void(*)(void*))UnityEngine::Coroutine.FinalizeOffset;

UnityEngine::CustomYieldInstruction.get_CurrentOffset = getRealOffset(0x113A350);
UnityEngine::CustomYieldInstruction.MoveNextOffset = getRealOffset(0x113A358);
UnityEngine::CustomYieldInstruction.MoveNext = (bool(*)(void*))UnityEngine::CustomYieldInstruction.MoveNextOffset;

UnityEngine::CustomYieldInstruction.ResetOffset = getRealOffset(0x113A368);
UnityEngine::CustomYieldInstruction.Reset = (void(*)(void*))UnityEngine::CustomYieldInstruction.ResetOffset;

UnityEngine::GameObject.CreatePrimitiveOffset = getRealOffset(0x114202C);
UnityEngine::GameObject.CreatePrimitive = (void *(*)(int))UnityEngine::GameObject.CreatePrimitiveOffset;

UnityEngine::GameObject.GetComponent1Offset = getRealOffset(0x1137F50);
UnityEngine::GameObject.GetComponent1 = (void *(*)(void*, void *))UnityEngine::GameObject.GetComponent1Offset;

UnityEngine::GameObject.GetComponentByNameOffset = getRealOffset(0x11420DC);
UnityEngine::GameObject.GetComponentByName = (void *(*)(void*, monoString*))UnityEngine::GameObject.GetComponentByNameOffset;

UnityEngine::GameObject.GetComponent11Offset = getRealOffset(0x1142134);
UnityEngine::GameObject.GetComponent11 = (void *(*)(void*, monoString*))UnityEngine::GameObject.GetComponent11Offset;

UnityEngine::GameObject.GetComponentInChildrenOffset = getRealOffset(0x1138110);
UnityEngine::GameObject.GetComponentInChildren = (void *(*)(void*, void *, bool))UnityEngine::GameObject.GetComponentInChildrenOffset;

UnityEngine::GameObject.GetComponentInParentOffset = getRealOffset(0x1138218);
UnityEngine::GameObject.GetComponentInParent = (void *(*)(void*, void *))UnityEngine::GameObject.GetComponentInParentOffset;

UnityEngine::GameObject.GetComponentsOffset = getRealOffset(0x11382E0);
UnityEngine::GameObject.SendMessageOffset = getRealOffset(0x1142214);
UnityEngine::GameObject.SendMessage = (void(*)(void*, monoString*, int))UnityEngine::GameObject.SendMessageOffset;

UnityEngine::GameObject.Internal_AddComponentWithTypeOffset = getRealOffset(0x11422E0);
UnityEngine::GameObject.Internal_AddComponentWithType = (void *(*)(void*, void *))UnityEngine::GameObject.Internal_AddComponentWithTypeOffset;

UnityEngine::GameObject.AddComponentOffset = getRealOffset(0x1142338);
UnityEngine::GameObject.AddComponent = (void *(*)(void*, void *))UnityEngine::GameObject.AddComponentOffset;

UnityEngine::GameObject.get_transformOffset = getRealOffset(0x1142390);
UnityEngine::GameObject.get_transform = (void *(*)(void*))UnityEngine::GameObject.get_transformOffset;

UnityEngine::GameObject.get_layerOffset = getRealOffset(0x11423E0);
UnityEngine::GameObject.get_layer = (int(*)(void*))UnityEngine::GameObject.get_layerOffset;

UnityEngine::GameObject.set_layerOffset = getRealOffset(0x1142430);
UnityEngine::GameObject.set_layer = (void(*)(void*, int))UnityEngine::GameObject.set_layerOffset;

UnityEngine::GameObject.SetActiveOffset = getRealOffset(0x1142488);
UnityEngine::GameObject.SetActive = (void(*)(void*, bool))UnityEngine::GameObject.SetActiveOffset;

UnityEngine::GameObject.get_activeSelfOffset = getRealOffset(0x11424E0);
UnityEngine::GameObject.get_activeSelf = (bool(*)(void*))UnityEngine::GameObject.get_activeSelfOffset;

UnityEngine::GameObject.get_activeInHierarchyOffset = getRealOffset(0x1142530);
UnityEngine::GameObject.get_activeInHierarchy = (bool(*)(void*))UnityEngine::GameObject.get_activeInHierarchyOffset;

UnityEngine::GameObject.get_isStaticOffset = getRealOffset(0x1142580);
UnityEngine::GameObject.get_isStatic = (bool(*)(void*))UnityEngine::GameObject.get_isStaticOffset;

UnityEngine::GameObject.set_isStaticOffset = getRealOffset(0x11425D0);
UnityEngine::GameObject.set_isStatic = (void(*)(void*, bool))UnityEngine::GameObject.set_isStaticOffset;

UnityEngine::GameObject.get_isStaticBatchableOffset = getRealOffset(0x1142628);
UnityEngine::GameObject.get_isStaticBatchable = (bool(*)(void*))UnityEngine::GameObject.get_isStaticBatchableOffset;

UnityEngine::GameObject.get_tagOffset = getRealOffset(0x1138534);
UnityEngine::GameObject.get_tag = (monoString *(*)(void*))UnityEngine::GameObject.get_tagOffset;

UnityEngine::GameObject.set_tagOffset = getRealOffset(0x1142678);
UnityEngine::GameObject.set_tag = (void(*)(void*, monoString*))UnityEngine::GameObject.set_tagOffset;

UnityEngine::GameObject.CompareTagOffset = getRealOffset(0x113862C);
UnityEngine::GameObject.CompareTag = (bool(*)(void*, monoString*))UnityEngine::GameObject.CompareTagOffset;

UnityEngine::GameObject.FindGameObjectWithTagOffset = getRealOffset(0x11426D0);
UnityEngine::GameObject.FindGameObjectWithTag = (void *(*)(monoString*))UnityEngine::GameObject.FindGameObjectWithTagOffset;

UnityEngine::GameObject.FindGameObjectsWithTagOffset = getRealOffset(0x1142720);
UnityEngine::GameObject.SendMessage2Offset = getRealOffset(0x1142770);
UnityEngine::GameObject.SendMessage2 = (void(*)(void*, monoString*))UnityEngine::GameObject.SendMessage2Offset;

UnityEngine::GameObject.ctor1Offset = getRealOffset(0x11428EC);
UnityEngine::GameObject.ctor1 = (void(*)(void*))UnityEngine::GameObject.ctor1Offset;

UnityEngine::GameObject.Internal_CreateGameObjectOffset = getRealOffset(0x1142894);
UnityEngine::GameObject.Internal_CreateGameObject = (void(*)(void *, monoString*))UnityEngine::GameObject.Internal_CreateGameObjectOffset;

UnityEngine::GameObject.FindOffset = getRealOffset(0x1142B04);
UnityEngine::GameObject.Find = (void *(*)(monoString*))UnityEngine::GameObject.FindOffset;

UnityEngine::GameObject.get_sceneOffset = getRealOffset(0x1142B54);
UnityEngine::GameObject.get_scene = (int (*)(void*))UnityEngine::GameObject.get_sceneOffset;

UnityEngine::GameObject.get_gameObjectOffset = getRealOffset(0x1142C14);
UnityEngine::GameObject.get_gameObject = (void *(*)(void*))UnityEngine::GameObject.get_gameObjectOffset;

UnityEngine::LayerMask.op_ImplicitOffset = getRealOffset(0x1161E54);
UnityEngine::LayerMask.op_Implicit = (int(*)(int))UnityEngine::LayerMask.op_ImplicitOffset;

UnityEngine::LayerMask.op_Implicit1Offset = getRealOffset(0x1161E58);
UnityEngine::LayerMask.op_Implicit1 = (int (*)(int))UnityEngine::LayerMask.op_Implicit1Offset;

UnityEngine::LayerMask.get_valueOffset = getRealOffset(0x3F2BAC);
UnityEngine::LayerMask.get_value = (int(*)(void*))UnityEngine::LayerMask.get_valueOffset;

UnityEngine::LayerMask.NameToLayerOffset = getRealOffset(0x1161E64);
UnityEngine::LayerMask.NameToLayer = (int(*)(monoString*))UnityEngine::LayerMask.NameToLayerOffset;

UnityEngine::ManagedStreamHelpers.ValidateLoadFromStreamOffset = getRealOffset(0x1163E78);
UnityEngine::ManagedStreamHelpers.ValidateLoadFromStream = (void(*)(void *))UnityEngine::ManagedStreamHelpers.ValidateLoadFromStreamOffset;

UnityEngine::MonoBehaviour.IsInvokingOffset = getRealOffset(0x116E1B0);
UnityEngine::MonoBehaviour.IsInvoking = (bool(*)(void*))UnityEngine::MonoBehaviour.IsInvokingOffset;

UnityEngine::MonoBehaviour.CancelInvokeOffset = getRealOffset(0x116E250);
UnityEngine::MonoBehaviour.CancelInvoke = (void(*)(void*))UnityEngine::MonoBehaviour.CancelInvokeOffset;

UnityEngine::MonoBehaviour.InvokeOffset = getRealOffset(0x116E2F0);
UnityEngine::MonoBehaviour.Invoke = (void(*)(void*, monoString*, float))UnityEngine::MonoBehaviour.InvokeOffset;

UnityEngine::MonoBehaviour.InvokeRepeatingOffset = getRealOffset(0x116E3BC);
UnityEngine::MonoBehaviour.InvokeRepeating = (void(*)(void*, monoString*, float, float))UnityEngine::MonoBehaviour.InvokeRepeatingOffset;

UnityEngine::MonoBehaviour.CancelInvoke1Offset = getRealOffset(0x116E4D4);
UnityEngine::MonoBehaviour.CancelInvoke1 = (void(*)(void*, monoString*))UnityEngine::MonoBehaviour.CancelInvoke1Offset;

UnityEngine::MonoBehaviour.IsInvoking1Offset = getRealOffset(0x116E584);
UnityEngine::MonoBehaviour.IsInvoking1 = (bool(*)(void*, monoString*))UnityEngine::MonoBehaviour.IsInvoking1Offset;

UnityEngine::MonoBehaviour.StartCoroutineOffset = getRealOffset(0x116E634);
UnityEngine::MonoBehaviour.StartCoroutine = (void *(*)(void*, monoString*))UnityEngine::MonoBehaviour.StartCoroutineOffset;

UnityEngine::MonoBehaviour.StartCoroutine2Offset = getRealOffset(0x116E864);
UnityEngine::MonoBehaviour.StartCoroutine2 = (void *(*)(void*, void *))UnityEngine::MonoBehaviour.StartCoroutine2Offset;

UnityEngine::MonoBehaviour.StartCoroutine_AutoOffset = getRealOffset(0x116EA20);
UnityEngine::MonoBehaviour.StartCoroutine_Auto = (void *(*)(void*, void *))UnityEngine::MonoBehaviour.StartCoroutine_AutoOffset;

UnityEngine::MonoBehaviour.StopCoroutineOffset = getRealOffset(0x116EA24);
UnityEngine::MonoBehaviour.StopCoroutine = (void(*)(void*, void *))UnityEngine::MonoBehaviour.StopCoroutineOffset;

UnityEngine::MonoBehaviour.StopCoroutine1Offset = getRealOffset(0x116EBE0);
UnityEngine::MonoBehaviour.StopCoroutine1 = (void(*)(void*, void *))UnityEngine::MonoBehaviour.StopCoroutine1Offset;

UnityEngine::MonoBehaviour.StopCoroutine2Offset = getRealOffset(0x116ED9C);
UnityEngine::MonoBehaviour.StopCoroutine2 = (void(*)(void*, monoString*))UnityEngine::MonoBehaviour.StopCoroutine2Offset;

UnityEngine::MonoBehaviour.StopAllCoroutinesOffset = getRealOffset(0x116EDF4);
UnityEngine::MonoBehaviour.StopAllCoroutines = (void(*)(void*))UnityEngine::MonoBehaviour.StopAllCoroutinesOffset;

UnityEngine::MonoBehaviour.get_useGUILayoutOffset = getRealOffset(0x116EE44);
UnityEngine::MonoBehaviour.get_useGUILayout = (bool(*)(void*))UnityEngine::MonoBehaviour.get_useGUILayoutOffset;

UnityEngine::MonoBehaviour.set_useGUILayoutOffset = getRealOffset(0x116EE94);
UnityEngine::MonoBehaviour.set_useGUILayout = (void(*)(void*, bool))UnityEngine::MonoBehaviour.set_useGUILayoutOffset;

UnityEngine::MonoBehaviour.Internal_CancelInvokeAllOffset = getRealOffset(0x116E2A0);
UnityEngine::MonoBehaviour.Internal_CancelInvokeAll = (void(*)(void *))UnityEngine::MonoBehaviour.Internal_CancelInvokeAllOffset;

UnityEngine::MonoBehaviour.Internal_IsInvokingAllOffset = getRealOffset(0x116E200);
UnityEngine::MonoBehaviour.Internal_IsInvokingAll = (bool(*)(void *))UnityEngine::MonoBehaviour.Internal_IsInvokingAllOffset;

UnityEngine::MonoBehaviour.InvokeDelayedOffset = getRealOffset(0x116E354);
UnityEngine::MonoBehaviour.InvokeDelayed = (void(*)(void *, monoString*, float, float))UnityEngine::MonoBehaviour.InvokeDelayedOffset;

UnityEngine::MonoBehaviour.CancelInvoke11Offset = getRealOffset(0x116E52C);
UnityEngine::MonoBehaviour.CancelInvoke11 = (void(*)(void *, monoString*))UnityEngine::MonoBehaviour.CancelInvoke11Offset;

UnityEngine::MonoBehaviour.IsInvoking11Offset = getRealOffset(0x116E5DC);
UnityEngine::MonoBehaviour.IsInvoking11 = (bool(*)(void *, monoString*))UnityEngine::MonoBehaviour.IsInvoking11Offset;

UnityEngine::MonoBehaviour.IsObjectMonoBehaviourOffset = getRealOffset(0x116E7B4);
UnityEngine::MonoBehaviour.IsObjectMonoBehaviour = (bool(*)(void *))UnityEngine::MonoBehaviour.IsObjectMonoBehaviourOffset;

UnityEngine::MonoBehaviour.StartCoroutineManaged2Offset = getRealOffset(0x116E9C8);
UnityEngine::MonoBehaviour.StartCoroutineManaged2 = (void *(*)(void*, void *))UnityEngine::MonoBehaviour.StartCoroutineManaged2Offset;

UnityEngine::MonoBehaviour.StopCoroutineManagedOffset = getRealOffset(0x116ED44);
UnityEngine::MonoBehaviour.StopCoroutineManaged = (void(*)(void*, void *))UnityEngine::MonoBehaviour.StopCoroutineManagedOffset;

UnityEngine::MonoBehaviour.StopCoroutineFromEnumeratorManagedOffset = getRealOffset(0x116EB88);
UnityEngine::MonoBehaviour.StopCoroutineFromEnumeratorManaged = (void(*)(void*, void *))UnityEngine::MonoBehaviour.StopCoroutineFromEnumeratorManagedOffset;

UnityEngine::MonoBehaviour.GetScriptClassNameOffset = getRealOffset(0x116EF68);
UnityEngine::MonoBehaviour.GetScriptClassName = (monoString *(*)(void*))UnityEngine::MonoBehaviour.GetScriptClassNameOffset;

UnityEngine::NoAllocHelpers.SafeLengthOffset = getRealOffset(0x116D390);
UnityEngine::NoAllocHelpers.SafeLength = (int(*)(void *))UnityEngine::NoAllocHelpers.SafeLengthOffset;

UnityEngine::RangeInt.get_endOffset = getRealOffset(0x3F3354);
UnityEngine::RangeInt.get_end = (int(*)(void*))UnityEngine::RangeInt.get_endOffset;

UnityEngine::RuntimeInitializeOnLoadMethodAttribute.ctor1Offset = getRealOffset(0x1052280);
UnityEngine::RuntimeInitializeOnLoadMethodAttribute.ctor1 = (void(*)(void*, int))UnityEngine::RuntimeInitializeOnLoadMethodAttribute.ctor1Offset;

UnityEngine::RuntimeInitializeOnLoadMethodAttribute.set_loadTypeOffset = getRealOffset(0x1052278);
UnityEngine::RuntimeInitializeOnLoadMethodAttribute.set_loadType = (void(*)(void*, int))UnityEngine::RuntimeInitializeOnLoadMethodAttribute.set_loadTypeOffset;

UnityEngine::ScriptableObject.CreateInstanceOffset = getRealOffset(0x1054930);
UnityEngine::ScriptableObject.CreateInstance = (void *(*)(void *))UnityEngine::ScriptableObject.CreateInstanceOffset;

UnityEngine::ScriptableObject.CreateScriptableObjectOffset = getRealOffset(0x10548E0);
UnityEngine::ScriptableObject.CreateScriptableObject = (void(*)(void *))UnityEngine::ScriptableObject.CreateScriptableObjectOffset;

UnityEngine::ScriptableObject.CreateScriptableObjectInstanceFromTypeOffset = getRealOffset(0x1054984);
UnityEngine::ScriptableObject.CreateScriptableObjectInstanceFromType = (void *(*)(void *, bool))UnityEngine::ScriptableObject.CreateScriptableObjectInstanceFromTypeOffset;

UnityEngine::ScriptingUtility.IsManagedCodeWorkingOffset = getRealOffset(0x1054A58);
UnityEngine::ScriptingUtility.IsManagedCodeWorking = (bool(*)())UnityEngine::ScriptingUtility.IsManagedCodeWorkingOffset;

UnityEngine::StackTraceUtility.SetProjectFolderOffset = getRealOffset(0x105725C);
UnityEngine::StackTraceUtility.SetProjectFolder = (void(*)(monoString*))UnityEngine::StackTraceUtility.SetProjectFolderOffset;

UnityEngine::StackTraceUtility.ExtractStackTraceOffset = getRealOffset(0x1057364);
UnityEngine::StackTraceUtility.ExtractStackTrace = (monoString *(*)())UnityEngine::StackTraceUtility.ExtractStackTraceOffset;

UnityEngine::StackTraceUtility.ExtractFormattedStackTraceOffset = getRealOffset(0x1057424);
UnityEngine::StackTraceUtility.ExtractFormattedStackTrace = (monoString *(*)(void *))UnityEngine::StackTraceUtility.ExtractFormattedStackTraceOffset;

UnityEngine::UnityException.ctor1Offset = getRealOffset(0x1059FF8);
UnityEngine::UnityException.ctor1 = (void(*)(void*, monoString*))UnityEngine::UnityException.ctor1Offset;

UnityEngine::UnityException.ctor2Offset = getRealOffset(0x1061088);
UnityEngine::UnityException.ctor2 = (void(*)(void*, void *, int))UnityEngine::UnityException.ctor2Offset;

UnityEngine::TextAsset.get_textOffset = getRealOffset(0x105966C);
UnityEngine::TextAsset.get_text = (monoString *(*)(void*))UnityEngine::TextAsset.get_textOffset;

UnityEngine::TextAsset.get_bytesOffset = getRealOffset(0x10596BC);
UnityEngine::TextAsset.ToStringOffset = getRealOffset(0x105970C);
UnityEngine::TextAsset.ToString = (monoString *(*)(void*))UnityEngine::TextAsset.ToStringOffset;

UnityEngine::TrackedReference.op_EqualityOffset = getRealOffset(0x105D6B0);
UnityEngine::TrackedReference.op_Equality = (bool(*)(void *, void *))UnityEngine::TrackedReference.op_EqualityOffset;

UnityEngine::TrackedReference.GetHashCodeOffset = getRealOffset(0x105D7DC);
UnityEngine::TrackedReference.GetHashCode = (int(*)(void*))UnityEngine::TrackedReference.GetHashCodeOffset;

UnityEngine::UnhandledExceptionHandler.RegisterUECatcherOffset = getRealOffset(0x1060D98);
UnityEngine::UnhandledExceptionHandler.RegisterUECatcher = (void(*)())UnityEngine::UnhandledExceptionHandler.RegisterUECatcherOffset;

UnityEngine::Object.GetInstanceIDOffset = getRealOffset(0x11716B4);
UnityEngine::Object.GetInstanceID = (int(*)(void*))UnityEngine::Object.GetInstanceIDOffset;

UnityEngine::Object.GetHashCodeOffset = getRealOffset(0x1171878);
UnityEngine::Object.GetHashCode = (int(*)(void*))UnityEngine::Object.GetHashCodeOffset;

UnityEngine::Object.op_ImplicitOffset = getRealOffset(0x1171A84);
UnityEngine::Object.op_Implicit = (bool(*)(void *))UnityEngine::Object.op_ImplicitOffset;

UnityEngine::Object.CompareBaseObjectsOffset = getRealOffset(0x11719A4);
UnityEngine::Object.CompareBaseObjects = (bool(*)(void *, void *))UnityEngine::Object.CompareBaseObjectsOffset;

UnityEngine::Object.IsNativeObjectAliveOffset = getRealOffset(0x1171B04);
UnityEngine::Object.IsNativeObjectAlive = (bool(*)(void *))UnityEngine::Object.IsNativeObjectAliveOffset;

UnityEngine::Object.GetCachedPtrOffset = getRealOffset(0x1171B64);
UnityEngine::Object.get_nameOffset = getRealOffset(0x116CF94);
UnityEngine::Object.get_name = (monoString *(*)(void*))UnityEngine::Object.get_nameOffset;

UnityEngine::Object.set_nameOffset = getRealOffset(0x1171BBC);
UnityEngine::Object.set_name = (void(*)(void*, monoString*))UnityEngine::Object.set_nameOffset;

UnityEngine::Object.InstantiateOffset = getRealOffset(0x1171CCC);
UnityEngine::Object.Instantiate = (void *(*)(void *, Vector3, int))UnityEngine::Object.InstantiateOffset;

UnityEngine::Object.Instantiate1Offset = getRealOffset(0x1172008);
UnityEngine::Object.Instantiate1 = (void *(*)(void *, Vector3, int, void *))UnityEngine::Object.Instantiate1Offset;

UnityEngine::Object.Instantiate2Offset = getRealOffset(0x11722B4);
UnityEngine::Object.Instantiate2 = (void *(*)(void *))UnityEngine::Object.Instantiate2Offset;

UnityEngine::Object.Instantiate3Offset = getRealOffset(0x1172430);
UnityEngine::Object.Instantiate3 = (void *(*)(void *, void *, bool))UnityEngine::Object.Instantiate3Offset;

UnityEngine::Object.DestroyOffset = getRealOffset(0x117262C);
UnityEngine::Object.Destroy = (void(*)(void *, float))UnityEngine::Object.DestroyOffset;

UnityEngine::Object.Destroy1Offset = getRealOffset(0x1172684);
UnityEngine::Object.Destroy1 = (void(*)(void *))UnityEngine::Object.Destroy1Offset;

UnityEngine::Object.DestroyImmediateOffset = getRealOffset(0x1172738);
UnityEngine::Object.DestroyImmediate = (void(*)(void *, bool))UnityEngine::Object.DestroyImmediateOffset;

UnityEngine::Object.DestroyImmediate1Offset = getRealOffset(0x1172790);
UnityEngine::Object.DestroyImmediate1 = (void(*)(void *))UnityEngine::Object.DestroyImmediate1Offset;

UnityEngine::Object.FindObjectsOfTypeOffset = getRealOffset(0x1172844);
UnityEngine::Object.DontDestroyOnLoadOffset = getRealOffset(0x1172894);
UnityEngine::Object.DontDestroyOnLoad = (void(*)(void *))UnityEngine::Object.DontDestroyOnLoadOffset;

UnityEngine::Object.get_hideFlagsOffset = getRealOffset(0x11728E4);
UnityEngine::Object.get_hideFlags = (int (*)(void*))UnityEngine::Object.get_hideFlagsOffset;

UnityEngine::Object.set_hideFlagsOffset = getRealOffset(0x116F33C);
UnityEngine::Object.set_hideFlags = (void(*)(void*, int))UnityEngine::Object.set_hideFlagsOffset;

UnityEngine::Object.FindSceneObjectsOfTypeOffset = getRealOffset(0x1172934);
UnityEngine::Object.FindObjectOfType1Offset = getRealOffset(0x1172984);
UnityEngine::Object.FindObjectOfType1 = (void *(*)(void *))UnityEngine::Object.FindObjectOfType1Offset;

UnityEngine::Object.ToStringOffset = getRealOffset(0x1172A54);
UnityEngine::Object.ToString = (monoString *(*)(void*))UnityEngine::Object.ToStringOffset;

UnityEngine::Object.op_EqualityOffset = getRealOffset(0x116F09C);
UnityEngine::Object.op_Equality = (bool(*)(void *, void *))UnityEngine::Object.op_EqualityOffset;

UnityEngine::Object.op_InequalityOffset = getRealOffset(0x1172B54);
UnityEngine::Object.op_Inequality = (bool(*)(void *, void *))UnityEngine::Object.op_InequalityOffset;

UnityEngine::Object.GetOffsetOfInstanceIDInCPlusPlusObjectOffset = getRealOffset(0x1171830);
UnityEngine::Object.GetOffsetOfInstanceIDInCPlusPlusObject = (int(*)())UnityEngine::Object.GetOffsetOfInstanceIDInCPlusPlusObjectOffset;

UnityEngine::Object.Internal_CloneSingleOffset = getRealOffset(0x11723E0);
UnityEngine::Object.Internal_CloneSingle = (void *(*)(void *))UnityEngine::Object.Internal_CloneSingleOffset;

UnityEngine::Object.Internal_CloneSingleWithParentOffset = getRealOffset(0x11725CC);
UnityEngine::Object.Internal_CloneSingleWithParent = (void *(*)(void *, void *, bool))UnityEngine::Object.Internal_CloneSingleWithParentOffset;

UnityEngine::Object.Internal_InstantiateSingleOffset = getRealOffset(0x1171F24);
UnityEngine::Object.Internal_InstantiateSingle = (void *(*)(void *, Vector3, int))UnityEngine::Object.Internal_InstantiateSingleOffset;

UnityEngine::Object.Internal_InstantiateSingleWithParentOffset = getRealOffset(0x11721D0);
UnityEngine::Object.Internal_InstantiateSingleWithParent = (void *(*)(void *, void *, Vector3, int))UnityEngine::Object.Internal_InstantiateSingleWithParentOffset;

UnityEngine::Object.ToString1Offset = getRealOffset(0x1172B04);
UnityEngine::Object.ToString1 = (monoString *(*)(void *))UnityEngine::Object.ToString1Offset;

UnityEngine::Object.GetNameOffset = getRealOffset(0x1171B6C);
UnityEngine::Object.GetName = (monoString *(*)(void *))UnityEngine::Object.GetNameOffset;

UnityEngine::Object.SetNameOffset = getRealOffset(0x1171C74);
UnityEngine::Object.SetName = (void(*)(void *, monoString*))UnityEngine::Object.SetNameOffset;

UnityEngine::Object.FindObjectFromInstanceIDOffset = getRealOffset(0x1172CA0);
UnityEngine::Object.FindObjectFromInstanceID = (void *(*)(int))UnityEngine::Object.FindObjectFromInstanceIDOffset;

UnityEngine::UnitySynchronizationContext.OperationStartedOffset = getRealOffset(0x10617F0);
UnityEngine::UnitySynchronizationContext.OperationStarted = (void(*)(void*))UnityEngine::UnitySynchronizationContext.OperationStartedOffset;

UnityEngine::UnitySynchronizationContext.OperationCompletedOffset = getRealOffset(0x10617FC);
UnityEngine::UnitySynchronizationContext.OperationCompleted = (void(*)(void*))UnityEngine::UnitySynchronizationContext.OperationCompletedOffset;

UnityEngine::UnitySynchronizationContext.CreateCopyOffset = getRealOffset(0x10618F8);
UnityEngine::UnitySynchronizationContext.CreateCopy = (void *(*)(void*))UnityEngine::UnitySynchronizationContext.CreateCopyOffset;

UnityEngine::UnitySynchronizationContext.ExecOffset = getRealOffset(0x106196C);
UnityEngine::UnitySynchronizationContext.Exec = (void(*)(void*))UnityEngine::UnitySynchronizationContext.ExecOffset;

UnityEngine::UnitySynchronizationContext.HasPendingTasksOffset = getRealOffset(0x1061C48);
UnityEngine::UnitySynchronizationContext.HasPendingTasks = (bool(*)(void*))UnityEngine::UnitySynchronizationContext.HasPendingTasksOffset;

UnityEngine::UnitySynchronizationContext.InitializeSynchronizationContextOffset = getRealOffset(0x1061CB8);
UnityEngine::UnitySynchronizationContext.InitializeSynchronizationContext = (void(*)())UnityEngine::UnitySynchronizationContext.InitializeSynchronizationContextOffset;

UnityEngine::UnitySynchronizationContext.ExecuteTasksOffset = getRealOffset(0x1061D4C);
UnityEngine::UnitySynchronizationContext.ExecuteTasks = (void(*)())UnityEngine::UnitySynchronizationContext.ExecuteTasksOffset;

UnityEngine::WaitForSecondsRealtime.get_waitTimeOffset = getRealOffset(0x16FD984);
UnityEngine::WaitForSecondsRealtime.get_waitTime = (float(*)(void*))UnityEngine::WaitForSecondsRealtime.get_waitTimeOffset;

UnityEngine::WaitForSecondsRealtime.set_waitTimeOffset = getRealOffset(0x16FD98C);
UnityEngine::WaitForSecondsRealtime.set_waitTime = (void(*)(void*, float))UnityEngine::WaitForSecondsRealtime.set_waitTimeOffset;

UnityEngine::WaitForSecondsRealtime.get_keepWaitingOffset = getRealOffset(0x16FD994);
UnityEngine::WaitForSecondsRealtime.get_keepWaiting = (bool(*)(void*))UnityEngine::WaitForSecondsRealtime.get_keepWaitingOffset;

UnityEngine::WaitUntil.get_keepWaitingOffset = getRealOffset(0x16FDA34);
UnityEngine::WaitUntil.get_keepWaiting = (bool(*)(void*))UnityEngine::WaitUntil.get_keepWaitingOffset;

UnityEngine::WaitWhile.get_keepWaitingOffset = getRealOffset(0x16FDAC4);
UnityEngine::WaitWhile.get_keepWaiting = (bool(*)(void*))UnityEngine::WaitWhile.get_keepWaitingOffset;

UnityEngine::ComputeShader.FindKernelOffset = getRealOffset(0x1138750);
UnityEngine::ComputeShader.FindKernel = (int(*)(void*, monoString*))UnityEngine::ComputeShader.FindKernelOffset;

UnityEngine::StaticBatchingUtility.CombineOffset = getRealOffset(0x10581F8);
UnityEngine::StaticBatchingUtility.Combine = (void(*)(void *))UnityEngine::StaticBatchingUtility.CombineOffset;

UnityEngine::InternalStaticBatchingUtility.CombineRootOffset = getRealOffset(0x114694C);
UnityEngine::InternalStaticBatchingUtility.CombineRoot = (void(*)(void *, void *))UnityEngine::InternalStaticBatchingUtility.CombineRootOffset;

UnityEngine::InternalStaticBatchingUtility.CombineOffset = getRealOffset(0x1146970);
UnityEngine::InternalStaticBatchingUtility.Combine = (void(*)(void *, bool, bool, void *))UnityEngine::InternalStaticBatchingUtility.CombineOffset;

UnityEngine::LowerResBlitTexture.LowerResBlitTextureDontStripMeOffset = getRealOffset(0x1163E74);
UnityEngine::LowerResBlitTexture.LowerResBlitTextureDontStripMe = (void(*)(void*))UnityEngine::LowerResBlitTexture.LowerResBlitTextureDontStripMeOffset;

UnityEngine::PreloadData.PreloadDataDontStripMeOffset = getRealOffset(0x1175944);
UnityEngine::PreloadData.PreloadDataDontStripMe = (void(*)(void*))UnityEngine::PreloadData.PreloadDataDontStripMeOffset;

UnityEngine::SystemInfo.get_operatingSystemOffset = getRealOffset(0x1058330);
UnityEngine::SystemInfo.get_operatingSystem = (monoString *(*)())UnityEngine::SystemInfo.get_operatingSystemOffset;

UnityEngine::SystemInfo.get_operatingSystemFamilyOffset = getRealOffset(0x10583C0);
UnityEngine::SystemInfo.get_operatingSystemFamily = (int (*)())UnityEngine::SystemInfo.get_operatingSystemFamilyOffset;

UnityEngine::SystemInfo.get_processorTypeOffset = getRealOffset(0x1058450);
UnityEngine::SystemInfo.get_processorType = (monoString *(*)())UnityEngine::SystemInfo.get_processorTypeOffset;

UnityEngine::SystemInfo.get_processorCountOffset = getRealOffset(0x10584E0);
UnityEngine::SystemInfo.get_processorCount = (int(*)())UnityEngine::SystemInfo.get_processorCountOffset;

UnityEngine::SystemInfo.get_systemMemorySizeOffset = getRealOffset(0x1058570);
UnityEngine::SystemInfo.get_systemMemorySize = (int(*)())UnityEngine::SystemInfo.get_systemMemorySizeOffset;

UnityEngine::SystemInfo.get_deviceUniqueIdentifierOffset = getRealOffset(0x1058600);
UnityEngine::SystemInfo.get_deviceUniqueIdentifier = (monoString *(*)())UnityEngine::SystemInfo.get_deviceUniqueIdentifierOffset;

UnityEngine::SystemInfo.get_deviceNameOffset = getRealOffset(0x1058690);
UnityEngine::SystemInfo.get_deviceName = (monoString *(*)())UnityEngine::SystemInfo.get_deviceNameOffset;

UnityEngine::SystemInfo.get_deviceModelOffset = getRealOffset(0x1058720);
UnityEngine::SystemInfo.get_deviceModel = (monoString *(*)())UnityEngine::SystemInfo.get_deviceModelOffset;

UnityEngine::SystemInfo.get_supportsAccelerometerOffset = getRealOffset(0x10587B0);
UnityEngine::SystemInfo.get_supportsAccelerometer = (bool(*)())UnityEngine::SystemInfo.get_supportsAccelerometerOffset;

UnityEngine::SystemInfo.get_supportsGyroscopeOffset = getRealOffset(0x1058840);
UnityEngine::SystemInfo.get_supportsGyroscope = (bool(*)())UnityEngine::SystemInfo.get_supportsGyroscopeOffset;

UnityEngine::SystemInfo.get_supportsLocationServiceOffset = getRealOffset(0x10588D0);
UnityEngine::SystemInfo.get_supportsLocationService = (bool(*)())UnityEngine::SystemInfo.get_supportsLocationServiceOffset;

UnityEngine::SystemInfo.get_deviceTypeOffset = getRealOffset(0x1058960);
UnityEngine::SystemInfo.get_deviceType = (int (*)())UnityEngine::SystemInfo.get_deviceTypeOffset;

UnityEngine::SystemInfo.get_graphicsMemorySizeOffset = getRealOffset(0x10589F0);
UnityEngine::SystemInfo.get_graphicsMemorySize = (int(*)())UnityEngine::SystemInfo.get_graphicsMemorySizeOffset;

UnityEngine::SystemInfo.get_graphicsDeviceNameOffset = getRealOffset(0x1058A80);
UnityEngine::SystemInfo.get_graphicsDeviceName = (monoString *(*)())UnityEngine::SystemInfo.get_graphicsDeviceNameOffset;

UnityEngine::SystemInfo.get_graphicsDeviceTypeOffset = getRealOffset(0x1058B10);
UnityEngine::SystemInfo.get_graphicsDeviceType = (int (*)())UnityEngine::SystemInfo.get_graphicsDeviceTypeOffset;

UnityEngine::SystemInfo.get_graphicsDeviceVersionOffset = getRealOffset(0x1058BA0);
UnityEngine::SystemInfo.get_graphicsDeviceVersion = (monoString *(*)())UnityEngine::SystemInfo.get_graphicsDeviceVersionOffset;

UnityEngine::SystemInfo.get_graphicsShaderLevelOffset = getRealOffset(0x1058C30);
UnityEngine::SystemInfo.get_graphicsShaderLevel = (int(*)())UnityEngine::SystemInfo.get_graphicsShaderLevelOffset;

UnityEngine::SystemInfo.get_graphicsMultiThreadedOffset = getRealOffset(0x1058CC0);
UnityEngine::SystemInfo.get_graphicsMultiThreaded = (bool(*)())UnityEngine::SystemInfo.get_graphicsMultiThreadedOffset;

UnityEngine::SystemInfo.get_supportsShadowsOffset = getRealOffset(0x1058D50);
UnityEngine::SystemInfo.get_supportsShadows = (bool(*)())UnityEngine::SystemInfo.get_supportsShadowsOffset;

UnityEngine::SystemInfo.get_supportsRenderTexturesOffset = getRealOffset(0x1058DE0);
UnityEngine::SystemInfo.get_supportsRenderTextures = (bool(*)())UnityEngine::SystemInfo.get_supportsRenderTexturesOffset;

UnityEngine::SystemInfo.get_supportsMotionVectorsOffset = getRealOffset(0x1058DE8);
UnityEngine::SystemInfo.get_supportsMotionVectors = (bool(*)())UnityEngine::SystemInfo.get_supportsMotionVectorsOffset;

UnityEngine::SystemInfo.get_supportsImageEffectsOffset = getRealOffset(0x1058E78);
UnityEngine::SystemInfo.get_supportsImageEffects = (bool(*)())UnityEngine::SystemInfo.get_supportsImageEffectsOffset;

UnityEngine::SystemInfo.get_supports3DTexturesOffset = getRealOffset(0x1058E80);
UnityEngine::SystemInfo.get_supports3DTextures = (bool(*)())UnityEngine::SystemInfo.get_supports3DTexturesOffset;

UnityEngine::SystemInfo.get_supports2DArrayTexturesOffset = getRealOffset(0x1058F10);
UnityEngine::SystemInfo.get_supports2DArrayTextures = (bool(*)())UnityEngine::SystemInfo.get_supports2DArrayTexturesOffset;

UnityEngine::SystemInfo.get_supports3DRenderTexturesOffset = getRealOffset(0x1058FA0);
UnityEngine::SystemInfo.get_supports3DRenderTextures = (bool(*)())UnityEngine::SystemInfo.get_supports3DRenderTexturesOffset;

UnityEngine::SystemInfo.get_supportsCubemapArrayTexturesOffset = getRealOffset(0x1059030);
UnityEngine::SystemInfo.get_supportsCubemapArrayTextures = (bool(*)())UnityEngine::SystemInfo.get_supportsCubemapArrayTexturesOffset;

UnityEngine::SystemInfo.get_supportsComputeShadersOffset = getRealOffset(0x10590C0);
UnityEngine::SystemInfo.get_supportsComputeShaders = (bool(*)())UnityEngine::SystemInfo.get_supportsComputeShadersOffset;

UnityEngine::SystemInfo.get_supportsInstancingOffset = getRealOffset(0x1059150);
UnityEngine::SystemInfo.get_supportsInstancing = (bool(*)())UnityEngine::SystemInfo.get_supportsInstancingOffset;

UnityEngine::SystemInfo.IsValidEnumValueOffset = getRealOffset(0x10591E0);
UnityEngine::SystemInfo.IsValidEnumValue = (bool(*)(void *))UnityEngine::SystemInfo.IsValidEnumValueOffset;

UnityEngine::SystemInfo.SupportsRenderTextureFormatOffset = getRealOffset(0x105927C);
UnityEngine::SystemInfo.SupportsRenderTextureFormat = (bool(*)(int))UnityEngine::SystemInfo.SupportsRenderTextureFormatOffset;

UnityEngine::SystemInfo.SupportsTextureFormatOffset = getRealOffset(0x10593D0);
UnityEngine::SystemInfo.SupportsTextureFormat = (bool(*)(int))UnityEngine::SystemInfo.SupportsTextureFormatOffset;

UnityEngine::SystemInfo.get_maxTextureSizeOffset = getRealOffset(0x1059524);
UnityEngine::SystemInfo.get_maxTextureSize = (int(*)())UnityEngine::SystemInfo.get_maxTextureSizeOffset;

UnityEngine::SystemInfo.get_maxCubemapSizeOffset = getRealOffset(0x10595B4);
UnityEngine::SystemInfo.get_maxCubemapSize = (int(*)())UnityEngine::SystemInfo.get_maxCubemapSizeOffset;

UnityEngine::SystemInfo.GetOperatingSystemOffset = getRealOffset(0x1058378);
UnityEngine::SystemInfo.GetOperatingSystem = (monoString *(*)())UnityEngine::SystemInfo.GetOperatingSystemOffset;

UnityEngine::SystemInfo.GetOperatingSystemFamilyOffset = getRealOffset(0x1058408);
UnityEngine::SystemInfo.GetOperatingSystemFamily = (int (*)())UnityEngine::SystemInfo.GetOperatingSystemFamilyOffset;

UnityEngine::SystemInfo.GetProcessorTypeOffset = getRealOffset(0x1058498);
UnityEngine::SystemInfo.GetProcessorType = (monoString *(*)())UnityEngine::SystemInfo.GetProcessorTypeOffset;

UnityEngine::SystemInfo.GetProcessorCountOffset = getRealOffset(0x1058528);
UnityEngine::SystemInfo.GetProcessorCount = (int(*)())UnityEngine::SystemInfo.GetProcessorCountOffset;

UnityEngine::SystemInfo.GetPhysicalMemoryMBOffset = getRealOffset(0x10585B8);
UnityEngine::SystemInfo.GetPhysicalMemoryMB = (int(*)())UnityEngine::SystemInfo.GetPhysicalMemoryMBOffset;

UnityEngine::SystemInfo.GetDeviceUniqueIdentifierOffset = getRealOffset(0x1058648);
UnityEngine::SystemInfo.GetDeviceUniqueIdentifier = (monoString *(*)())UnityEngine::SystemInfo.GetDeviceUniqueIdentifierOffset;

UnityEngine::SystemInfo.GetDeviceNameOffset = getRealOffset(0x10586D8);
UnityEngine::SystemInfo.GetDeviceName = (monoString *(*)())UnityEngine::SystemInfo.GetDeviceNameOffset;

UnityEngine::SystemInfo.GetDeviceModelOffset = getRealOffset(0x1058768);
UnityEngine::SystemInfo.GetDeviceModel = (monoString *(*)())UnityEngine::SystemInfo.GetDeviceModelOffset;

UnityEngine::SystemInfo.SupportsAccelerometerOffset = getRealOffset(0x10587F8);
UnityEngine::SystemInfo.SupportsAccelerometer = (bool(*)())UnityEngine::SystemInfo.SupportsAccelerometerOffset;

UnityEngine::SystemInfo.IsGyroAvailableOffset = getRealOffset(0x1058888);
UnityEngine::SystemInfo.IsGyroAvailable = (bool(*)())UnityEngine::SystemInfo.IsGyroAvailableOffset;

UnityEngine::SystemInfo.SupportsLocationServiceOffset = getRealOffset(0x1058918);
UnityEngine::SystemInfo.SupportsLocationService = (bool(*)())UnityEngine::SystemInfo.SupportsLocationServiceOffset;

UnityEngine::SystemInfo.GetDeviceTypeOffset = getRealOffset(0x10589A8);
UnityEngine::SystemInfo.GetDeviceType = (int (*)())UnityEngine::SystemInfo.GetDeviceTypeOffset;

UnityEngine::SystemInfo.GetGraphicsMemorySizeOffset = getRealOffset(0x1058A38);
UnityEngine::SystemInfo.GetGraphicsMemorySize = (int(*)())UnityEngine::SystemInfo.GetGraphicsMemorySizeOffset;

UnityEngine::SystemInfo.GetGraphicsDeviceNameOffset = getRealOffset(0x1058AC8);
UnityEngine::SystemInfo.GetGraphicsDeviceName = (monoString *(*)())UnityEngine::SystemInfo.GetGraphicsDeviceNameOffset;

UnityEngine::SystemInfo.GetGraphicsDeviceTypeOffset = getRealOffset(0x1058B58);
UnityEngine::SystemInfo.GetGraphicsDeviceType = (int (*)())UnityEngine::SystemInfo.GetGraphicsDeviceTypeOffset;

UnityEngine::SystemInfo.GetGraphicsDeviceVersionOffset = getRealOffset(0x1058BE8);
UnityEngine::SystemInfo.GetGraphicsDeviceVersion = (monoString *(*)())UnityEngine::SystemInfo.GetGraphicsDeviceVersionOffset;

UnityEngine::SystemInfo.GetGraphicsShaderLevelOffset = getRealOffset(0x1058C78);
UnityEngine::SystemInfo.GetGraphicsShaderLevel = (int(*)())UnityEngine::SystemInfo.GetGraphicsShaderLevelOffset;

UnityEngine::SystemInfo.GetGraphicsMultiThreadedOffset = getRealOffset(0x1058D08);
UnityEngine::SystemInfo.GetGraphicsMultiThreaded = (bool(*)())UnityEngine::SystemInfo.GetGraphicsMultiThreadedOffset;

UnityEngine::SystemInfo.SupportsShadowsOffset = getRealOffset(0x1058D98);
UnityEngine::SystemInfo.SupportsShadows = (bool(*)())UnityEngine::SystemInfo.SupportsShadowsOffset;

UnityEngine::SystemInfo.SupportsMotionVectorsOffset = getRealOffset(0x1058E30);
UnityEngine::SystemInfo.SupportsMotionVectors = (bool(*)())UnityEngine::SystemInfo.SupportsMotionVectorsOffset;

UnityEngine::SystemInfo.Supports3DTexturesOffset = getRealOffset(0x1058EC8);
UnityEngine::SystemInfo.Supports3DTextures = (bool(*)())UnityEngine::SystemInfo.Supports3DTexturesOffset;

UnityEngine::SystemInfo.Supports2DArrayTexturesOffset = getRealOffset(0x1058F58);
UnityEngine::SystemInfo.Supports2DArrayTextures = (bool(*)())UnityEngine::SystemInfo.Supports2DArrayTexturesOffset;

UnityEngine::SystemInfo.Supports3DRenderTexturesOffset = getRealOffset(0x1058FE8);
UnityEngine::SystemInfo.Supports3DRenderTextures = (bool(*)())UnityEngine::SystemInfo.Supports3DRenderTexturesOffset;

UnityEngine::SystemInfo.SupportsCubemapArrayTexturesOffset = getRealOffset(0x1059078);
UnityEngine::SystemInfo.SupportsCubemapArrayTextures = (bool(*)())UnityEngine::SystemInfo.SupportsCubemapArrayTexturesOffset;

UnityEngine::SystemInfo.SupportsComputeShadersOffset = getRealOffset(0x1059108);
UnityEngine::SystemInfo.SupportsComputeShaders = (bool(*)())UnityEngine::SystemInfo.SupportsComputeShadersOffset;

UnityEngine::SystemInfo.SupportsInstancingOffset = getRealOffset(0x1059198);
UnityEngine::SystemInfo.SupportsInstancing = (bool(*)())UnityEngine::SystemInfo.SupportsInstancingOffset;

UnityEngine::SystemInfo.HasRenderTextureNativeOffset = getRealOffset(0x1059380);
UnityEngine::SystemInfo.HasRenderTextureNative = (bool(*)(int))UnityEngine::SystemInfo.HasRenderTextureNativeOffset;

UnityEngine::SystemInfo.SupportsTextureFormatNativeOffset = getRealOffset(0x10594D4);
UnityEngine::SystemInfo.SupportsTextureFormatNative = (bool(*)(int))UnityEngine::SystemInfo.SupportsTextureFormatNativeOffset;

UnityEngine::SystemInfo.GetMaxTextureSizeOffset = getRealOffset(0x105956C);
UnityEngine::SystemInfo.GetMaxTextureSize = (int(*)())UnityEngine::SystemInfo.GetMaxTextureSizeOffset;

UnityEngine::SystemInfo.GetMaxCubemapSizeOffset = getRealOffset(0x10595FC);
UnityEngine::SystemInfo.GetMaxCubemapSize = (int(*)())UnityEngine::SystemInfo.GetMaxCubemapSizeOffset;

UnityEngine::SystemInfo.IsFormatSupportedOffset = getRealOffset(0x104BB08);
UnityEngine::SystemInfo.IsFormatSupported = (bool(*)(int, int))UnityEngine::SystemInfo.IsFormatSupportedOffset;

UnityEngine::SystemInfo.GetCompatibleFormatOffset = getRealOffset(0x104BC0C);
UnityEngine::SystemInfo.GetCompatibleFormat = (int (*)(int, int))UnityEngine::SystemInfo.GetCompatibleFormatOffset;

UnityEngine::SystemInfo.GetGraphicsFormatOffset = getRealOffset(0x104AF7C);
UnityEngine::SystemInfo.GetGraphicsFormat = (int (*)(int))UnityEngine::SystemInfo.GetGraphicsFormatOffset;

UnityEngine::SystemClock.get_nowOffset = getRealOffset(0x1058204);
UnityEngine::SystemClock.get_now = (int (*)())UnityEngine::SystemClock.get_nowOffset;

UnityEngine::Time.get_timeOffset = getRealOffset(0x105C854);
UnityEngine::Time.get_time = (float(*)())UnityEngine::Time.get_timeOffset;

UnityEngine::Time.get_timeSinceLevelLoadOffset = getRealOffset(0x105C89C);
UnityEngine::Time.get_timeSinceLevelLoad = (float(*)())UnityEngine::Time.get_timeSinceLevelLoadOffset;

UnityEngine::Time.get_deltaTimeOffset = getRealOffset(0x105C8E4);
UnityEngine::Time.get_deltaTime = (float(*)())UnityEngine::Time.get_deltaTimeOffset;

UnityEngine::Time.get_unscaledTimeOffset = getRealOffset(0x105C92C);
UnityEngine::Time.get_unscaledTime = (float(*)())UnityEngine::Time.get_unscaledTimeOffset;

UnityEngine::Time.get_unscaledDeltaTimeOffset = getRealOffset(0x105C974);
UnityEngine::Time.get_unscaledDeltaTime = (float(*)())UnityEngine::Time.get_unscaledDeltaTimeOffset;

UnityEngine::Time.get_fixedDeltaTimeOffset = getRealOffset(0x105C9BC);
UnityEngine::Time.get_fixedDeltaTime = (float(*)())UnityEngine::Time.get_fixedDeltaTimeOffset;

UnityEngine::Time.set_fixedDeltaTimeOffset = getRealOffset(0x105CA04);
UnityEngine::Time.set_fixedDeltaTime = (void(*)(float))UnityEngine::Time.set_fixedDeltaTimeOffset;

UnityEngine::Time.get_smoothDeltaTimeOffset = getRealOffset(0x105CA54);
UnityEngine::Time.get_smoothDeltaTime = (float(*)())UnityEngine::Time.get_smoothDeltaTimeOffset;

UnityEngine::Time.get_timeScaleOffset = getRealOffset(0x105CA9C);
UnityEngine::Time.get_timeScale = (float(*)())UnityEngine::Time.get_timeScaleOffset;

UnityEngine::Time.set_timeScaleOffset = getRealOffset(0x105CAE4);
UnityEngine::Time.set_timeScale = (void(*)(float))UnityEngine::Time.set_timeScaleOffset;

UnityEngine::Time.get_frameCountOffset = getRealOffset(0x105CB34);
UnityEngine::Time.get_frameCount = (int(*)())UnityEngine::Time.get_frameCountOffset;

UnityEngine::Time.get_realtimeSinceStartupOffset = getRealOffset(0x105CB7C);
UnityEngine::Time.get_realtimeSinceStartup = (float(*)())UnityEngine::Time.get_realtimeSinceStartupOffset;

UnityEngine::TouchScreenKeyboard.DestroyOffset = getRealOffset(0x105CC34);
UnityEngine::TouchScreenKeyboard.Destroy = (void(*)(void*))UnityEngine::TouchScreenKeyboard.DestroyOffset;

UnityEngine::TouchScreenKeyboard.FinalizeOffset = getRealOffset(0x105CD14);
UnityEngine::TouchScreenKeyboard.Finalize = (void(*)(void*))UnityEngine::TouchScreenKeyboard.FinalizeOffset;

UnityEngine::TouchScreenKeyboard.get_isSupportedOffset = getRealOffset(0x105CF4C);
UnityEngine::TouchScreenKeyboard.get_isSupported = (bool(*)())UnityEngine::TouchScreenKeyboard.get_isSupportedOffset;

UnityEngine::TouchScreenKeyboard.get_isInPlaceEditingAllowedOffset = getRealOffset(0x105CFB0);
UnityEngine::TouchScreenKeyboard.get_isInPlaceEditingAllowed = (bool(*)())UnityEngine::TouchScreenKeyboard.get_isInPlaceEditingAllowedOffset;

UnityEngine::TouchScreenKeyboard.OpenOffset = getRealOffset(0x105CFB8);
UnityEngine::TouchScreenKeyboard.Open = (void *(*)(monoString*, int, bool, bool, bool, bool, monoString*, int))UnityEngine::TouchScreenKeyboard.OpenOffset;

UnityEngine::TouchScreenKeyboard.Open1Offset = getRealOffset(0x105D060);
UnityEngine::TouchScreenKeyboard.Open1 = (void *(*)(monoString*, int, bool, bool, bool))UnityEngine::TouchScreenKeyboard.Open1Offset;

UnityEngine::TouchScreenKeyboard.get_textOffset = getRealOffset(0x105D0F4);
UnityEngine::TouchScreenKeyboard.get_text = (monoString *(*)(void*))UnityEngine::TouchScreenKeyboard.get_textOffset;

UnityEngine::TouchScreenKeyboard.set_textOffset = getRealOffset(0x105D144);
UnityEngine::TouchScreenKeyboard.set_text = (void(*)(void*, monoString*))UnityEngine::TouchScreenKeyboard.set_textOffset;

UnityEngine::TouchScreenKeyboard.set_hideInputOffset = getRealOffset(0x105D19C);
UnityEngine::TouchScreenKeyboard.set_hideInput = (void(*)(bool))UnityEngine::TouchScreenKeyboard.set_hideInputOffset;

UnityEngine::TouchScreenKeyboard.get_activeOffset = getRealOffset(0x105D1EC);
UnityEngine::TouchScreenKeyboard.get_active = (bool(*)(void*))UnityEngine::TouchScreenKeyboard.get_activeOffset;

UnityEngine::TouchScreenKeyboard.set_activeOffset = getRealOffset(0x105D23C);
UnityEngine::TouchScreenKeyboard.set_active = (void(*)(void*, bool))UnityEngine::TouchScreenKeyboard.set_activeOffset;

UnityEngine::TouchScreenKeyboard.get_statusOffset = getRealOffset(0x105D294);
UnityEngine::TouchScreenKeyboard.get_status = (int (*)(void*))UnityEngine::TouchScreenKeyboard.get_statusOffset;

UnityEngine::TouchScreenKeyboard.set_characterLimitOffset = getRealOffset(0x105D2E4);
UnityEngine::TouchScreenKeyboard.set_characterLimit = (void(*)(void*, int))UnityEngine::TouchScreenKeyboard.set_characterLimitOffset;

UnityEngine::TouchScreenKeyboard.get_canGetSelectionOffset = getRealOffset(0x105D33C);
UnityEngine::TouchScreenKeyboard.get_canGetSelection = (bool(*)(void*))UnityEngine::TouchScreenKeyboard.get_canGetSelectionOffset;

UnityEngine::TouchScreenKeyboard.get_canSetSelectionOffset = getRealOffset(0x105D38C);
UnityEngine::TouchScreenKeyboard.get_canSetSelection = (bool(*)(void*))UnityEngine::TouchScreenKeyboard.get_canSetSelectionOffset;

UnityEngine::TouchScreenKeyboard.get_selectionOffset = getRealOffset(0x105D3DC);
UnityEngine::TouchScreenKeyboard.get_selection = (int (*)(void*))UnityEngine::TouchScreenKeyboard.get_selectionOffset;

UnityEngine::TouchScreenKeyboard.set_selectionOffset = getRealOffset(0x105D4AC);
UnityEngine::TouchScreenKeyboard.set_selection = (void(*)(void*, int))UnityEngine::TouchScreenKeyboard.set_selectionOffset;

UnityEngine::TouchScreenKeyboard.SetSelectionOffset = getRealOffset(0x105D608);
UnityEngine::TouchScreenKeyboard.SetSelection = (void(*)(int, int))UnityEngine::TouchScreenKeyboard.SetSelectionOffset;

UnityEngine::TouchScreenKeyboard.get_visibleOffset = getRealOffset(0x105D660);
UnityEngine::TouchScreenKeyboard.get_visible = (bool(*)())UnityEngine::TouchScreenKeyboard.get_visibleOffset;

UnityEngine::DrivenRectTransformTracker.AddOffset = getRealOffset(0x3F2138);
UnityEngine::DrivenRectTransformTracker.Add = (void(*)(void*, void *, void *, int))UnityEngine::DrivenRectTransformTracker.AddOffset;

UnityEngine::DrivenRectTransformTracker.ClearOffset = getRealOffset(0x3F213C);
UnityEngine::DrivenRectTransformTracker.Clear = (void(*)(void*))UnityEngine::DrivenRectTransformTracker.ClearOffset;

UnityEngine::RectTransform.add_reapplyDrivenPropertiesOffset = getRealOffset(0x117A804);
UnityEngine::RectTransform.add_reapplyDrivenProperties = (void(*)(void *))UnityEngine::RectTransform.add_reapplyDrivenPropertiesOffset;

UnityEngine::RectTransform.remove_reapplyDrivenPropertiesOffset = getRealOffset(0x117A8C8);
UnityEngine::RectTransform.remove_reapplyDrivenProperties = (void(*)(void *))UnityEngine::RectTransform.remove_reapplyDrivenPropertiesOffset;

UnityEngine::RectTransform.get_rectOffset = getRealOffset(0x117A98C);
UnityEngine::RectTransform.get_rect = (int (*)(void*))UnityEngine::RectTransform.get_rectOffset;

UnityEngine::RectTransform.get_anchorMinOffset = getRealOffset(0x117AA58);
UnityEngine::RectTransform.get_anchorMin = (Vector2 (*)(void*))UnityEngine::RectTransform.get_anchorMinOffset;

UnityEngine::RectTransform.set_anchorMinOffset = getRealOffset(0x117AB24);
UnityEngine::RectTransform.set_anchorMin = (void(*)(void*, Vector2))UnityEngine::RectTransform.set_anchorMinOffset;

UnityEngine::RectTransform.get_anchorMaxOffset = getRealOffset(0x117ABDC);
UnityEngine::RectTransform.get_anchorMax = (Vector2 (*)(void*))UnityEngine::RectTransform.get_anchorMaxOffset;

UnityEngine::RectTransform.set_anchorMaxOffset = getRealOffset(0x117ACA8);
UnityEngine::RectTransform.set_anchorMax = (void(*)(void*, Vector2))UnityEngine::RectTransform.set_anchorMaxOffset;

UnityEngine::RectTransform.get_anchoredPositionOffset = getRealOffset(0x117AD60);
UnityEngine::RectTransform.get_anchoredPosition = (Vector2 (*)(void*))UnityEngine::RectTransform.get_anchoredPositionOffset;

UnityEngine::RectTransform.set_anchoredPositionOffset = getRealOffset(0x117AE2C);
UnityEngine::RectTransform.set_anchoredPosition = (void(*)(void*, Vector2))UnityEngine::RectTransform.set_anchoredPositionOffset;

UnityEngine::RectTransform.get_sizeDeltaOffset = getRealOffset(0x117AEE4);
UnityEngine::RectTransform.get_sizeDelta = (Vector2 (*)(void*))UnityEngine::RectTransform.get_sizeDeltaOffset;

UnityEngine::RectTransform.set_sizeDeltaOffset = getRealOffset(0x117AFB0);
UnityEngine::RectTransform.set_sizeDelta = (void(*)(void*, Vector2))UnityEngine::RectTransform.set_sizeDeltaOffset;

UnityEngine::RectTransform.get_pivotOffset = getRealOffset(0x117B068);
UnityEngine::RectTransform.get_pivot = (Vector2 (*)(void*))UnityEngine::RectTransform.get_pivotOffset;

UnityEngine::RectTransform.set_pivotOffset = getRealOffset(0x117B134);
UnityEngine::RectTransform.set_pivot = (void(*)(void*, Vector2))UnityEngine::RectTransform.set_pivotOffset;

UnityEngine::RectTransform.set_anchoredPosition3DOffset = getRealOffset(0x117B1EC);
UnityEngine::RectTransform.set_anchoredPosition3D = (void(*)(void*, Vector3))UnityEngine::RectTransform.set_anchoredPosition3DOffset;

UnityEngine::RectTransform.get_offsetMinOffset = getRealOffset(0x117B254);
UnityEngine::RectTransform.get_offsetMin = (Vector2 (*)(void*))UnityEngine::RectTransform.get_offsetMinOffset;

UnityEngine::RectTransform.set_offsetMinOffset = getRealOffset(0x117B41C);
UnityEngine::RectTransform.set_offsetMin = (void(*)(void*, Vector2))UnityEngine::RectTransform.set_offsetMinOffset;

UnityEngine::RectTransform.get_offsetMaxOffset = getRealOffset(0x117B78C);
UnityEngine::RectTransform.get_offsetMax = (Vector2 (*)(void*))UnityEngine::RectTransform.get_offsetMaxOffset;

UnityEngine::RectTransform.set_offsetMaxOffset = getRealOffset(0x117B96C);
UnityEngine::RectTransform.set_offsetMax = (void(*)(void*, Vector2))UnityEngine::RectTransform.set_offsetMaxOffset;

UnityEngine::RectTransform.SetInsetAndSizeFromParentEdgeOffset = getRealOffset(0x117C0EC);
UnityEngine::RectTransform.SetInsetAndSizeFromParentEdge = (void(*)(void*, int, float, float))UnityEngine::RectTransform.SetInsetAndSizeFromParentEdgeOffset;

UnityEngine::RectTransform.SetSizeWithCurrentAnchorsOffset = getRealOffset(0x117C46C);
UnityEngine::RectTransform.SetSizeWithCurrentAnchors = (void(*)(void*, int, float))UnityEngine::RectTransform.SetSizeWithCurrentAnchorsOffset;

UnityEngine::RectTransform.SendReapplyDrivenPropertiesOffset = getRealOffset(0x117C7BC);
UnityEngine::RectTransform.SendReapplyDrivenProperties = (void(*)(void *))UnityEngine::RectTransform.SendReapplyDrivenPropertiesOffset;

UnityEngine::RectTransform.GetParentSizeOffset = getRealOffset(0x117C638);
UnityEngine::RectTransform.GetParentSize = (Vector2 (*)(void*))UnityEngine::RectTransform.GetParentSizeOffset;

UnityEngine::Transform.get_positionOffset = getRealOffset(0x105D998);
UnityEngine::Transform.get_position = (Vector3 (*)(void*))UnityEngine::Transform.get_positionOffset;

UnityEngine::Transform.set_positionOffset = getRealOffset(0x105DA70);
UnityEngine::Transform.set_position = (void(*)(void*, Vector3))UnityEngine::Transform.set_positionOffset;

UnityEngine::Transform.get_localPositionOffset = getRealOffset(0x105DB28);
UnityEngine::Transform.get_localPosition = (Vector3 (*)(void*))UnityEngine::Transform.get_localPositionOffset;

UnityEngine::Transform.set_localPositionOffset = getRealOffset(0x105DC00);
UnityEngine::Transform.set_localPosition = (void(*)(void*, Vector3))UnityEngine::Transform.set_localPositionOffset;

UnityEngine::Transform.get_eulerAnglesOffset = getRealOffset(0x105DCB8);
UnityEngine::Transform.get_eulerAngles = (Vector3 (*)(void*))UnityEngine::Transform.get_eulerAnglesOffset;

UnityEngine::Transform.set_eulerAnglesOffset = getRealOffset(0x105DDE8);
UnityEngine::Transform.set_eulerAngles = (void(*)(void*, Vector3))UnityEngine::Transform.set_eulerAnglesOffset;

UnityEngine::Transform.get_localEulerAnglesOffset = getRealOffset(0x105DF08);
UnityEngine::Transform.get_localEulerAngles = (Vector3 (*)(void*))UnityEngine::Transform.get_localEulerAnglesOffset;

UnityEngine::Transform.set_localEulerAnglesOffset = getRealOffset(0x105E038);
UnityEngine::Transform.set_localEulerAngles = (void(*)(void*, Vector3))UnityEngine::Transform.set_localEulerAnglesOffset;

UnityEngine::Transform.get_rightOffset = getRealOffset(0x105E158);
UnityEngine::Transform.get_right = (Vector3 (*)(void*))UnityEngine::Transform.get_rightOffset;

UnityEngine::Transform.get_upOffset = getRealOffset(0x105E344);
UnityEngine::Transform.get_up = (Vector3 (*)(void*))UnityEngine::Transform.get_upOffset;

UnityEngine::Transform.get_forwardOffset = getRealOffset(0x105E530);
UnityEngine::Transform.get_forward = (Vector3 (*)(void*))UnityEngine::Transform.get_forwardOffset;

UnityEngine::Transform.get_rotationOffset = getRealOffset(0x105DD74);
UnityEngine::Transform.get_rotation = (int (*)(void*))UnityEngine::Transform.get_rotationOffset;

UnityEngine::Transform.set_rotationOffset = getRealOffset(0x105DEA0);
UnityEngine::Transform.set_rotation = (void(*)(void*, int))UnityEngine::Transform.set_rotationOffset;

UnityEngine::Transform.get_localRotationOffset = getRealOffset(0x105DFC4);
UnityEngine::Transform.get_localRotation = (int (*)(void*))UnityEngine::Transform.get_localRotationOffset;

UnityEngine::Transform.set_localRotationOffset = getRealOffset(0x105E0F0);
UnityEngine::Transform.set_localRotation = (void(*)(void*, int))UnityEngine::Transform.set_localRotationOffset;

UnityEngine::Transform.get_localScaleOffset = getRealOffset(0x105E87C);
UnityEngine::Transform.get_localScale = (Vector3 (*)(void*))UnityEngine::Transform.get_localScaleOffset;

UnityEngine::Transform.set_localScaleOffset = getRealOffset(0x105E954);
UnityEngine::Transform.set_localScale = (void(*)(void*, Vector3))UnityEngine::Transform.set_localScaleOffset;

UnityEngine::Transform.get_parentOffset = getRealOffset(0x105EA0C);
UnityEngine::Transform.get_parent = (void *(*)(void*))UnityEngine::Transform.get_parentOffset;

UnityEngine::Transform.set_parentOffset = getRealOffset(0x105EAAC);
UnityEngine::Transform.set_parent = (void(*)(void*, void *))UnityEngine::Transform.set_parentOffset;

UnityEngine::Transform.get_parentInternalOffset = getRealOffset(0x105EA5C);
UnityEngine::Transform.get_parentInternal = (void *(*)(void*))UnityEngine::Transform.get_parentInternalOffset;

UnityEngine::Transform.set_parentInternalOffset = getRealOffset(0x105EBA8);
UnityEngine::Transform.set_parentInternal = (void(*)(void*, void *))UnityEngine::Transform.set_parentInternalOffset;

UnityEngine::Transform.GetParentOffset = getRealOffset(0x105EC04);
UnityEngine::Transform.GetParent = (void *(*)(void*))UnityEngine::Transform.GetParentOffset;

UnityEngine::Transform.SetParentOffset = getRealOffset(0x105EC54);
UnityEngine::Transform.SetParent = (void(*)(void*, void *))UnityEngine::Transform.SetParentOffset;

UnityEngine::Transform.SetParent1Offset = getRealOffset(0x105ECB0);
UnityEngine::Transform.SetParent1 = (void(*)(void*, void *, bool))UnityEngine::Transform.SetParent1Offset;

UnityEngine::Transform.get_worldToLocalMatrixOffset = getRealOffset(0x105ED10);
UnityEngine::Transform.get_worldToLocalMatrix = (int (*)(void*))UnityEngine::Transform.get_worldToLocalMatrixOffset;

UnityEngine::Transform.get_localToWorldMatrixOffset = getRealOffset(0x105EE08);
UnityEngine::Transform.get_localToWorldMatrix = (int (*)(void*))UnityEngine::Transform.get_localToWorldMatrixOffset;

UnityEngine::Transform.TranslateOffset = getRealOffset(0x105EF00);
UnityEngine::Transform.Translate = (void(*)(void*, Vector3, int))UnityEngine::Transform.TranslateOffset;

UnityEngine::Transform.Translate1Offset = getRealOffset(0x105F1A8);
UnityEngine::Transform.Translate1 = (void(*)(void*, Vector3))UnityEngine::Transform.Translate1Offset;

UnityEngine::Transform.Translate2Offset = getRealOffset(0x105F1C8);
UnityEngine::Transform.Translate2 = (void(*)(void*, float, float, float))UnityEngine::Transform.Translate2Offset;

UnityEngine::Transform.RotateOffset = getRealOffset(0x105F1F0);
UnityEngine::Transform.Rotate = (void(*)(void*, Vector3, int))UnityEngine::Transform.RotateOffset;

UnityEngine::Transform.Rotate1Offset = getRealOffset(0x105F5AC);
UnityEngine::Transform.Rotate1 = (void(*)(void*, Vector3))UnityEngine::Transform.Rotate1Offset;

UnityEngine::Transform.Rotate2Offset = getRealOffset(0x105F5CC);
UnityEngine::Transform.Rotate2 = (void(*)(void*, float, float, float, int))UnityEngine::Transform.Rotate2Offset;

UnityEngine::Transform.Rotate3Offset = getRealOffset(0x105F5EC);
UnityEngine::Transform.Rotate3 = (void(*)(void*, float, float, float))UnityEngine::Transform.Rotate3Offset;

UnityEngine::Transform.RotateAroundInternalOffset = getRealOffset(0x105F60C);
UnityEngine::Transform.RotateAroundInternal = (void(*)(void*, Vector3, float))UnityEngine::Transform.RotateAroundInternalOffset;

UnityEngine::Transform.Rotate11Offset = getRealOffset(0x105F6DC);
UnityEngine::Transform.Rotate11 = (void(*)(void*, Vector3, float, int))UnityEngine::Transform.Rotate11Offset;

UnityEngine::Transform.Rotate21Offset = getRealOffset(0x105F788);
UnityEngine::Transform.Rotate21 = (void(*)(void*, Vector3, float))UnityEngine::Transform.Rotate21Offset;

UnityEngine::Transform.RotateAroundOffset = getRealOffset(0x105F7B0);
UnityEngine::Transform.RotateAround = (void(*)(void*, Vector3, Vector3, float))UnityEngine::Transform.RotateAroundOffset;

UnityEngine::Transform.LookAtOffset = getRealOffset(0x105F9D8);
UnityEngine::Transform.LookAt = (void(*)(void*, void *, Vector3))UnityEngine::Transform.LookAtOffset;

UnityEngine::Transform.LookAt1Offset = getRealOffset(0x105FB18);
UnityEngine::Transform.LookAt1 = (void(*)(void*, void *))UnityEngine::Transform.LookAt1Offset;

UnityEngine::Transform.LookAt2Offset = getRealOffset(0x105FAEC);
UnityEngine::Transform.LookAt2 = (void(*)(void*, Vector3, Vector3))UnityEngine::Transform.LookAt2Offset;

UnityEngine::Transform.LookAt3Offset = getRealOffset(0x105FCE0);
UnityEngine::Transform.LookAt3 = (void(*)(void*, Vector3))UnityEngine::Transform.LookAt3Offset;

UnityEngine::Transform.Internal_LookAtOffset = getRealOffset(0x105FC64);
UnityEngine::Transform.Internal_LookAt = (void(*)(void*, Vector3, Vector3))UnityEngine::Transform.Internal_LookAtOffset;

UnityEngine::Transform.TransformDirectionOffset = getRealOffset(0x105F114);
UnityEngine::Transform.TransformDirection = (Vector3 (*)(void*, Vector3))UnityEngine::Transform.TransformDirectionOffset;

UnityEngine::Transform.InverseTransformDirectionOffset = getRealOffset(0x105FE4C);
UnityEngine::Transform.InverseTransformDirection = (Vector3 (*)(void*, Vector3))UnityEngine::Transform.InverseTransformDirectionOffset;

UnityEngine::Transform.TransformPointOffset = getRealOffset(0x105FF40);
UnityEngine::Transform.TransformPoint = (Vector3 (*)(void*, Vector3))UnityEngine::Transform.TransformPointOffset;

UnityEngine::Transform.TransformPoint1Offset = getRealOffset(0x1060034);
UnityEngine::Transform.TransformPoint1 = (Vector3 (*)(void*, float, float, float))UnityEngine::Transform.TransformPoint1Offset;

UnityEngine::Transform.InverseTransformPointOffset = getRealOffset(0x106007C);
UnityEngine::Transform.InverseTransformPoint = (Vector3 (*)(void*, Vector3))UnityEngine::Transform.InverseTransformPointOffset;

UnityEngine::Transform.get_rootOffset = getRealOffset(0x1060170);
UnityEngine::Transform.get_root = (void *(*)(void*))UnityEngine::Transform.get_rootOffset;

UnityEngine::Transform.GetRootOffset = getRealOffset(0x10601C0);
UnityEngine::Transform.GetRoot = (void *(*)(void*))UnityEngine::Transform.GetRootOffset;

UnityEngine::Transform.get_childCountOffset = getRealOffset(0x1060210);
UnityEngine::Transform.get_childCount = (int(*)(void*))UnityEngine::Transform.get_childCountOffset;

UnityEngine::Transform.SetAsFirstSiblingOffset = getRealOffset(0x1060260);
UnityEngine::Transform.SetAsFirstSibling = (void(*)(void*))UnityEngine::Transform.SetAsFirstSiblingOffset;

UnityEngine::Transform.SetAsLastSiblingOffset = getRealOffset(0x10602B0);
UnityEngine::Transform.SetAsLastSibling = (void(*)(void*))UnityEngine::Transform.SetAsLastSiblingOffset;

UnityEngine::Transform.SetSiblingIndexOffset = getRealOffset(0x1060300);
UnityEngine::Transform.SetSiblingIndex = (void(*)(void*, int))UnityEngine::Transform.SetSiblingIndexOffset;

UnityEngine::Transform.GetSiblingIndexOffset = getRealOffset(0x1060358);
UnityEngine::Transform.GetSiblingIndex = (int(*)(void*))UnityEngine::Transform.GetSiblingIndexOffset;

UnityEngine::Transform.FindRelativeTransformWithPathOffset = getRealOffset(0x10603A8);
UnityEngine::Transform.FindRelativeTransformWithPath = (void *(*)(void *, monoString*, bool))UnityEngine::Transform.FindRelativeTransformWithPathOffset;

UnityEngine::Transform.FindOffset = getRealOffset(0x1060408);
UnityEngine::Transform.Find = (void *(*)(void*, monoString*))UnityEngine::Transform.FindOffset;

UnityEngine::Transform.get_lossyScaleOffset = getRealOffset(0x10604F0);
UnityEngine::Transform.get_lossyScale = (Vector3 (*)(void*))UnityEngine::Transform.get_lossyScaleOffset;

UnityEngine::Transform.IsChildOfOffset = getRealOffset(0x10605C8);
UnityEngine::Transform.IsChildOf = (bool(*)(void*, void *))UnityEngine::Transform.IsChildOfOffset;

UnityEngine::Transform.get_hasChangedOffset = getRealOffset(0x1060620);
UnityEngine::Transform.get_hasChanged = (bool(*)(void*))UnityEngine::Transform.get_hasChangedOffset;

UnityEngine::Transform.set_hasChangedOffset = getRealOffset(0x1060670);
UnityEngine::Transform.set_hasChanged = (void(*)(void*, bool))UnityEngine::Transform.set_hasChangedOffset;

UnityEngine::Transform.GetEnumeratorOffset = getRealOffset(0x10606C8);
UnityEngine::Transform.GetEnumerator = (void *(*)(void*))UnityEngine::Transform.GetEnumeratorOffset;

UnityEngine::Transform.GetChildOffset = getRealOffset(0x106076C);
UnityEngine::Transform.GetChild = (void *(*)(void*, int))UnityEngine::Transform.GetChildOffset;

UnityEngine::Transform.get_position_InjectedOffset = getRealOffset(0x105DA18);
UnityEngine::Transform.get_position_Injected = (void(*)(void*, Vector3 *))UnityEngine::Transform.get_position_InjectedOffset;

UnityEngine::Transform.set_position_InjectedOffset = getRealOffset(0x105DAD0);
UnityEngine::Transform.set_position_Injected = (void(*)(void*, Vector3 *))UnityEngine::Transform.set_position_InjectedOffset;

UnityEngine::Transform.get_localPosition_InjectedOffset = getRealOffset(0x105DBA8);
UnityEngine::Transform.get_localPosition_Injected = (void(*)(void*, Vector3 *))UnityEngine::Transform.get_localPosition_InjectedOffset;

UnityEngine::Transform.set_localPosition_InjectedOffset = getRealOffset(0x105DC60);
UnityEngine::Transform.set_localPosition_Injected = (void(*)(void*, Vector3 *))UnityEngine::Transform.set_localPosition_InjectedOffset;

UnityEngine::Transform.get_localScale_InjectedOffset = getRealOffset(0x105E8FC);
UnityEngine::Transform.get_localScale_Injected = (void(*)(void*, Vector3 *))UnityEngine::Transform.get_localScale_InjectedOffset;

UnityEngine::Transform.set_localScale_InjectedOffset = getRealOffset(0x105E9B4);
UnityEngine::Transform.set_localScale_Injected = (void(*)(void*, Vector3 *))UnityEngine::Transform.set_localScale_InjectedOffset;

UnityEngine::Transform.RotateAroundInternal_InjectedOffset = getRealOffset(0x105F67C);
UnityEngine::Transform.RotateAroundInternal_Injected = (void(*)(void*, Vector3 *, float))UnityEngine::Transform.RotateAroundInternal_InjectedOffset;

UnityEngine::Transform.Internal_LookAt_InjectedOffset = getRealOffset(0x105FD8C);
UnityEngine::Transform.Internal_LookAt_Injected = (void(*)(void*, Vector3 *, Vector3 *))UnityEngine::Transform.Internal_LookAt_InjectedOffset;

UnityEngine::Transform.TransformDirection_InjectedOffset = getRealOffset(0x105FDEC);
UnityEngine::Transform.TransformDirection_Injected = (void(*)(void*, Vector3 *, Vector3 *))UnityEngine::Transform.TransformDirection_InjectedOffset;

UnityEngine::Transform.InverseTransformDirection_InjectedOffset = getRealOffset(0x105FEE0);
UnityEngine::Transform.InverseTransformDirection_Injected = (void(*)(void*, Vector3 *, Vector3 *))UnityEngine::Transform.InverseTransformDirection_InjectedOffset;

UnityEngine::Transform.TransformPoint_InjectedOffset = getRealOffset(0x105FFD4);
UnityEngine::Transform.TransformPoint_Injected = (void(*)(void*, Vector3 *, Vector3 *))UnityEngine::Transform.TransformPoint_InjectedOffset;

UnityEngine::Transform.InverseTransformPoint_InjectedOffset = getRealOffset(0x1060110);
UnityEngine::Transform.InverseTransformPoint_Injected = (void(*)(void*, Vector3 *, Vector3 *))UnityEngine::Transform.InverseTransformPoint_InjectedOffset;

UnityEngine::Transform.get_lossyScale_InjectedOffset = getRealOffset(0x1060570);
UnityEngine::Transform.get_lossyScale_Injected = (void(*)(void*, Vector3 *))UnityEngine::Transform.get_lossyScale_InjectedOffset;

UnityEngine::SpriteRenderer.set_spriteOffset = getRealOffset(0x1056D00);
UnityEngine::SpriteRenderer.set_sprite = (void(*)(void*, void *))UnityEngine::SpriteRenderer.set_spriteOffset;

UnityEngine::SpriteRenderer.get_sizeOffset = getRealOffset(0x1056D58);
UnityEngine::SpriteRenderer.get_size = (Vector2 (*)(void*))UnityEngine::SpriteRenderer.get_sizeOffset;

UnityEngine::SpriteRenderer.set_sizeOffset = getRealOffset(0x1056E24);
UnityEngine::SpriteRenderer.set_size = (void(*)(void*, Vector2))UnityEngine::SpriteRenderer.set_sizeOffset;

UnityEngine::Sprite.GetPackingModeOffset = getRealOffset(0x1055A2C);
UnityEngine::Sprite.GetPackingMode = (int(*)(void*))UnityEngine::Sprite.GetPackingModeOffset;

UnityEngine::Sprite.GetPackedOffset = getRealOffset(0x1055A7C);
UnityEngine::Sprite.GetPacked = (int(*)(void*))UnityEngine::Sprite.GetPackedOffset;

UnityEngine::Sprite.GetTextureRectOffset = getRealOffset(0x1055ACC);
UnityEngine::Sprite.GetTextureRect = (int (*)(void*))UnityEngine::Sprite.GetTextureRectOffset;

UnityEngine::Sprite.GetInnerUVsOffset = getRealOffset(0x1055B98);
UnityEngine::Sprite.GetInnerUVs = (int (*)(void*))UnityEngine::Sprite.GetInnerUVsOffset;

UnityEngine::Sprite.GetOuterUVsOffset = getRealOffset(0x1055C64);
UnityEngine::Sprite.GetOuterUVs = (int (*)(void*))UnityEngine::Sprite.GetOuterUVsOffset;

UnityEngine::Sprite.GetPaddingOffset = getRealOffset(0x1055D30);
UnityEngine::Sprite.GetPadding = (int (*)(void*))UnityEngine::Sprite.GetPaddingOffset;

UnityEngine::Sprite.get_boundsOffset = getRealOffset(0x1055F68);
UnityEngine::Sprite.get_bounds = (int (*)(void*))UnityEngine::Sprite.get_boundsOffset;

UnityEngine::Sprite.get_rectOffset = getRealOffset(0x1056050);
UnityEngine::Sprite.get_rect = (int (*)(void*))UnityEngine::Sprite.get_rectOffset;

UnityEngine::Sprite.get_borderOffset = getRealOffset(0x105611C);
UnityEngine::Sprite.get_border = (int (*)(void*))UnityEngine::Sprite.get_borderOffset;

UnityEngine::Sprite.get_textureOffset = getRealOffset(0x10561E8);
UnityEngine::Sprite.get_texture = (void *(*)(void*))UnityEngine::Sprite.get_textureOffset;

UnityEngine::Sprite.get_pixelsPerUnitOffset = getRealOffset(0x1056238);
UnityEngine::Sprite.get_pixelsPerUnit = (float(*)(void*))UnityEngine::Sprite.get_pixelsPerUnitOffset;

UnityEngine::Sprite.get_associatedAlphaSplitTextureOffset = getRealOffset(0x1056288);
UnityEngine::Sprite.get_associatedAlphaSplitTexture = (void *(*)(void*))UnityEngine::Sprite.get_associatedAlphaSplitTextureOffset;

UnityEngine::Sprite.get_pivotOffset = getRealOffset(0x10562D8);
UnityEngine::Sprite.get_pivot = (Vector2 (*)(void*))UnityEngine::Sprite.get_pivotOffset;

UnityEngine::Sprite.get_packedOffset = getRealOffset(0x10563A4);
UnityEngine::Sprite.get_packed = (bool(*)(void*))UnityEngine::Sprite.get_packedOffset;

UnityEngine::Sprite.get_packingModeOffset = getRealOffset(0x1056400);
UnityEngine::Sprite.get_packingMode = (int (*)(void*))UnityEngine::Sprite.get_packingModeOffset;

UnityEngine::Sprite.get_textureRectOffset = getRealOffset(0x1056450);
UnityEngine::Sprite.get_textureRect = (int (*)(void*))UnityEngine::Sprite.get_textureRectOffset;

UnityEngine::Sprite.get_verticesOffset = getRealOffset(0x1056580);
UnityEngine::Sprite.get_trianglesOffset = getRealOffset(0x10565D0);
UnityEngine::Sprite.get_uvOffset = getRealOffset(0x1056620);
UnityEngine::Sprite.Create4Offset = getRealOffset(0x1056C70);
UnityEngine::Sprite.Create4 = (void *(*)(void *, int, Vector2, float))UnityEngine::Sprite.Create4Offset;

UnityEngine::Sprite.Create5Offset = getRealOffset(0x1056CB8);
UnityEngine::Sprite.Create5 = (void *(*)(void *, int, Vector2))UnityEngine::Sprite.Create5Offset;

UnityEngineAssertions::Assert.FailOffset = getRealOffset(0x113089C);
UnityEngineAssertions::Assert.Fail = (void(*)(monoString*, monoString*))UnityEngineAssertions::Assert.FailOffset;

UnityEngineAssertions::Assert.AreEqual2Offset = getRealOffset(0x1130B6C);
UnityEngineAssertions::Assert.AreEqual2 = (void(*)(void *, void *, monoString*))UnityEngineAssertions::Assert.AreEqual2Offset;

UnityEngineAssertions::Assert.AreEqual3Offset = getRealOffset(0x1130E9C);
UnityEngineAssertions::Assert.AreEqual3 = (void(*)(int, int))UnityEngineAssertions::Assert.AreEqual3Offset;

UnityEngineAssertions::AssertionException.get_MessageOffset = getRealOffset(0x1130F98);
UnityEngineAssertions::AssertionException.get_Message = (monoString *(*)(void*))UnityEngineAssertions::AssertionException.get_MessageOffset;

UnityEngineAssertions::AssertionMessageUtil.GetMessageOffset = getRealOffset(0x1131010);
UnityEngineAssertions::AssertionMessageUtil.GetMessage = (monoString *(*)(monoString*))UnityEngineAssertions::AssertionMessageUtil.GetMessageOffset;

UnityEngineAssertions::AssertionMessageUtil.GetMessage1Offset = getRealOffset(0x1131138);
UnityEngineAssertions::AssertionMessageUtil.GetMessage1 = (monoString *(*)(monoString*, monoString*))UnityEngineAssertions::AssertionMessageUtil.GetMessage1Offset;

UnityEngineEvents::ArgumentCache.get_unityObjectArgumentOffset = getRealOffset(0x113C6D8);
UnityEngineEvents::ArgumentCache.get_unityObjectArgument = (void *(*)(void*))UnityEngineEvents::ArgumentCache.get_unityObjectArgumentOffset;

UnityEngineEvents::ArgumentCache.get_unityObjectArgumentAssemblyTypeNameOffset = getRealOffset(0x113C6E0);
UnityEngineEvents::ArgumentCache.get_unityObjectArgumentAssemblyTypeName = (monoString *(*)(void*))UnityEngineEvents::ArgumentCache.get_unityObjectArgumentAssemblyTypeNameOffset;

UnityEngineEvents::ArgumentCache.get_intArgumentOffset = getRealOffset(0x113C6E8);
UnityEngineEvents::ArgumentCache.get_intArgument = (int(*)(void*))UnityEngineEvents::ArgumentCache.get_intArgumentOffset;

UnityEngineEvents::ArgumentCache.get_floatArgumentOffset = getRealOffset(0x113C6F0);
UnityEngineEvents::ArgumentCache.get_floatArgument = (float(*)(void*))UnityEngineEvents::ArgumentCache.get_floatArgumentOffset;

UnityEngineEvents::ArgumentCache.get_stringArgumentOffset = getRealOffset(0x113C6F8);
UnityEngineEvents::ArgumentCache.get_stringArgument = (monoString *(*)(void*))UnityEngineEvents::ArgumentCache.get_stringArgumentOffset;

UnityEngineEvents::ArgumentCache.get_boolArgumentOffset = getRealOffset(0x113C700);
UnityEngineEvents::ArgumentCache.get_boolArgument = (bool(*)(void*))UnityEngineEvents::ArgumentCache.get_boolArgumentOffset;

UnityEngineEvents::ArgumentCache.TidyAssemblyTypeNameOffset = getRealOffset(0x113C708);
UnityEngineEvents::ArgumentCache.TidyAssemblyTypeName = (void(*)(void*))UnityEngineEvents::ArgumentCache.TidyAssemblyTypeNameOffset;

UnityEngineEvents::ArgumentCache.OnBeforeSerializeOffset = getRealOffset(0x113C9AC);
UnityEngineEvents::ArgumentCache.OnBeforeSerialize = (void(*)(void*))UnityEngineEvents::ArgumentCache.OnBeforeSerializeOffset;

UnityEngineEvents::ArgumentCache.OnAfterDeserializeOffset = getRealOffset(0x113C9B0);
UnityEngineEvents::ArgumentCache.OnAfterDeserialize = (void(*)(void*))UnityEngineEvents::ArgumentCache.OnAfterDeserializeOffset;

UnityEngineEvents::BaseInvokableCall.AllowInvokeOffset = getRealOffset(0x113CAA0);
UnityEngineEvents::BaseInvokableCall.AllowInvoke = (bool(*)(void *))UnityEngineEvents::BaseInvokableCall.AllowInvokeOffset;

UnityEngineEvents::InvokableCall.add_DelegateOffset = getRealOffset(0x113CB6C);
UnityEngineEvents::InvokableCall.add_Delegate = (void(*)(void*, void *))UnityEngineEvents::InvokableCall.add_DelegateOffset;

UnityEngineEvents::InvokableCall.remove_DelegateOffset = getRealOffset(0x113CC1C);
UnityEngineEvents::InvokableCall.remove_Delegate = (void(*)(void*, void *))UnityEngineEvents::InvokableCall.remove_DelegateOffset;

UnityEngineEvents::InvokableCall.ctor1Offset = getRealOffset(0x113CDC0);
UnityEngineEvents::InvokableCall.ctor1 = (void(*)(void*, void *))UnityEngineEvents::InvokableCall.ctor1Offset;

UnityEngineEvents::InvokableCall.Invoke1Offset = getRealOffset(0x113CE20);
UnityEngineEvents::InvokableCall.Invoke1 = (void(*)(void*))UnityEngineEvents::InvokableCall.Invoke1Offset;

UnityEngineEvents::PersistentCall.get_targetOffset = getRealOffset(0x113D41C);
UnityEngineEvents::PersistentCall.get_target = (void *(*)(void*))UnityEngineEvents::PersistentCall.get_targetOffset;

UnityEngineEvents::PersistentCall.get_methodNameOffset = getRealOffset(0x113D424);
UnityEngineEvents::PersistentCall.get_methodName = (monoString *(*)(void*))UnityEngineEvents::PersistentCall.get_methodNameOffset;

UnityEngineEvents::PersistentCall.get_modeOffset = getRealOffset(0x113D42C);
UnityEngineEvents::PersistentCall.get_mode = (int (*)(void*))UnityEngineEvents::PersistentCall.get_modeOffset;

UnityEngineEvents::PersistentCall.get_argumentsOffset = getRealOffset(0x113D434);
UnityEngineEvents::PersistentCall.get_arguments = (void *(*)(void*))UnityEngineEvents::PersistentCall.get_argumentsOffset;

UnityEngineEvents::PersistentCall.set_callStateOffset = getRealOffset(0x113D43C);
UnityEngineEvents::PersistentCall.set_callState = (void(*)(void*, int))UnityEngineEvents::PersistentCall.set_callStateOffset;

UnityEngineEvents::PersistentCall.IsValidOffset = getRealOffset(0x113D444);
UnityEngineEvents::PersistentCall.IsValid = (bool(*)(void*))UnityEngineEvents::PersistentCall.IsValidOffset;

UnityEngineEvents::PersistentCall.GetRuntimeCallOffset = getRealOffset(0x113D4E8);
UnityEngineEvents::PersistentCall.GetRuntimeCall = (void *(*)(void*, void *))UnityEngineEvents::PersistentCall.GetRuntimeCallOffset;

UnityEngineEvents::PersistentCall.GetObjectCallOffset = getRealOffset(0x113D908);
UnityEngineEvents::PersistentCall.GetObjectCall = (void *(*)(void *, void *, void *))UnityEngineEvents::PersistentCall.GetObjectCallOffset;

UnityEngineEvents::PersistentCallGroup.get_CountOffset = getRealOffset(0x113DF88);
UnityEngineEvents::PersistentCallGroup.get_Count = (int(*)(void*))UnityEngineEvents::PersistentCallGroup.get_CountOffset;

UnityEngineEvents::PersistentCallGroup.GetListenerOffset = getRealOffset(0x113DFE0);
UnityEngineEvents::PersistentCallGroup.GetListener = (void *(*)(void*, int))UnityEngineEvents::PersistentCallGroup.GetListenerOffset;

UnityEngineEvents::PersistentCallGroup.InitializeOffset = getRealOffset(0x113E058);
UnityEngineEvents::PersistentCallGroup.Initialize = (void(*)(void*, void *, void *))UnityEngineEvents::PersistentCallGroup.InitializeOffset;

UnityEngineEvents::InvokableCallList.AddPersistentInvokableCallOffset = getRealOffset(0x113CED8);
UnityEngineEvents::InvokableCallList.AddPersistentInvokableCall = (void(*)(void*, void *))UnityEngineEvents::InvokableCallList.AddPersistentInvokableCallOffset;

UnityEngineEvents::InvokableCallList.AddListenerOffset = getRealOffset(0x113CF54);
UnityEngineEvents::InvokableCallList.AddListener = (void(*)(void*, void *))UnityEngineEvents::InvokableCallList.AddListenerOffset;

UnityEngineEvents::InvokableCallList.ClearOffset = getRealOffset(0x113D1A4);
UnityEngineEvents::InvokableCallList.Clear = (void(*)(void*))UnityEngineEvents::InvokableCallList.ClearOffset;

UnityEngineEvents::InvokableCallList.ClearPersistentOffset = getRealOffset(0x113D218);
UnityEngineEvents::InvokableCallList.ClearPersistent = (void(*)(void*))UnityEngineEvents::InvokableCallList.ClearPersistentOffset;

UnityEngineEvents::InvokableCallList.PrepareInvokeOffset = getRealOffset(0x113D28C);
UnityEngineEvents::UnityEventBase.UnityEngineISerializationCallbackReceiverOnBeforeSerializeOffset = getRealOffset(0x113E8EC);
UnityEngineEvents::UnityEventBase.UnityEngineISerializationCallbackReceiverOnBeforeSerialize = (void(*)(void*))UnityEngineEvents::UnityEventBase.UnityEngineISerializationCallbackReceiverOnBeforeSerializeOffset;

UnityEngineEvents::UnityEventBase.UnityEngineISerializationCallbackReceiverOnAfterDeserializeOffset = getRealOffset(0x113E8F0);
UnityEngineEvents::UnityEventBase.UnityEngineISerializationCallbackReceiverOnAfterDeserialize = (void(*)(void*))UnityEngineEvents::UnityEventBase.UnityEngineISerializationCallbackReceiverOnAfterDeserializeOffset;

UnityEngineEvents::UnityEventBase.FindMethodOffset = getRealOffset(0x113D774);
UnityEngineEvents::UnityEventBase.FindMethod = (void *(*)(void*, void *))UnityEngineEvents::UnityEventBase.FindMethodOffset;

UnityEngineEvents::UnityEventBase.GetPersistentEventCountOffset = getRealOffset(0x113EC54);
UnityEngineEvents::UnityEventBase.GetPersistentEventCount = (int(*)(void*))UnityEngineEvents::UnityEventBase.GetPersistentEventCountOffset;

UnityEngineEvents::UnityEventBase.DirtyPersistentCallsOffset = getRealOffset(0x113E8F4);
UnityEngineEvents::UnityEventBase.DirtyPersistentCalls = (void(*)(void*))UnityEngineEvents::UnityEventBase.DirtyPersistentCallsOffset;

UnityEngineEvents::UnityEventBase.RebuildPersistentCallsIfNeededOffset = getRealOffset(0x113EC78);
UnityEngineEvents::UnityEventBase.RebuildPersistentCallsIfNeeded = (void(*)(void*))UnityEngineEvents::UnityEventBase.RebuildPersistentCallsIfNeededOffset;

UnityEngineEvents::UnityEventBase.SetPersistentListenerStateOffset = getRealOffset(0x113ECC0);
UnityEngineEvents::UnityEventBase.SetPersistentListenerState = (void(*)(void*, int, int))UnityEngineEvents::UnityEventBase.SetPersistentListenerStateOffset;

UnityEngineEvents::UnityEventBase.AddCallOffset = getRealOffset(0x113E378);
UnityEngineEvents::UnityEventBase.AddCall = (void(*)(void*, void *))UnityEngineEvents::UnityEventBase.AddCallOffset;

UnityEngineEvents::UnityEventBase.RemoveAllListenersOffset = getRealOffset(0x113ED04);
UnityEngineEvents::UnityEventBase.RemoveAllListeners = (void(*)(void*))UnityEngineEvents::UnityEventBase.RemoveAllListenersOffset;

UnityEngineEvents::UnityEventBase.PrepareInvokeOffset = getRealOffset(0x113E8C0);
UnityEngineEvents::UnityEventBase.ToStringOffset = getRealOffset(0x113ED28);
UnityEngineEvents::UnityEventBase.ToString = (monoString *(*)(void*))UnityEngineEvents::UnityEventBase.ToStringOffset;

UnityEngineEvents::UnityAction.InvokeOffset = getRealOffset(0x1131E04);
UnityEngineEvents::UnityAction.Invoke = (void(*)(void*))UnityEngineEvents::UnityAction.InvokeOffset;

UnityEngineEvents::UnityAction.EndInvokeOffset = getRealOffset(0x113E21C);
UnityEngineEvents::UnityAction.EndInvoke = (void(*)(void*, void *))UnityEngineEvents::UnityAction.EndInvokeOffset;

UnityEngineEvents::UnityEvent.AddListenerOffset = getRealOffset(0x113E2CC);
UnityEngineEvents::UnityEvent.AddListener = (void(*)(void*, void *))UnityEngineEvents::UnityEvent.AddListenerOffset;

UnityEngineEvents::UnityEvent.RemoveListenerOffset = getRealOffset(0x113E3A4);
UnityEngineEvents::UnityEvent.RemoveListener = (void(*)(void*, void *))UnityEngineEvents::UnityEvent.RemoveListenerOffset;

UnityEngineEvents::UnityEvent.GetDelegate1Offset = getRealOffset(0x113E304);
UnityEngineEvents::UnityEvent.GetDelegate1 = (void *(*)(void *))UnityEngineEvents::UnityEvent.GetDelegate1Offset;

UnityEngineEvents::UnityEvent.InvokeOffset = getRealOffset(0x113E720);
UnityEngineEvents::UnityEvent.Invoke = (void(*)(void*))UnityEngineEvents::UnityEvent.InvokeOffset;

UnityEngineExperimentalGlobalIllumination::LinearColor.ConvertOffset = getRealOffset(0x113F2D0);
UnityEngineExperimentalGlobalIllumination::LinearColor.Convert = (int (*)(Color, float))UnityEngineExperimentalGlobalIllumination::LinearColor.ConvertOffset;

UnityEngineExperimentalGlobalIllumination::LinearColor.BlackOffset = getRealOffset(0x1140CE8);
UnityEngineExperimentalGlobalIllumination::LinearColor.Black = (int (*)())UnityEngineExperimentalGlobalIllumination::LinearColor.BlackOffset;

UnityEngineExperimentalGlobalIllumination::LightDataGI.InitNoBakeOffset = getRealOffset(0x3F2338);
UnityEngineExperimentalGlobalIllumination::LightDataGI.InitNoBake = (void(*)(void*, int))UnityEngineExperimentalGlobalIllumination::LightDataGI.InitNoBakeOffset;

UnityEngineExperimentalGlobalIllumination::LightmapperUtils.ExtractIndirectOffset = getRealOffset(0x113F210);
UnityEngineExperimentalGlobalIllumination::LightmapperUtils.ExtractIndirect = (int (*)(void *))UnityEngineExperimentalGlobalIllumination::LightmapperUtils.ExtractIndirectOffset;

UnityEngineExperimentalGlobalIllumination::LightmapperUtils.ExtractInnerConeOffset = getRealOffset(0x113F410);
UnityEngineExperimentalGlobalIllumination::LightmapperUtils.ExtractInnerCone = (float(*)(void *))UnityEngineExperimentalGlobalIllumination::LightmapperUtils.ExtractInnerConeOffset;

UnityEngineExperimentalGlobalIllumination::Lightmapping.SetDelegateOffset = getRealOffset(0x113FED8);
UnityEngineExperimentalGlobalIllumination::Lightmapping.SetDelegate = (void(*)(void *))UnityEngineExperimentalGlobalIllumination::Lightmapping.SetDelegateOffset;

UnityEngineExperimentalGlobalIllumination::Lightmapping.GetDelegateOffset = getRealOffset(0x113FF84);
UnityEngineExperimentalGlobalIllumination::Lightmapping.GetDelegate = (void *(*)())UnityEngineExperimentalGlobalIllumination::Lightmapping.GetDelegateOffset;

UnityEngineExperimentalGlobalIllumination::Lightmapping.ResetDelegateOffset = getRealOffset(0x113FFFC);
UnityEngineExperimentalGlobalIllumination::Lightmapping.ResetDelegate = (void(*)())UnityEngineExperimentalGlobalIllumination::Lightmapping.ResetDelegateOffset;

UnityEngineExperimentalPlayables::CameraPlayable.GetHandleOffset = getRealOffset(0x3F2678);
UnityEngineExperimentalPlayables::CameraPlayable.GetHandle = (int (*)(void*))UnityEngineExperimentalPlayables::CameraPlayable.GetHandleOffset;

UnityEngineExperimentalPlayables::CameraPlayable.EqualsOffset = getRealOffset(0x3F268C);
UnityEngineExperimentalPlayables::CameraPlayable.Equals = (bool(*)(void*, int))UnityEngineExperimentalPlayables::CameraPlayable.EqualsOffset;

UnityEngineExperimentalPlayables::MaterialEffectPlayable.GetHandleOffset = getRealOffset(0x3F2694);
UnityEngineExperimentalPlayables::MaterialEffectPlayable.GetHandle = (int (*)(void*))UnityEngineExperimentalPlayables::MaterialEffectPlayable.GetHandleOffset;

UnityEngineExperimentalPlayables::MaterialEffectPlayable.EqualsOffset = getRealOffset(0x3F26A8);
UnityEngineExperimentalPlayables::MaterialEffectPlayable.Equals = (bool(*)(void*, int))UnityEngineExperimentalPlayables::MaterialEffectPlayable.EqualsOffset;

UnityEngineExperimentalPlayables::TextureMixerPlayable.GetHandleOffset = getRealOffset(0x3F26B0);
UnityEngineExperimentalPlayables::TextureMixerPlayable.GetHandle = (int (*)(void*))UnityEngineExperimentalPlayables::TextureMixerPlayable.GetHandleOffset;

UnityEngineExperimentalPlayables::TextureMixerPlayable.EqualsOffset = getRealOffset(0x3F26C4);
UnityEngineExperimentalPlayables::TextureMixerPlayable.Equals = (bool(*)(void*, int))UnityEngineExperimentalPlayables::TextureMixerPlayable.EqualsOffset;

UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.TickRealtimeProbesOffset = getRealOffset(0x1140F10);
UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.TickRealtimeProbes = (bool(*)(void*))UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.TickRealtimeProbesOffset;

UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.DisposeOffset = getRealOffset(0x1140FA0);
UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.Dispose = (void(*)(void*))UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.DisposeOffset;

UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.Dispose1Offset = getRealOffset(0x1140FA4);
UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.Dispose1 = (void(*)(void*, bool))UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.Dispose1Offset;

UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.BuiltinUpdateOffset = getRealOffset(0x1140F58);
UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.BuiltinUpdate = (bool(*)())UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.BuiltinUpdateOffset;

UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.Internal_BuiltinRuntimeReflectionSystem_NewOffset = getRealOffset(0x1140FA8);
UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.Internal_BuiltinRuntimeReflectionSystem_New = (void *(*)())UnityEngineExperimentalRendering::BuiltinRuntimeReflectionSystem.Internal_BuiltinRuntimeReflectionSystem_NewOffset;

UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.set_Internal_ScriptableRuntimeReflectionSystemSettings_systemOffset = getRealOffset(0x1141288);
UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.set_Internal_ScriptableRuntimeReflectionSystemSettings_system = (void(*)(void *))UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.set_Internal_ScriptableRuntimeReflectionSystemSettings_systemOffset;

UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.get_Internal_ScriptableRuntimeReflectionSystemSettings_instanceOffset = getRealOffset(0x114145C);
UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.get_Internal_ScriptableRuntimeReflectionSystemSettings_instance = (void *(*)())UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.get_Internal_ScriptableRuntimeReflectionSystemSettings_instanceOffset;

UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.ScriptingDirtyReflectionSystemInstanceOffset = getRealOffset(0x11414D4);
UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.ScriptingDirtyReflectionSystemInstance = (void(*)())UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemSettings.ScriptingDirtyReflectionSystemInstanceOffset;

UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemWrapper.get_implementationOffset = getRealOffset(0x114159C);
UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemWrapper.get_implementation = (void *(*)(void*))UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemWrapper.get_implementationOffset;

UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemWrapper.set_implementationOffset = getRealOffset(0x11415A4);
UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemWrapper.set_implementation = (void(*)(void*, void *))UnityEngineExperimentalRendering::ScriptableRuntimeReflectionSystemWrapper.set_implementationOffset;

UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormatOffset = getRealOffset(0x1139118);
UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormat = (int (*)(int, bool))UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormatOffset;

UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormat_Native_TextureFormatOffset = getRealOffset(0x1141014);
UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormat_Native_TextureFormat = (int (*)(int, bool))UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormat_Native_TextureFormatOffset;

UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormat1Offset = getRealOffset(0x114106C);
UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormat1 = (int (*)(int, bool))UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormat1Offset;

UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormat_Native_RenderTextureFormatOffset = getRealOffset(0x11410C4);
UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormat_Native_RenderTextureFormat = (int (*)(int, bool))UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormat_Native_RenderTextureFormatOffset;

UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormat11Offset = getRealOffset(0x114111C);
UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormat11 = (int (*)(int, int))UnityEngineExperimentalRendering::GraphicsFormatUtility.GetGraphicsFormat11Offset;

UnityEngineExperimentalRendering::GraphicsFormatUtility.IsSRGBFormatOffset = getRealOffset(0x1141198);
UnityEngineExperimentalRendering::GraphicsFormatUtility.IsSRGBFormat = (bool(*)(int))UnityEngineExperimentalRendering::GraphicsFormatUtility.IsSRGBFormatOffset;

UnityEngineExperimentalRendering::GraphicsFormatUtility.GetRenderTextureFormatOffset = getRealOffset(0x11411E8);
UnityEngineExperimentalRendering::GraphicsFormatUtility.GetRenderTextureFormat = (int (*)(int))UnityEngineExperimentalRendering::GraphicsFormatUtility.GetRenderTextureFormatOffset;

UnityEngineExperimentalRendering::GraphicsFormatUtility.IsCompressedTextureFormatOffset = getRealOffset(0x1141238);
UnityEngineExperimentalRendering::GraphicsFormatUtility.IsCompressedTextureFormat = (bool(*)(int))UnityEngineExperimentalRendering::GraphicsFormatUtility.IsCompressedTextureFormatOffset;

UnityEngineExperimentalRendering::GraphicsFormatUtility.IsCrunchFormatOffset = getRealOffset(0x1139170);
UnityEngineExperimentalRendering::GraphicsFormatUtility.IsCrunchFormat = (bool(*)(int))UnityEngineExperimentalRendering::GraphicsFormatUtility.IsCrunchFormatOffset;

UnityEngineInternal::DefaultValueAttribute.get_ValueOffset = getRealOffset(0x114682C);
UnityEngineInternal::DefaultValueAttribute.GetHashCodeOffset = getRealOffset(0x1146918);
UnityEngineInternal::DefaultValueAttribute.GetHashCode = (int(*)(void*))UnityEngineInternal::DefaultValueAttribute.GetHashCodeOffset;

UnityEngineNetworkingPlayerConnection::PlayerConnection.get_instanceOffset = getRealOffset(0x116EFF0);
UnityEngineNetworkingPlayerConnection::PlayerConnection.get_instance = (void *(*)())UnityEngineNetworkingPlayerConnection::PlayerConnection.get_instanceOffset;

UnityEngineNetworkingPlayerConnection::PlayerConnection.get_isConnectedOffset = getRealOffset(0x116F1EC);
UnityEngineNetworkingPlayerConnection::PlayerConnection.get_isConnected = (bool(*)(void*))UnityEngineNetworkingPlayerConnection::PlayerConnection.get_isConnectedOffset;

UnityEngineNetworkingPlayerConnection::PlayerConnection.CreateInstanceOffset = getRealOffset(0x116F11C);
UnityEngineNetworkingPlayerConnection::PlayerConnection.CreateInstance = (void *(*)())UnityEngineNetworkingPlayerConnection::PlayerConnection.CreateInstanceOffset;

UnityEngineNetworkingPlayerConnection::PlayerConnection.OnEnableOffset = getRealOffset(0x116F394);
UnityEngineNetworkingPlayerConnection::PlayerConnection.OnEnable = (void(*)(void*))UnityEngineNetworkingPlayerConnection::PlayerConnection.OnEnableOffset;

UnityEngineNetworkingPlayerConnection::PlayerConnection.GetConnectionNativeApiOffset = getRealOffset(0x116F2B8);
UnityEngineNetworkingPlayerConnection::PlayerConnection.GetConnectionNativeApi = (void *(*)(void*))UnityEngineNetworkingPlayerConnection::PlayerConnection.GetConnectionNativeApiOffset;

UnityEngineNetworkingPlayerConnection::PlayerConnection.BlockUntilRecvMsgOffset = getRealOffset(0x11703C4);
UnityEngineNetworkingPlayerConnection::PlayerConnection.BlockUntilRecvMsg = (bool(*)(void*, int, int))UnityEngineNetworkingPlayerConnection::PlayerConnection.BlockUntilRecvMsgOffset;

UnityEngineNetworkingPlayerConnection::PlayerConnection.DisconnectAllOffset = getRealOffset(0x1170664);
UnityEngineNetworkingPlayerConnection::PlayerConnection.DisconnectAll = (void(*)(void*))UnityEngineNetworkingPlayerConnection::PlayerConnection.DisconnectAllOffset;

UnityEngineNetworkingPlayerConnection::PlayerConnection.ConnectedCallbackInternalOffset = getRealOffset(0x1170D18);
UnityEngineNetworkingPlayerConnection::PlayerConnection.ConnectedCallbackInternal = (void(*)(int))UnityEngineNetworkingPlayerConnection::PlayerConnection.ConnectedCallbackInternalOffset;

UnityEngineNetworkingPlayerConnection::PlayerConnection.DisconnectedCallbackOffset = getRealOffset(0x1170DEC);
UnityEngineNetworkingPlayerConnection::PlayerConnection.DisconnectedCallback = (void(*)(int))UnityEngineNetworkingPlayerConnection::PlayerConnection.DisconnectedCallbackOffset;

UnityEngineNetworkingPlayerConnection::PlayerEditorConnectionEvents.AddAndCreateOffset = getRealOffset(0x116F7A8);
UnityEnginePlayables::Playable.get_NullOffset = getRealOffset(0x11736CC);
UnityEnginePlayables::Playable.get_Null = (int (*)())UnityEnginePlayables::Playable.get_NullOffset;

UnityEnginePlayables::Playable.GetHandleOffset = getRealOffset(0x3F3124);
UnityEnginePlayables::Playable.GetHandle = (int (*)(void*))UnityEnginePlayables::Playable.GetHandleOffset;

UnityEnginePlayables::Playable.EqualsOffset = getRealOffset(0x3F3138);
UnityEnginePlayables::Playable.Equals = (bool(*)(void*, int))UnityEnginePlayables::Playable.EqualsOffset;

UnityEnginePlayables::PlayableAsset.get_durationOffset = getRealOffset(0x11739C8);
UnityEnginePlayables::PlayableAsset.get_outputsOffset = getRealOffset(0x1173A44);
UnityEnginePlayables::PlayableBehaviour.OnGraphStartOffset = getRealOffset(0x1173C18);
UnityEnginePlayables::PlayableBehaviour.OnGraphStart = (void(*)(void*, int))UnityEnginePlayables::PlayableBehaviour.OnGraphStartOffset;

UnityEnginePlayables::PlayableBehaviour.OnGraphStopOffset = getRealOffset(0x1173C1C);
UnityEnginePlayables::PlayableBehaviour.OnGraphStop = (void(*)(void*, int))UnityEnginePlayables::PlayableBehaviour.OnGraphStopOffset;

UnityEnginePlayables::PlayableBehaviour.OnPlayableCreateOffset = getRealOffset(0x1173C20);
UnityEnginePlayables::PlayableBehaviour.OnPlayableCreate = (void(*)(void*, int))UnityEnginePlayables::PlayableBehaviour.OnPlayableCreateOffset;

UnityEnginePlayables::PlayableBehaviour.OnPlayableDestroyOffset = getRealOffset(0x1173C24);
UnityEnginePlayables::PlayableBehaviour.OnPlayableDestroy = (void(*)(void*, int))UnityEnginePlayables::PlayableBehaviour.OnPlayableDestroyOffset;

UnityEnginePlayables::PlayableBehaviour.OnBehaviourPlayOffset = getRealOffset(0x1173C28);
UnityEnginePlayables::PlayableBehaviour.OnBehaviourPlay = (void(*)(void*, int, int))UnityEnginePlayables::PlayableBehaviour.OnBehaviourPlayOffset;

UnityEnginePlayables::PlayableBehaviour.OnBehaviourPauseOffset = getRealOffset(0x1173C2C);
UnityEnginePlayables::PlayableBehaviour.OnBehaviourPause = (void(*)(void*, int, int))UnityEnginePlayables::PlayableBehaviour.OnBehaviourPauseOffset;

UnityEnginePlayables::PlayableBehaviour.PrepareFrameOffset = getRealOffset(0x1173C30);
UnityEnginePlayables::PlayableBehaviour.PrepareFrame = (void(*)(void*, int, int))UnityEnginePlayables::PlayableBehaviour.PrepareFrameOffset;

UnityEnginePlayables::PlayableBehaviour.CloneOffset = getRealOffset(0x1173C38);
UnityEnginePlayables::PlayableHandle.get_NullOffset = getRealOffset(0x1173940);
UnityEnginePlayables::PlayableHandle.get_Null = (int (*)())UnityEnginePlayables::PlayableHandle.get_NullOffset;

UnityEnginePlayables::PlayableHandle.op_EqualityOffset = getRealOffset(0x117380C);
UnityEnginePlayables::PlayableHandle.op_Equality = (bool(*)(int, int))UnityEnginePlayables::PlayableHandle.op_EqualityOffset;

UnityEnginePlayables::PlayableHandle.Equals1Offset = getRealOffset(0x3F31DC);
UnityEnginePlayables::PlayableHandle.Equals1 = (bool(*)(void*, int))UnityEnginePlayables::PlayableHandle.Equals1Offset;

UnityEnginePlayables::PlayableHandle.GetHashCodeOffset = getRealOffset(0x3F31E4);
UnityEnginePlayables::PlayableHandle.GetHashCode = (int(*)(void*))UnityEnginePlayables::PlayableHandle.GetHashCodeOffset;

UnityEnginePlayables::PlayableHandle.CompareVersionOffset = getRealOffset(0x1174140);
UnityEnginePlayables::PlayableHandle.CompareVersion = (bool(*)(int, int))UnityEnginePlayables::PlayableHandle.CompareVersionOffset;

UnityEnginePlayables::PlayableHandle.IsValidOffset = getRealOffset(0x3F3214);
UnityEnginePlayables::PlayableHandle.IsValid = (bool(*)(void*))UnityEnginePlayables::PlayableHandle.IsValidOffset;

UnityEnginePlayables::PlayableHandle.GetPlayableTypeOffset = getRealOffset(0x3F321C);
UnityEnginePlayables::PlayableHandle.GetPlayableType = (void *(*)(void*))UnityEnginePlayables::PlayableHandle.GetPlayableTypeOffset;

UnityEnginePlayables::PlayableOutput.GetHandleOffset = getRealOffset(0x3F3230);
UnityEnginePlayables::PlayableOutput.GetHandle = (int (*)(void*))UnityEnginePlayables::PlayableOutput.GetHandleOffset;

UnityEnginePlayables::PlayableOutput.EqualsOffset = getRealOffset(0x3F3244);
UnityEnginePlayables::PlayableOutput.Equals = (bool(*)(void*, int))UnityEnginePlayables::PlayableOutput.EqualsOffset;

UnityEnginePlayables::PlayableOutputHandle.get_NullOffset = getRealOffset(0x1174710);
UnityEnginePlayables::PlayableOutputHandle.get_Null = (int (*)())UnityEnginePlayables::PlayableOutputHandle.get_NullOffset;

UnityEnginePlayables::PlayableOutputHandle.GetHashCodeOffset = getRealOffset(0x3F324C);
UnityEnginePlayables::PlayableOutputHandle.GetHashCode = (int(*)(void*))UnityEnginePlayables::PlayableOutputHandle.GetHashCodeOffset;

UnityEnginePlayables::PlayableOutputHandle.op_EqualityOffset = getRealOffset(0x11745DC);
UnityEnginePlayables::PlayableOutputHandle.op_Equality = (bool(*)(int, int))UnityEnginePlayables::PlayableOutputHandle.op_EqualityOffset;

UnityEnginePlayables::PlayableOutputHandle.Equals1Offset = getRealOffset(0x3F3284);
UnityEnginePlayables::PlayableOutputHandle.Equals1 = (bool(*)(void*, int))UnityEnginePlayables::PlayableOutputHandle.Equals1Offset;

UnityEnginePlayables::PlayableOutputHandle.CompareVersionOffset = getRealOffset(0x11747C4);
UnityEnginePlayables::PlayableOutputHandle.CompareVersion = (bool(*)(int, int))UnityEnginePlayables::PlayableOutputHandle.CompareVersionOffset;

UnityEngineProfiling::Profiler.GetTotalAllocatedMemoryOffset = getRealOffset(0x1175EE0);
UnityEngineProfiling::Profiler.GetTotalAllocatedMemoryLongOffset = getRealOffset(0x1175F28);
UnityEngineProfiling::Profiler.GetTotalReservedMemoryOffset = getRealOffset(0x1175F70);
UnityEngineProfiling::Profiler.GetTotalReservedMemoryLongOffset = getRealOffset(0x1175FB8);
UnityEngineProfilingExperimental::DebugScreenCapture.set_imageFormatOffset = getRealOffset(0x3F3298);
UnityEngineProfilingExperimental::DebugScreenCapture.set_imageFormat = (void(*)(void*, int))UnityEngineProfilingExperimental::DebugScreenCapture.set_imageFormatOffset;

UnityEngineProfilingExperimental::DebugScreenCapture.set_widthOffset = getRealOffset(0x3F32A0);
UnityEngineProfilingExperimental::DebugScreenCapture.set_width = (void(*)(void*, int))UnityEngineProfilingExperimental::DebugScreenCapture.set_widthOffset;

UnityEngineProfilingExperimental::DebugScreenCapture.set_heightOffset = getRealOffset(0x3F32A8);
UnityEngineProfilingExperimental::DebugScreenCapture.set_height = (void(*)(void*, int))UnityEngineProfilingExperimental::DebugScreenCapture.set_heightOffset;

UnityEngineProfilingMemoryExperimental::MemoryProfiler.PrepareMetadataOffset = getRealOffset(0x1175968);
UnityEngineProfilingMemoryExperimental::MemoryProfiler.FinalizeSnapshotOffset = getRealOffset(0x1175D3C);
UnityEngineProfilingMemoryExperimental::MemoryProfiler.FinalizeSnapshot = (void(*)(monoString*, bool))UnityEngineProfilingMemoryExperimental::MemoryProfiler.FinalizeSnapshotOffset;

UnityEngineRendering::RenderTargetIdentifier.ToStringOffset = getRealOffset(0x3EF27C);
UnityEngineRendering::RenderTargetIdentifier.ToString = (monoString *(*)(void*))UnityEngineRendering::RenderTargetIdentifier.ToStringOffset;

UnityEngineRendering::RenderTargetIdentifier.GetHashCodeOffset = getRealOffset(0x3EF284);
UnityEngineRendering::RenderTargetIdentifier.GetHashCode = (int(*)(void*))UnityEngineRendering::RenderTargetIdentifier.GetHashCodeOffset;

UnityEngineRendering::RenderTargetIdentifier.EqualsOffset = getRealOffset(0x3EF28C);
UnityEngineRendering::RenderTargetIdentifier.Equals = (bool(*)(void*, int))UnityEngineRendering::RenderTargetIdentifier.EqualsOffset;

UnityEngineRendering::GraphicsSettings.get_lightsUseLinearIntensityOffset = getRealOffset(0x104E6EC);
UnityEngineRendering::GraphicsSettings.get_lightsUseLinearIntensity = (bool(*)())UnityEngineRendering::GraphicsSettings.get_lightsUseLinearIntensityOffset;

UnityEngineRendering::GraphicsSettings.AllowEnlightenSupportForUpgradedProjectOffset = getRealOffset(0x104E734);
UnityEngineRendering::GraphicsSettings.AllowEnlightenSupportForUpgradedProject = (bool(*)())UnityEngineRendering::GraphicsSettings.AllowEnlightenSupportForUpgradedProjectOffset;

UnityEngineRendering::GraphicsSettings.get_renderPipelineAssetOffset = getRealOffset(0x104E77C);
UnityEngineRendering::GraphicsSettings.get_renderPipelineAsset = (void *(*)())UnityEngineRendering::GraphicsSettings.get_renderPipelineAssetOffset;

UnityEngineRendering::GraphicsSettings.get_INTERNAL_defaultRenderPipelineOffset = getRealOffset(0x104E848);
UnityEngineRendering::GraphicsSettings.get_INTERNAL_defaultRenderPipeline = (void *(*)())UnityEngineRendering::GraphicsSettings.get_INTERNAL_defaultRenderPipelineOffset;

UnityEngineRendering::GraphicsSettings.get_defaultRenderPipelineOffset = getRealOffset(0x104E780);
UnityEngineRendering::GraphicsSettings.get_defaultRenderPipeline = (void *(*)())UnityEngineRendering::GraphicsSettings.get_defaultRenderPipelineOffset;

UnityEngineRendering::OnDemandRendering.get_renderFrameIntervalOffset = getRealOffset(0x104EACC);
UnityEngineRendering::OnDemandRendering.get_renderFrameInterval = (int(*)())UnityEngineRendering::OnDemandRendering.get_renderFrameIntervalOffset;

UnityEngineRendering::SphericalHarmonicsL2.get_ItemOffset = getRealOffset(0x3EF444);
UnityEngineRendering::SphericalHarmonicsL2.get_Item = (float(*)(void*, int, int))UnityEngineRendering::SphericalHarmonicsL2.get_ItemOffset;

UnityEngineRendering::SphericalHarmonicsL2.GetHashCodeOffset = getRealOffset(0x3EF44C);
UnityEngineRendering::SphericalHarmonicsL2.GetHashCode = (int(*)(void*))UnityEngineRendering::SphericalHarmonicsL2.GetHashCodeOffset;

UnityEngineRendering::SphericalHarmonicsL2.Equals1Offset = getRealOffset(0x3EF45C);
UnityEngineRendering::SphericalHarmonicsL2.Equals1 = (bool(*)(void*, int))UnityEngineRendering::SphericalHarmonicsL2.Equals1Offset;

UnityEngineRendering::SphericalHarmonicsL2.op_EqualityOffset = getRealOffset(0x1050F6C);
UnityEngineRendering::SphericalHarmonicsL2.op_Equality = (bool(*)(int, int))UnityEngineRendering::SphericalHarmonicsL2.op_EqualityOffset;

UnityEngineRendering::LODParameters.EqualsOffset = getRealOffset(0x3EF230);
UnityEngineRendering::LODParameters.Equals = (bool(*)(void*, int))UnityEngineRendering::LODParameters.EqualsOffset;

UnityEngineRendering::LODParameters.GetHashCodeOffset = getRealOffset(0x3EF274);
UnityEngineRendering::LODParameters.GetHashCode = (int(*)(void*))UnityEngineRendering::LODParameters.GetHashCodeOffset;

UnityEngineRendering::RenderPipeline.get_disposedOffset = getRealOffset(0x104ECEC);
UnityEngineRendering::RenderPipeline.get_disposed = (bool(*)(void*))UnityEngineRendering::RenderPipeline.get_disposedOffset;

UnityEngineRendering::RenderPipeline.set_disposedOffset = getRealOffset(0x104ECF4);
UnityEngineRendering::RenderPipeline.set_disposed = (void(*)(void*, bool))UnityEngineRendering::RenderPipeline.set_disposedOffset;

UnityEngineRendering::RenderPipeline.DisposeOffset = getRealOffset(0x104ECFC);
UnityEngineRendering::RenderPipeline.Dispose = (void(*)(void*))UnityEngineRendering::RenderPipeline.DisposeOffset;

UnityEngineRendering::RenderPipeline.Dispose1Offset = getRealOffset(0x104ED98);
UnityEngineRendering::RenderPipeline.Dispose1 = (void(*)(void*, bool))UnityEngineRendering::RenderPipeline.Dispose1Offset;

UnityEngineRendering::RenderPipelineAsset.InternalCreatePipelineOffset = getRealOffset(0x104ED9C);
UnityEngineRendering::RenderPipelineAsset.InternalCreatePipeline = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.InternalCreatePipelineOffset;

UnityEngineRendering::RenderPipelineAsset.get_renderingLayerMaskNamesOffset = getRealOffset(0x104F154);
UnityEngineRendering::RenderPipelineAsset.get_defaultMaterialOffset = getRealOffset(0x104F15C);
UnityEngineRendering::RenderPipelineAsset.get_defaultMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultMaterialOffset;

UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveShaderOffset = getRealOffset(0x104F164);
UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveShader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveShaderOffset;

UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveTransparentShaderOffset = getRealOffset(0x104F16C);
UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveTransparentShader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveTransparentShaderOffset;

UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveMaskedShaderOffset = getRealOffset(0x104F174);
UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveMaskedShader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_autodeskInteractiveMaskedShaderOffset;

UnityEngineRendering::RenderPipelineAsset.get_terrainDetailLitShaderOffset = getRealOffset(0x104F17C);
UnityEngineRendering::RenderPipelineAsset.get_terrainDetailLitShader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_terrainDetailLitShaderOffset;

UnityEngineRendering::RenderPipelineAsset.get_terrainDetailGrassShaderOffset = getRealOffset(0x104F184);
UnityEngineRendering::RenderPipelineAsset.get_terrainDetailGrassShader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_terrainDetailGrassShaderOffset;

UnityEngineRendering::RenderPipelineAsset.get_terrainDetailGrassBillboardShaderOffset = getRealOffset(0x104F18C);
UnityEngineRendering::RenderPipelineAsset.get_terrainDetailGrassBillboardShader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_terrainDetailGrassBillboardShaderOffset;

UnityEngineRendering::RenderPipelineAsset.get_defaultParticleMaterialOffset = getRealOffset(0x104F194);
UnityEngineRendering::RenderPipelineAsset.get_defaultParticleMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultParticleMaterialOffset;

UnityEngineRendering::RenderPipelineAsset.get_defaultLineMaterialOffset = getRealOffset(0x104F19C);
UnityEngineRendering::RenderPipelineAsset.get_defaultLineMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultLineMaterialOffset;

UnityEngineRendering::RenderPipelineAsset.get_defaultTerrainMaterialOffset = getRealOffset(0x104F1A4);
UnityEngineRendering::RenderPipelineAsset.get_defaultTerrainMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultTerrainMaterialOffset;

UnityEngineRendering::RenderPipelineAsset.get_defaultUIMaterialOffset = getRealOffset(0x104F1AC);
UnityEngineRendering::RenderPipelineAsset.get_defaultUIMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultUIMaterialOffset;

UnityEngineRendering::RenderPipelineAsset.get_defaultUIOverdrawMaterialOffset = getRealOffset(0x104F1B4);
UnityEngineRendering::RenderPipelineAsset.get_defaultUIOverdrawMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultUIOverdrawMaterialOffset;

UnityEngineRendering::RenderPipelineAsset.get_defaultUIETC1SupportedMaterialOffset = getRealOffset(0x104F1BC);
UnityEngineRendering::RenderPipelineAsset.get_defaultUIETC1SupportedMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultUIETC1SupportedMaterialOffset;

UnityEngineRendering::RenderPipelineAsset.get_default2DMaterialOffset = getRealOffset(0x104F1C4);
UnityEngineRendering::RenderPipelineAsset.get_default2DMaterial = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_default2DMaterialOffset;

UnityEngineRendering::RenderPipelineAsset.get_defaultShaderOffset = getRealOffset(0x104F1CC);
UnityEngineRendering::RenderPipelineAsset.get_defaultShader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultShaderOffset;

UnityEngineRendering::RenderPipelineAsset.get_defaultSpeedTree7ShaderOffset = getRealOffset(0x104F1D4);
UnityEngineRendering::RenderPipelineAsset.get_defaultSpeedTree7Shader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultSpeedTree7ShaderOffset;

UnityEngineRendering::RenderPipelineAsset.get_defaultSpeedTree8ShaderOffset = getRealOffset(0x104F1DC);
UnityEngineRendering::RenderPipelineAsset.get_defaultSpeedTree8Shader = (void *(*)(void*))UnityEngineRendering::RenderPipelineAsset.get_defaultSpeedTree8ShaderOffset;

UnityEngineRendering::RenderPipelineAsset.OnValidateOffset = getRealOffset(0x104F1E4);
UnityEngineRendering::RenderPipelineAsset.OnValidate = (void(*)(void*))UnityEngineRendering::RenderPipelineAsset.OnValidateOffset;

UnityEngineRendering::RenderPipelineAsset.OnDisableOffset = getRealOffset(0x104F8A0);
UnityEngineRendering::RenderPipelineAsset.OnDisable = (void(*)(void*))UnityEngineRendering::RenderPipelineAsset.OnDisableOffset;

UnityEngineRendering::RenderPipelineManager.get_currentPipelineOffset = getRealOffset(0x104F9D0);
UnityEngineRendering::RenderPipelineManager.get_currentPipeline = (void *(*)())UnityEngineRendering::RenderPipelineManager.get_currentPipelineOffset;

UnityEngineRendering::RenderPipelineManager.set_currentPipelineOffset = getRealOffset(0x104FA48);
UnityEngineRendering::RenderPipelineManager.set_currentPipeline = (void(*)(void *))UnityEngineRendering::RenderPipelineManager.set_currentPipelineOffset;

UnityEngineRendering::RenderPipelineManager.CleanupRenderPipelineOffset = getRealOffset(0x104F2D8);
UnityEngineRendering::RenderPipelineManager.CleanupRenderPipeline = (void(*)())UnityEngineRendering::RenderPipelineManager.CleanupRenderPipelineOffset;

UnityEngineRendering::RenderPipelineManager.GetCamerasOffset = getRealOffset(0x104FFBC);
UnityEngineRendering::RenderPipelineManager.GetCameras = (void(*)(int))UnityEngineRendering::RenderPipelineManager.GetCamerasOffset;

UnityEngineRendering::RenderPipelineManager.PrepareRenderPipelineOffset = getRealOffset(0x104F5C8);
UnityEngineRendering::RenderPipelineManager.PrepareRenderPipeline = (void(*)(void *))UnityEngineRendering::RenderPipelineManager.PrepareRenderPipelineOffset;

UnityEngineRendering::ScriptableRenderContext.GetNumberOfCameras_InternalOffset = getRealOffset(0x3EF2D0);
UnityEngineRendering::ScriptableRenderContext.GetNumberOfCameras_Internal = (int(*)(void*))UnityEngineRendering::ScriptableRenderContext.GetNumberOfCameras_InternalOffset;

UnityEngineRendering::ScriptableRenderContext.GetCamera_InternalOffset = getRealOffset(0x3EF320);
UnityEngineRendering::ScriptableRenderContext.GetCamera_Internal = (void *(*)(void*, int))UnityEngineRendering::ScriptableRenderContext.GetCamera_InternalOffset;

UnityEngineRendering::ScriptableRenderContext.GetNumberOfCamerasOffset = getRealOffset(0x3EF380);
UnityEngineRendering::ScriptableRenderContext.GetNumberOfCameras = (int(*)(void*))UnityEngineRendering::ScriptableRenderContext.GetNumberOfCamerasOffset;

UnityEngineRendering::ScriptableRenderContext.GetCameraOffset = getRealOffset(0x3EF3D0);
UnityEngineRendering::ScriptableRenderContext.GetCamera = (void *(*)(void*, int))UnityEngineRendering::ScriptableRenderContext.GetCameraOffset;

UnityEngineRendering::ScriptableRenderContext.EqualsOffset = getRealOffset(0x3EF428);
UnityEngineRendering::ScriptableRenderContext.Equals = (bool(*)(void*, int))UnityEngineRendering::ScriptableRenderContext.EqualsOffset;

UnityEngineRendering::ScriptableRenderContext.GetHashCodeOffset = getRealOffset(0x3EF438);
UnityEngineRendering::ScriptableRenderContext.GetHashCode = (int(*)(void*))UnityEngineRendering::ScriptableRenderContext.GetHashCodeOffset;

UnityEngineRendering::SupportedRenderingFeatures.get_activeOffset = getRealOffset(0x10511A8);
UnityEngineRendering::SupportedRenderingFeatures.get_active = (void *(*)())UnityEngineRendering::SupportedRenderingFeatures.get_activeOffset;

UnityEngineRendering::SupportedRenderingFeatures.set_activeOffset = getRealOffset(0x104FF40);
UnityEngineRendering::SupportedRenderingFeatures.set_active = (void(*)(void *))UnityEngineRendering::SupportedRenderingFeatures.set_activeOffset;

UnityEngineRendering::SupportedRenderingFeatures.get_defaultMixedLightingModesOffset = getRealOffset(0x10512E4);
UnityEngineRendering::SupportedRenderingFeatures.get_defaultMixedLightingModes = (int (*)(void*))UnityEngineRendering::SupportedRenderingFeatures.get_defaultMixedLightingModesOffset;

UnityEngineRendering::SupportedRenderingFeatures.get_mixedLightingModesOffset = getRealOffset(0x10512EC);
UnityEngineRendering::SupportedRenderingFeatures.get_mixedLightingModes = (int (*)(void*))UnityEngineRendering::SupportedRenderingFeatures.get_mixedLightingModesOffset;

UnityEngineRendering::SupportedRenderingFeatures.get_lightmapBakeTypesOffset = getRealOffset(0x10512F4);
UnityEngineRendering::SupportedRenderingFeatures.get_lightmapBakeTypes = (int (*)(void*))UnityEngineRendering::SupportedRenderingFeatures.get_lightmapBakeTypesOffset;

UnityEngineRendering::SupportedRenderingFeatures.get_lightmapsModesOffset = getRealOffset(0x10512FC);
UnityEngineRendering::SupportedRenderingFeatures.get_lightmapsModes = (int (*)(void*))UnityEngineRendering::SupportedRenderingFeatures.get_lightmapsModesOffset;

UnityEngineRendering::SupportedRenderingFeatures.get_enlightenOffset = getRealOffset(0x1051304);
UnityEngineRendering::SupportedRenderingFeatures.get_enlighten = (bool(*)(void*))UnityEngineRendering::SupportedRenderingFeatures.get_enlightenOffset;

UnityEngineRendering::SupportedRenderingFeatures.IsMixedLightingModeSupportedOffset = getRealOffset(0x10514D8);
UnityEngineRendering::SupportedRenderingFeatures.IsMixedLightingModeSupported = (bool(*)(int))UnityEngineRendering::SupportedRenderingFeatures.IsMixedLightingModeSupportedOffset;

UnityEngineRendering::SupportedRenderingFeatures.IsLightmapBakeTypeSupportedOffset = getRealOffset(0x10516EC);
UnityEngineRendering::SupportedRenderingFeatures.IsLightmapBakeTypeSupported = (bool(*)(int))UnityEngineRendering::SupportedRenderingFeatures.IsLightmapBakeTypeSupportedOffset;

UnityEngineSceneManagement::Scene.IsValidInternalOffset = getRealOffset(0x10522AC);
UnityEngineSceneManagement::Scene.IsValidInternal = (bool(*)(int))UnityEngineSceneManagement::Scene.IsValidInternalOffset;

UnityEngineSceneManagement::Scene.GetNameInternalOffset = getRealOffset(0x10522FC);
UnityEngineSceneManagement::Scene.GetNameInternal = (monoString *(*)(int))UnityEngineSceneManagement::Scene.GetNameInternalOffset;

UnityEngineSceneManagement::Scene.GetIsLoadedInternalOffset = getRealOffset(0x105234C);
UnityEngineSceneManagement::Scene.GetIsLoadedInternal = (bool(*)(int))UnityEngineSceneManagement::Scene.GetIsLoadedInternalOffset;

UnityEngineSceneManagement::Scene.GetBuildIndexInternalOffset = getRealOffset(0x105239C);
UnityEngineSceneManagement::Scene.GetBuildIndexInternal = (int(*)(int))UnityEngineSceneManagement::Scene.GetBuildIndexInternalOffset;

UnityEngineSceneManagement::Scene.GetRootCountInternalOffset = getRealOffset(0x10523EC);
UnityEngineSceneManagement::Scene.GetRootCountInternal = (int(*)(int))UnityEngineSceneManagement::Scene.GetRootCountInternalOffset;

UnityEngineSceneManagement::Scene.get_handleOffset = getRealOffset(0x3EF54C);
UnityEngineSceneManagement::Scene.get_handle = (int(*)(void*))UnityEngineSceneManagement::Scene.get_handleOffset;

UnityEngineSceneManagement::Scene.IsValidOffset = getRealOffset(0x3EF554);
UnityEngineSceneManagement::Scene.IsValid = (bool(*)(void*))UnityEngineSceneManagement::Scene.IsValidOffset;

UnityEngineSceneManagement::Scene.get_nameOffset = getRealOffset(0x3EF5A4);
UnityEngineSceneManagement::Scene.get_name = (monoString *(*)(void*))UnityEngineSceneManagement::Scene.get_nameOffset;

UnityEngineSceneManagement::Scene.get_isLoadedOffset = getRealOffset(0x3EF5F4);
UnityEngineSceneManagement::Scene.get_isLoaded = (bool(*)(void*))UnityEngineSceneManagement::Scene.get_isLoadedOffset;

UnityEngineSceneManagement::Scene.get_buildIndexOffset = getRealOffset(0x3EF644);
UnityEngineSceneManagement::Scene.get_buildIndex = (int(*)(void*))UnityEngineSceneManagement::Scene.get_buildIndexOffset;

UnityEngineSceneManagement::Scene.get_rootCountOffset = getRealOffset(0x3EF694);
UnityEngineSceneManagement::Scene.get_rootCount = (int(*)(void*))UnityEngineSceneManagement::Scene.get_rootCountOffset;

UnityEngineSceneManagement::Scene.GetRootGameObjectsOffset = getRealOffset(0x3EF6E4);
UnityEngineSceneManagement::Scene.GetHashCodeOffset = getRealOffset(0x3EF6F4);
UnityEngineSceneManagement::Scene.GetHashCode = (int(*)(void*))UnityEngineSceneManagement::Scene.GetHashCodeOffset;

UnityEngineSceneManagement::SceneManagerAPIInternal.LoadSceneAsyncNameIndexInternalOffset = getRealOffset(0x1052F44);
UnityEngineSceneManagement::SceneManagerAPIInternal.LoadSceneAsyncNameIndexInternal = (void *(*)(monoString*, int, int, bool))UnityEngineSceneManagement::SceneManagerAPIInternal.LoadSceneAsyncNameIndexInternalOffset;

UnityEngineSceneManagement::SceneManager.get_sceneCountOffset = getRealOffset(0x1052ABC);
UnityEngineSceneManagement::SceneManager.get_sceneCount = (int(*)())UnityEngineSceneManagement::SceneManager.get_sceneCountOffset;

UnityEngineSceneManagement::SceneManager.get_sceneCountInBuildSettingsOffset = getRealOffset(0x1052B04);
UnityEngineSceneManagement::SceneManager.get_sceneCountInBuildSettings = (int(*)())UnityEngineSceneManagement::SceneManager.get_sceneCountInBuildSettingsOffset;

UnityEngineSceneManagement::SceneManager.GetActiveSceneOffset = getRealOffset(0x1052B4C);
UnityEngineSceneManagement::SceneManager.GetActiveScene = (int (*)())UnityEngineSceneManagement::SceneManager.GetActiveSceneOffset;

UnityEngineSceneManagement::SceneManager.SetActiveSceneOffset = getRealOffset(0x1052C5C);
UnityEngineSceneManagement::SceneManager.SetActiveScene = (bool(*)(int))UnityEngineSceneManagement::SceneManager.SetActiveSceneOffset;

UnityEngineSceneManagement::SceneManager.GetSceneAtOffset = getRealOffset(0x1052D64);
UnityEngineSceneManagement::SceneManager.GetSceneAt = (int (*)(int))UnityEngineSceneManagement::SceneManager.GetSceneAtOffset;

UnityEngineSceneManagement::SceneManager.LoadSceneAsyncNameIndexInternalOffset = getRealOffset(0x1052E84);
UnityEngineSceneManagement::SceneManager.LoadSceneAsyncNameIndexInternal = (void *(*)(monoString*, int, int, bool))UnityEngineSceneManagement::SceneManager.LoadSceneAsyncNameIndexInternalOffset;

UnityEngineSceneManagement::SceneManager.GetAllScenesOffset = getRealOffset(0x10535E4);
UnityEngineSceneManagement::SceneManager.LoadSceneOffset = getRealOffset(0x1053780);
UnityEngineSceneManagement::SceneManager.LoadScene = (void(*)(monoString*, int))UnityEngineSceneManagement::SceneManager.LoadSceneOffset;

UnityEngineSceneManagement::SceneManager.LoadScene1Offset = getRealOffset(0x10538E4);
UnityEngineSceneManagement::SceneManager.LoadScene1 = (void(*)(monoString*))UnityEngineSceneManagement::SceneManager.LoadScene1Offset;

UnityEngineSceneManagement::SceneManager.LoadScene2Offset = getRealOffset(0x1053804);
UnityEngineSceneManagement::SceneManager.LoadScene2 = (int (*)(monoString*, int))UnityEngineSceneManagement::SceneManager.LoadScene2Offset;

UnityEngineSceneManagement::SceneManager.LoadScene3Offset = getRealOffset(0x1053964);
UnityEngineSceneManagement::SceneManager.LoadScene3 = (void(*)(int, int))UnityEngineSceneManagement::SceneManager.LoadScene3Offset;

UnityEngineSceneManagement::SceneManager.LoadScene4Offset = getRealOffset(0x1053AC8);
UnityEngineSceneManagement::SceneManager.LoadScene4 = (void(*)(int))UnityEngineSceneManagement::SceneManager.LoadScene4Offset;

UnityEngineSceneManagement::SceneManager.LoadScene5Offset = getRealOffset(0x10539E8);
UnityEngineSceneManagement::SceneManager.LoadScene5 = (int (*)(int, int))UnityEngineSceneManagement::SceneManager.LoadScene5Offset;

UnityEngineSceneManagement::SceneManager.LoadSceneAsyncOffset = getRealOffset(0x1053B48);
UnityEngineSceneManagement::SceneManager.LoadSceneAsync = (void *(*)(int, int))UnityEngineSceneManagement::SceneManager.LoadSceneAsyncOffset;

UnityEngineSceneManagement::SceneManager.LoadSceneAsync1Offset = getRealOffset(0x1053BCC);
UnityEngineSceneManagement::SceneManager.LoadSceneAsync1 = (void *(*)(int, int))UnityEngineSceneManagement::SceneManager.LoadSceneAsync1Offset;

UnityEngineSceneManagement::SceneManager.LoadSceneAsync2Offset = getRealOffset(0x1053C68);
UnityEngineSceneManagement::SceneManager.LoadSceneAsync2 = (void *(*)(monoString*, int))UnityEngineSceneManagement::SceneManager.LoadSceneAsync2Offset;

UnityEngineSceneManagement::SceneManager.LoadSceneAsync3Offset = getRealOffset(0x1053D88);
UnityEngineSceneManagement::SceneManager.LoadSceneAsync3 = (void *(*)(monoString*))UnityEngineSceneManagement::SceneManager.LoadSceneAsync3Offset;

UnityEngineSceneManagement::SceneManager.LoadSceneAsync4Offset = getRealOffset(0x1053CEC);
UnityEngineSceneManagement::SceneManager.LoadSceneAsync4 = (void *(*)(monoString*, int))UnityEngineSceneManagement::SceneManager.LoadSceneAsync4Offset;

UnityEngineSceneManagement::SceneManager.Internal_SceneLoadedOffset = getRealOffset(0x1053E08);
UnityEngineSceneManagement::SceneManager.Internal_SceneLoaded = (void(*)(int, int))UnityEngineSceneManagement::SceneManager.Internal_SceneLoadedOffset;

UnityEngineSceneManagement::SceneManager.Internal_SceneUnloadedOffset = getRealOffset(0x1053EEC);
UnityEngineSceneManagement::SceneManager.Internal_SceneUnloaded = (void(*)(int))UnityEngineSceneManagement::SceneManager.Internal_SceneUnloadedOffset;

UnityEngineSceneManagement::SceneManager.Internal_ActiveSceneChangedOffset = getRealOffset(0x1053FC8);
UnityEngineSceneManagement::SceneManager.Internal_ActiveSceneChanged = (void(*)(int, int))UnityEngineSceneManagement::SceneManager.Internal_ActiveSceneChangedOffset;

UnityEngineSceneManagement::SceneUtility.GetScenePathByBuildIndexOffset = getRealOffset(0x1054170);
UnityEngineSceneManagement::SceneUtility.GetScenePathByBuildIndex = (monoString *(*)(int))UnityEngineSceneManagement::SceneUtility.GetScenePathByBuildIndexOffset;

UnityEngineScriptingAPIUpdating::MovedFromAttributeData.SetOffset = getRealOffset(0x3EF828);
UnityEngineScriptingAPIUpdating::MovedFromAttributeData.Set = (void(*)(void*, bool, monoString*, monoString*, monoString*))UnityEngineScriptingAPIUpdating::MovedFromAttributeData.SetOffset;

UnityEngineSprites::DataUtility.GetInnerUVOffset = getRealOffset(0x1056EDC);
UnityEngineSprites::DataUtility.GetInnerUV = (int (*)(void *))UnityEngineSprites::DataUtility.GetInnerUVOffset;

UnityEngineSprites::DataUtility.GetOuterUVOffset = getRealOffset(0x1056F74);
UnityEngineSprites::DataUtility.GetOuterUV = (int (*)(void *))UnityEngineSprites::DataUtility.GetOuterUVOffset;

UnityEngineSprites::DataUtility.GetPaddingOffset = getRealOffset(0x105700C);
UnityEngineSprites::DataUtility.GetPadding = (int (*)(void *))UnityEngineSprites::DataUtility.GetPaddingOffset;

UnityEngineSprites::DataUtility.GetMinSizeOffset = getRealOffset(0x10570A4);
UnityEngineSprites::DataUtility.GetMinSize = (Vector2 (*)(void *))UnityEngineSprites::DataUtility.GetMinSizeOffset;

UnityEngineU2D::SpriteAtlasManager.RequestAtlasOffset = getRealOffset(0x1060908);
UnityEngineU2D::SpriteAtlasManager.RequestAtlas = (bool(*)(monoString*))UnityEngineU2D::SpriteAtlasManager.RequestAtlasOffset;

UnityEngineU2D::SpriteAtlasManager.PostRegisteredAtlasOffset = getRealOffset(0x1060C40);
UnityEngineU2D::SpriteAtlasManager.PostRegisteredAtlas = (void(*)(void *))UnityEngineU2D::SpriteAtlasManager.PostRegisteredAtlasOffset;

UnityEngineU2D::SpriteAtlasManager.RegisterOffset = getRealOffset(0x1060CE0);
UnityEngineU2D::SpriteAtlasManager.Register = (void(*)(void *))UnityEngineU2D::SpriteAtlasManager.RegisterOffset;

UnityEngineU2D::SpriteAtlas.CanBindToOffset = getRealOffset(0x10608B0);
UnityEngineU2D::SpriteAtlas.CanBindTo = (bool(*)(void*, void *))UnityEngineU2D::SpriteAtlas.CanBindToOffset;

UnityEngineInternal::TypeInferenceRuleAttribute.ctor1Offset = getRealOffset(0x16FE1F4);
UnityEngineInternal::TypeInferenceRuleAttribute.ctor1 = (void(*)(void*, monoString*))UnityEngineInternal::TypeInferenceRuleAttribute.ctor1Offset;

UnityEngineInternal::TypeInferenceRuleAttribute.ToStringOffset = getRealOffset(0x16FE214);
UnityEngineInternal::TypeInferenceRuleAttribute.ToString = (monoString *(*)(void*))UnityEngineInternal::TypeInferenceRuleAttribute.ToStringOffset;

}
