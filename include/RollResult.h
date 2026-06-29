#pragma once

#include "Vector3.h"

struct DiceResult
{
    int value;

    Vector3 force;
    Vector3 torque;
    Vector3 velocity;
    Vector3 angularVelocity;
    Vector3 finalRotation;
};

struct RollResult
{
    DiceResult *dice;
    int diceCount;

    unsigned int replaySeed;
};