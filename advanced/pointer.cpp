#include <iostream>

using namespace std;

int main () {
    int i{1};
    int *p1 = &i;

    cout << "p1 = " << p1 << endl;
    cout << "*p2 = " << *p1 << endl;

    int *p2 = new int;
    int *p3 = new int{36};
    // int *p3 = new int(36);

    cout << "*p2 = " << *p2 << endl;
    cout << "*p3 = " << *p3 << endl;
}