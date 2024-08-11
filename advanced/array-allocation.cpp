#include <iostream>

int main () {
    int *pa = new int[20];

    for (int i = 0; i < 20; ++i) {
        pa[i]=i;
    }

    for (int i = 0; i < 20; ++i) {
        std::cout << pa[i] << std::endl;
    }

    delete [] pa;
}