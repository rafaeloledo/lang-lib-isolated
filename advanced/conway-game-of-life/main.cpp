#include "grid.hpp"

// #include "ansi_escapes.hpp"

int main() {
  std::cout << "Conway's Game of Life\n";
  std::cout << "Press the return key to display each generation\n";

  std::cin.get();

  grid current_generation;

  current_generation.randomize();

  while (true) {
    current_generation.draw();

    std::cin.get();

    grid next_generation;

    calculate(current_generation, next_generation);

    current_generation.update(next_generation);
  }
}