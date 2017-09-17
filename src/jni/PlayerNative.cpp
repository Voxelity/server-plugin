/*
 * Copyright (c) 2017 Noxaro aka Fabian Jungwirth
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3.0 of the License, or (at your option) any later version.
 * See the file COPYING included with this distribution for more information.
 */

#include "PlayerNative.hpp"
#include <iostream>
#include "../RagePlugin.hpp"
#include "../rage/Player.hpp"

jint Java_mp_rage_plugin_java_launcher_player_PlayerNative_getType(JNIEnv *, jclass, jint playerId) {
    return (jint)rage::entity_t::Player;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_destroy(JNIEnv *, jclass, jint playerId) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        player->Destroy();
    }
}

jint Java_mp_rage_plugin_java_launcher_player_PlayerNative_getDimension(JNIEnv *, jclass, jint playerId) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        return (jint)player->GetDimension();
    }
    return -1;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_setDimension(JNIEnv *, jclass, jint playerId, jint dimension) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        player->SetDimension((uint32_t)dimension);
    }
}

jobject Java_mp_rage_plugin_java_launcher_player_PlayerNative_getRotation(JNIEnv *, jclass, jint playerId) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        rage::vector3 position = player->GetRotation();
        return JVM::createVector3(position.x, position.y, position.z);
    }
    return nullptr;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_setRotation(JNIEnv *, jclass, jint playerId, jfloat x, jfloat y, jfloat z) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        rage::vector3 position = {x, y, z};
        player->SetRotation(position);
    }
}

jint Java_mp_rage_plugin_java_launcher_player_PlayerNative_getModel(JNIEnv *, jclass, jint playerId) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        return (jint)player->GetModel();
    }
    return -1;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_setModel(JNIEnv *, jclass, jint playerId, jint model) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        player->SetModel((uint32_t)model);
    }
}

jobject Java_mp_rage_plugin_java_launcher_player_PlayerNative_getVelocity(JNIEnv *, jclass, jint playerId) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        rage::vector3 velocity = player->GetVelocity();
        return JVM::createVector3(velocity.x, velocity.y, velocity.x);
    }
    return nullptr;
}

jint Java_mp_rage_plugin_java_launcher_player_PlayerNative_getAlpha(JNIEnv *, jclass, jint playerId) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        return (jint)player->GetAlpha();
    }
    return -1;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_setAlpha(JNIEnv *, jclass, jint playerId, jint alpha) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        player->SetAlpha((uint8_t)alpha);
    }
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_kick(JNIEnv *, jclass, jint playerId, jstring reason) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        player->Kick(TypeConverter::fromJString(reason).c_str());
    }
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_ban(JNIEnv *, jclass, jint playerId, jstring reason) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        player->Ban(TypeConverter::fromJString(reason).c_str());
    }
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_outputChatBox(JNIEnv *, jclass, jint playerId, jstring message) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        player->OutputChatBox(TypeConverter::fromJStringU16(message));
    }
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_notify(JNIEnv *, jclass, jint playerId, jstring message) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        player->Notify(TypeConverter::fromJStringU16(message));
    }
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_spawn(JNIEnv * env, jclass, jint playerId, jfloat x, jfloat y, jfloat z, jfloat heading) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        rage::vector3 position = {x, y, z};
        player->Spawn(position, heading);
    }
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_playAnimation(JNIEnv *, jclass, jint, jstring, jstring, jfloat, jint) {

}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_playScenario(JNIEnv *, jclass, jint, jstring) {

}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_stopAnimation(JNIEnv *, jclass, jint) {

}

jobject Java_mp_rage_plugin_java_launcher_player_PlayerNative_getClothes(JNIEnv *, jclass, jint, jint) {
    return nullptr;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_setClothes(JNIEnv *, jclass, jint, jint, jobject) {

}

jobject Java_mp_rage_plugin_java_launcher_player_PlayerNative_getProp(JNIEnv *, jclass, jint, jint) {
    return nullptr;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_setProp(JNIEnv *, jclass, jint, jint, jobject) {

}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_eval(JNIEnv *, jclass, jint, jstring) {

}

jstring Java_mp_rage_plugin_java_launcher_player_PlayerNative_getName(JNIEnv *, jclass, jint) {
    return nullptr;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_setName(JNIEnv *, jclass, jint, jstring) {

}

jboolean Java_mp_rage_plugin_java_launcher_player_PlayerNative_isAiming(JNIEnv *, jclass, jint) {
    return 0;
}

jfloat Java_mp_rage_plugin_java_launcher_player_PlayerNative_getHeading(JNIEnv *, jclass, jint) {
    return 0;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_setHeading(JNIEnv *, jclass, jint, jfloat) {

}

jfloat Java_mp_rage_plugin_java_launcher_player_PlayerNative_getMoveSpeed(JNIEnv *, jclass, jint playerId) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        return player->GetMoveSpeed();
    }
    return 0;
}

jfloat Java_mp_rage_plugin_java_launcher_player_PlayerNative_getHealth(JNIEnv *, jclass, jint playerId) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        return player->GetHealth();
    }
    return 0;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_setHealth(JNIEnv *, jclass, jint playerId, jfloat health) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        player->SetHealth(health);
    }
}

jfloat Java_mp_rage_plugin_java_launcher_player_PlayerNative_getArmor(JNIEnv *, jclass, jint playerId) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        return player->GetArmour();
    }
    return 0;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_setArmor(JNIEnv *, jclass, jint playerId, jfloat armor) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        player->SetArmour(armor);
    }
}

jobject Java_mp_rage_plugin_java_launcher_player_PlayerNative_getAimingAt(JNIEnv* env, jclass, jint playerId) {
    rage::IPlayer* player = Player::getPlayerById(TypeConverter::fromJInt(playerId));
    if(player) {
        rage::vector3 pos = player->GetAimingAt();
        return JVM::createVector3(pos.x, pos.y, pos.z);
    }
    return nullptr;
}

jint Java_mp_rage_plugin_java_launcher_player_PlayerNative_getPing(JNIEnv *, jclass, jint) {
    return 0;
}

jstring Java_mp_rage_plugin_java_launcher_player_PlayerNative_getKickReason(JNIEnv *, jclass, jint) {
    return nullptr;
}

jstring Java_mp_rage_plugin_java_launcher_player_PlayerNative_getIp(JNIEnv *, jclass, jint) {
    return nullptr;
}

jboolean Java_mp_rage_plugin_java_launcher_player_PlayerNative_isJumping(JNIEnv *, jclass, jint) {
    return 0;
}

jboolean Java_mp_rage_plugin_java_launcher_player_PlayerNative_isInCover(JNIEnv *, jclass, jint) {
    return 0;
}

jboolean Java_mp_rage_plugin_java_launcher_player_PlayerNative_isEnteringVehicle(JNIEnv *, jclass, jint) {
    return 0;
}

jboolean Java_mp_rage_plugin_java_launcher_player_PlayerNative_isLeavingVehicle(JNIEnv *, jclass, jint) {
    return 0;
}

jboolean Java_mp_rage_plugin_java_launcher_player_PlayerNative_isClimbing(JNIEnv *, jclass, jint) {
    return 0;
}

jstring Java_mp_rage_plugin_java_launcher_player_PlayerNative_getActionString(JNIEnv *, jclass, jint) {
    return nullptr;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_removeFromVehicle(JNIEnv *, jclass, jint) {

}

jint Java_mp_rage_plugin_java_launcher_player_PlayerNative_getSeat(JNIEnv *, jclass, jint) {
    return 0;
}

jint Java_mp_rage_plugin_java_launcher_player_PlayerNative_getEyeColor(JNIEnv *, jclass, jint) {
    return 0;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_setEyeColor(JNIEnv *, jclass, jint, jint) {

}

jint Java_mp_rage_plugin_java_launcher_player_PlayerNative_getHairColor(JNIEnv *, jclass, jint) {
    return 0;
}

jint Java_mp_rage_plugin_java_launcher_player_PlayerNative_getHairHighlightColor(JNIEnv *, jclass, jint) {
    return 0;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_setHairColor(JNIEnv *, jclass, jint, jint, jint) {

}

jfloat Java_mp_rage_plugin_java_launcher_player_PlayerNative_getFaceFeature(JNIEnv *, jclass, jint, jint) {
    return 0;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_setFaceFeature(JNIEnv *, jclass, jint, jint, jfloat) {

}

jobject Java_mp_rage_plugin_java_launcher_player_PlayerNative_getHeadBlend(JNIEnv *, jclass, jint) {
    return nullptr;
}

void
Java_mp_rage_plugin_java_launcher_player_PlayerNative_setHeadBlend(JNIEnv *, jclass, jint, jint, jint, jint, jint, jint,
                                                                   jint, jfloat, jfloat, jfloat) {

}

void
Java_mp_rage_plugin_java_launcher_player_PlayerNative_updateHeadBlend(JNIEnv *, jclass, jint, jfloat, jfloat, jfloat) {

}

jint Java_mp_rage_plugin_java_launcher_player_PlayerNative_getWeapon(JNIEnv *, jclass, jint) {
    return 0;
}

void Java_mp_rage_plugin_java_launcher_player_PlayerNative_giveWeapon(JNIEnv *, jclass, jint, jint, jint) {

}

jstring Java_mp_rage_plugin_java_launcher_player_PlayerNative_getSerial(JNIEnv *, jclass, jint) {
    return nullptr;
}
