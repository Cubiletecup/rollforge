#pragma once

#include "Vector3.h"

struct RollResult
{
    int value;

    Vector3 force;
    Vector3 torque;

    Vector3 finalRotation;

    unsigned int replaySeed;
};