#include <iostream>
#include <vector>
using namespace std;

vector<int> map(vector<int> v, int (*fn)(int)) {
  vector<int> temp;

  for(auto num: v) {
    temp.push_back((*fn)(num));
  }

  return temp;
}

int main () {
  auto square = [](int x) {return x * x;};

  vector<int> nums = {2, 5, 8, 23, 56};
  vector<int> squares;

  for(auto num: nums) {
    squares.push_back(square(num));
  }

  for(auto num: squares) {
    cout << num << endl;
  }

  vector<int> mapped = map(nums, square);

  for(auto num: mapped) cout << num << endl;

  return 0;
}
