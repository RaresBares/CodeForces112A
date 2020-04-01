#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



int main() {
    string str1;
    string str2;
    cin >> str1 >> str2;

    std::transform(str1.begin(), str1.end(), str1.begin(),
                   [](unsigned char c){ return tolower(c); });

    std::transform(str2.begin(), str2.end(), str2.begin(),
                   [](unsigned char c){ return tolower(c); });

    cout << str1.compare(str2);
    return 0;
}
