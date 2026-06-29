#include "DiceEngine.h"

RollResult DiceEngine::Roll(const RollRequest &request)
{
  RollResult result;

  result.value = 6;

  result.force = GenerateForce();
  result.torque = GenerateTorque();

  result.finalRotation = {90.0f, 0.0f, 0.0f};

  result.replaySeed = request.serverSeed;

  return result;
}

Vector3 DiceEngine::GenerateForce() const
{
  return {4.2f, 6.5f, 1.8f};
}

Vector3 DiceEngine::GenerateTorque() const
{
  return {3.0f, 1.0f, 5.2f};
}