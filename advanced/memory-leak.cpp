#include <iostream>

using namespace std;

void badfunc() {
    int *p4 = new int{42};
    // delete p4;
    // *p4 = 99;
    return;
}

int main () {
    int i{1};
    int *p1 = &i;
    cout << *p1 << endl;

    int *p2 = new int;
    int *p3 = new int{36};

    // int *p3 = new int(36);

    badfunc();
}