#include <iostream>
#include "DiceEngine.h"

int main()
{
  DiceEngine engine;

  std::cout << "Result: "
            << engine.Roll()
            << std::endl;

  return 0;
}