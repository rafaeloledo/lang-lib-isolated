#include <iostream>

using namespace std;

int main() {
    int a = 'A';

    cout << reinterpret_cast<void*>(a) << endl;
}