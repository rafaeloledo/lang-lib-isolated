#include <iostream>

using namespace std;

int main () {
    string url = "<a href=\"file\">C:\\\"Program Files\"\\</a>\\n";
    cout << url << endl;
    
    string raw_url = R"(<a href="file">C:\Program Files\</a>\n)";
    string delimited_url = R"x(<a href="file">C:\"Program Files (x86)"\</a>\n)x";

    cout << raw_url << endl;
    cout << delimited_url << endl;
}