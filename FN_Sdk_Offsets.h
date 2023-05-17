#pragma once
#include <Windows.h>

#define GWorld 0x10567408 // gworld is a pointer of uworld. 

namespace Offsets
{
    enum External : uint64_t
    {
        // TeamIndex - TeamID - ActorID
        TeamId = 0x10B0,

        // Local0x10567408
        LocalActorPos = 0x128,
        LocalPawn = 0x330,
        LocalPlayers = 0x38,

        // Player - BoneArray
        BoneArray = 0x5f0,
        PlayerState = 0x2A8,
        PlayerArray = 0x2a0,
        PlayerController = 0x30,
        PlayerCameraManager = 0x340,

        // Game - World
        Gameinstance = 0x1B8,
        GameState = 0x158,
        ComponetToWorld = 0x240,

        // Actor
        ActorCount = 0xA0,
        AActor = 0x98,
        CurrentActor = 0x300,

        // Other
        RootComponet = 0x190,
        PersistentLevel = 0x30,
        Mesh = 0x310,
        Velocity = 0x170,
        PawnPrivate = 0x300,
        ReviveFromDBNOTime = 0x3044,

        // Visible Check
        fLastSubmitTime = 0x358,
        fLastRenderTimeOnScreen = 0x360,
    };
}
