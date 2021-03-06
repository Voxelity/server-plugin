/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class mp_rage_launcher_player_PlayerNative */

#ifndef _Included_mp_rage_launcher_player_PlayerNative
#define _Included_mp_rage_launcher_player_PlayerNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getType
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_launcher_player_PlayerNative_getType
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    destroy
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_destroy
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getDimension
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_launcher_player_PlayerNative_getDimension
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setDimension
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setDimension
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getPosition
 * Signature: (I)Lmp/rage/api/vector/Vector3;
 */
JNIEXPORT jobject JNICALL Java_mp_rage_launcher_player_PlayerNative_getPosition
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setPosition
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setPosition
        (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getRotation
 * Signature: (I)Lmp/rage/api/vector/Vector3;
 */
JNIEXPORT jobject JNICALL Java_mp_rage_launcher_player_PlayerNative_getRotation
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setRotation
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setRotation
        (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getModel
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_launcher_player_PlayerNative_getModel
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setModel
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setModel
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getVelocity
 * Signature: (I)Lmp/rage/api/vector/Vector3;
 */
JNIEXPORT jobject JNICALL Java_mp_rage_launcher_player_PlayerNative_getVelocity
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getAlpha
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_launcher_player_PlayerNative_getAlpha
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setAlpha
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setAlpha
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    kick
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_kick
        (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    ban
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_ban
        (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    outputChatBox
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_outputChatBox
        (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    notify
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_notify
        (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    spawn
 * Signature: (IFFFF)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_spawn
        (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    playAnimation
 * Signature: (ILjava/lang/String;Ljava/lang/String;FI)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_playAnimation
        (JNIEnv *, jclass, jint, jstring, jstring, jfloat, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    playScenario
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_playScenario
        (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    stopAnimation
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_stopAnimation
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getClothes
 * Signature: (II)Lmp/rage/api/player/PlayerClothes;
 */
JNIEXPORT jobject JNICALL Java_mp_rage_launcher_player_PlayerNative_getClothes
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setClothes
 * Signature: (IILmp/rage/api/player/PlayerClothes;)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setClothes
        (JNIEnv *, jclass, jint, jint, jobject);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getProp
 * Signature: (II)Lmp/rage/api/player/PlayerProperty;
 */
JNIEXPORT jobject JNICALL Java_mp_rage_launcher_player_PlayerNative_getProp
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setProp
 * Signature: (IILmp/rage/api/player/PlayerProperty;)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setProp
        (JNIEnv *, jclass, jint, jint, jobject);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    eval
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_eval
        (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getName
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mp_rage_launcher_player_PlayerNative_getName
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setName
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setName
        (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    isAiming
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_launcher_player_PlayerNative_isAiming
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getHeading
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_mp_rage_launcher_player_PlayerNative_getHeading
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setHeading
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setHeading
        (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getMoveSpeed
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_mp_rage_launcher_player_PlayerNative_getMoveSpeed
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getHealth
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_mp_rage_launcher_player_PlayerNative_getHealth
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setHealth
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setHealth
        (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getArmor
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_mp_rage_launcher_player_PlayerNative_getArmor
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setArmor
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setArmor
        (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getAimingAt
 * Signature: (I)Lmp/rage/api/vector/Vector3;
 */
JNIEXPORT jobject JNICALL Java_mp_rage_launcher_player_PlayerNative_getAimingAt
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getPing
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_launcher_player_PlayerNative_getPing
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getKickReason
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mp_rage_launcher_player_PlayerNative_getKickReason
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getIp
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mp_rage_launcher_player_PlayerNative_getIp
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    isJumping
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_launcher_player_PlayerNative_isJumping
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    isInCover
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_launcher_player_PlayerNative_isInCover
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    isEnteringVehicle
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_launcher_player_PlayerNative_isEnteringVehicle
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    isLeavingVehicle
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_launcher_player_PlayerNative_isLeavingVehicle
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    isClimbing
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_mp_rage_launcher_player_PlayerNative_isClimbing
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getActionString
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mp_rage_launcher_player_PlayerNative_getActionString
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getVehicle
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_launcher_player_PlayerNative_getVehicle
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    putIntoVehicle
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_putIntoVehicle
        (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    removeFromVehicle
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_removeFromVehicle
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getSeat
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_launcher_player_PlayerNative_getSeat
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getEyeColor
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_launcher_player_PlayerNative_getEyeColor
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setEyeColor
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setEyeColor
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getHairColor
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_launcher_player_PlayerNative_getHairColor
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getHairHighlightColor
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_launcher_player_PlayerNative_getHairHighlightColor
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setHairColor
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setHairColor
        (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getFaceFeature
 * Signature: (II)F
 */
JNIEXPORT jfloat JNICALL Java_mp_rage_launcher_player_PlayerNative_getFaceFeature
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setFaceFeature
 * Signature: (IIF)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setFaceFeature
        (JNIEnv *, jclass, jint, jint, jfloat);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getHeadBlend
 * Signature: (I)Lmp/rage/api/player/PlayerHeadBlend;
 */
JNIEXPORT jobject JNICALL Java_mp_rage_launcher_player_PlayerNative_getHeadBlend
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    setHeadBlend
 * Signature: (IIIIIIIFFF)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_setHeadBlend
        (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jfloat, jfloat, jfloat);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    updateHeadBlend
 * Signature: (IFFF)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_updateHeadBlend
        (JNIEnv *, jclass, jint, jfloat, jfloat, jfloat);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getWeapon
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_mp_rage_launcher_player_PlayerNative_getWeapon
        (JNIEnv *, jclass, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    giveWeapon
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_giveWeapon
        (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    giveWeapons
 * Signature: (I[I[I)V
 */
JNIEXPORT void JNICALL Java_mp_rage_launcher_player_PlayerNative_giveWeapons
        (JNIEnv *, jclass, jint, jintArray, jintArray);

/*
 * Class:     mp_rage_launcher_player_PlayerNative
 * Method:    getSerial
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mp_rage_launcher_player_PlayerNative_getSerial
        (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
