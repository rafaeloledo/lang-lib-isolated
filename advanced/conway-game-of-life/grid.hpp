#ifndef GRID_H_
#define GRID_H_

#include <cstdlib>
#include <string>
#include <vector>

#include "cell.hpp"

class grid {
  cell cells[rowmax + 2][colmax + 2];

public:
  void create(int row, int column);
  void draw();
  void randomize();
  bool will_survive(int row, int column);
  bool will_create(int row, int column);
  void update(const grid &next);
};

void calculate(grid &old_generation, grid &new_generation);

#endif // GRID_H_