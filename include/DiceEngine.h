#pragma once

#include "RollRequest.h"
#include "RollResult.h"

class DiceEngine
{
public:
  RollResult Roll(const RollRequest &request);

private:
  Vector3 GenerateForce(float intensity) const;
  Vector3 GenerateTorque(float intensity) const;
};