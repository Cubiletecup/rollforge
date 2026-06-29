#pragma once

#include <string>

struct RollRequest
{
  std::string matchId;
  std::string playerId;

  unsigned int serverSeed;

  int diceCount;

  float intensity;
};