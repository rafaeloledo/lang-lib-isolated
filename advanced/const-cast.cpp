#include <iostream> 

using namespace std;

void print(char *str) {
    cout << str << endl;
}

int main () {
    const char *msg = "Hello World";
    // print(msg);
     print(const_cast<char *>(msg));
}
