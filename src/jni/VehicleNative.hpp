/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class mp_rage_plugin_java_launcher_vehicle_VehicleNative */

#ifndef _Included_mp_rage_plugin_java_launcher_vehicle_VehicleNative
#define _Included_mp_rage_plugin_java_launcher_vehicle_VehicleNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    getType
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_getType
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    destroy
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_destroy
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    getDimension
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_getDimension
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    setDimension
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_setDimension
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    getRotation
 * Signature: (I)Lmp/rage/plugin/java/api/vector/Vector3;
 */
JNIEXPORT jobject JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_getRotation
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    setRotation
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_setRotation
        (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    getModel
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_getModel
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    setModel
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_setModel
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    getVelocity
 * Signature: (I)Lmp/rage/plugin/java/api/vector/Vector3;
 */
JNIEXPORT jobject JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_getVelocity
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    getAlpha
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_getAlpha
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    setAlpha
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_setAlpha
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    IsSirenActive
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_IsSirenActive
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    IsHornActive
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_IsHornActive
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    AreHighbeamsActive
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_AreHighbeamsActive
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    AreLightsActive
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_AreLightsActive
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    IsEngineActive
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_IsEngineActive
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    IsRocketBoostActive
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_IsRocketBoostActive
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    IsBrakeActive
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_IsBrakeActive
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    getSteerAngle
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_getSteerAngle
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    getGasPedalState
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_getGasPedalState
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    getEngineHealth
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_getEngineHealth
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    getBodyHealth
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_getBodyHealth
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    getOccupant
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_getOccupant
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    getOccupants
 * Signature: (I)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_getOccupants
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    setOccupant
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_setOccupant
        (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    isLocked
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_isLocked
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    lock
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_lock
        (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    isDead
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_isDead
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    explode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_explode
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    spawn
 * Signature: (ILmp/rage/plugin/java/api/vector/Vector3;F)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_spawn
        (JNIEnv *, jclass, jint, jobject, jfloat);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    getMod
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_getMod
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    setMod
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_setMod
        (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    areNeonsEnabled
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_areNeonsEnabled
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    enableNeons
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_enableNeons
        (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    setNeonsColour
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_setNeonsColour
        (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    GetNeonsColour
 * Signature: (I)Lmp/rage/plugin/java/api/color/RGBColor;
 */
JNIEXPORT jobject JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_GetNeonsColour
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    Repair
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_Repair
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    GetColourRGB
 * Signature: (II)Lmp/rage/plugin/java/api/color/RGBColor;
 */
JNIEXPORT jobject JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_GetColourRGB
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    GetColour
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_GetColour
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    GetPaint
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_GetPaint
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    SetColourRGB
 * Signature: (ILmp/rage/plugin/java/api/color/RGBColor;Lmp/rage/plugin/java/api/color/RGBColor;)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_SetColourRGB
        (JNIEnv *, jclass, jint, jobject, jobject);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    SetColour
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_SetColour
        (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    SetPaint
 * Signature: (ILmp/rage/plugin/java/api/vehicle/VehiclePaintInfo;Lmp/rage/plugin/java/api/vehicle/VehiclePaintInfo;)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_SetPaint
        (JNIEnv *, jclass, jint, jobject, jobject);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    GetMaterialType
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_GetMaterialType
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    GetNumberPlate
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_GetNumberPlate
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_plugin_java_launcher_vehicle_VehicleNative
 * Method:    SetNumberPlate
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mp_rage_plugin_java_launcher_vehicle_VehicleNative_SetNumberPlate
        (JNIEnv *, jclass, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
