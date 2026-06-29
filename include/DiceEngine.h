#pragma once

#include "RollRequest.h"
#include "RollResult.h"

class DiceEngine
{
public:
  RollResult Roll(const RollRequest &request);

private:
  Vector3 GenerateForce() const;
  Vector3 GenerateTorque() const;
};