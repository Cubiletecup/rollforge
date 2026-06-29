#include "DiceEngine.h"
#include "Random.h"

RollResult DiceEngine::Roll(const RollRequest &request)
{
  RollResult result;
  result.diceCount = request.diceCount;
  result.replaySeed = request.serverSeed;

  result.dice = new DiceResult[request.diceCount];

  for (int i = 0; i < request.diceCount; i++)
  {
    float variation = Random::Range(0.8f, 1.2f);

    result.dice[i].value = Random::Range(1, 6);

    result.dice[i].force = GenerateForce(request.intensity) * variation;
    result.dice[i].torque = GenerateTorque(request.intensity) * variation;

    result.dice[i].finalRotation = {
        Random::Range(0.f, 360.f),
        Random::Range(0.f, 360.f),
        Random::Range(0.f, 360.f)};
  }

  return result;
}

Vector3 DiceEngine::GenerateForce(float intensity) const
{
  return {
      5.0f * intensity,
      8.0f * intensity,
      2.0f};
}

Vector3 DiceEngine::GenerateTorque(float intensity) const
{
  return {
      2.0f * intensity,
      4.0f,
      6.0f * intensity};
}