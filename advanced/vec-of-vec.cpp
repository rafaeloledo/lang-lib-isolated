#include <iostream>
#include <vector>

using namespace std;

// typedef vector<int> IntVec;
using IntVec = vector<int>;

int main() {
  vector<IntVec> vec_of_vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  for (auto vec : vec_of_vec) {
    for (auto i : vec) {
      cout << i << " ";
    }
    cout << endl;
  }
}