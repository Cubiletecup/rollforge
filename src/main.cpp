#include <iostream>

#include "DiceEngine.h"

int main()
{
  DiceEngine engine;

  RollRequest request;

  request.matchId = "match_001";
  request.playerId = "adrian";
  request.serverSeed = 123456;
  request.diceCount = 5;

  RollResult result = engine.Roll(request);

  std::cout << "Dice Value: "
            << result.value
            << std::endl;

  std::cout << "Replay Seed: "
            << result.replaySeed
            << std::endl;
}