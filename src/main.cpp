#include <iostream>
#include <iomanip>
#include "DiceEngine.h"

int main()
{
  DiceEngine engine;

  RollRequest request;
  request.matchId = "match_001";
  request.playerId = "adrian";
  request.serverSeed = 123456;
  request.diceCount = 5;
  request.intensity = 0.8f;

  RollResult result = engine.Roll(request);

  std::cout << "\n==============================\n";
  std::cout << "     ROLL FORGE     \n";
  std::cout << "==============================\n\n";

  std::cout << "Match ID: " << request.matchId << "\n";
  std::cout << "Player  : " << request.playerId << "\n";
  std::cout << "Seed    : " << request.serverSeed << "\n";
  std::cout << "Dice    : " << result.diceCount << "\n\n";

  std::cout << "----- ROLL RESULTS -----\n";

  for (int i = 0; i < result.diceCount; i++)
  {
    std::cout << "Dice [" << i << "]"
              << " → value: " << result.dice[i].value

              << "\n   force: ("
              << result.dice[i].force.x << ", "
              << result.dice[i].force.y << ", "
              << result.dice[i].force.z << ")"

              << "\n   velocity: ("
              << result.dice[i].velocity.x << ", "
              << result.dice[i].velocity.y << ", "
              << result.dice[i].velocity.z << ")"

              << "\n   torque: ("
              << result.dice[i].torque.x << ", "
              << result.dice[i].torque.y << ", "
              << result.dice[i].torque.z << ")"

              << "\n   angular velocity: ("
              << result.dice[i].angularVelocity.x << ", "
              << result.dice[i].angularVelocity.y << ", "
              << result.dice[i].angularVelocity.z << ")"

              << "\n\n";
  }

  std::cout << "\n----- METADATA -----\n";
  std::cout << "Intensity: " << request.intensity << "\n";

  std::cout << "\n==============================\n\n";

  return 0;
}