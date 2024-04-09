#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string str;

    cout << "Enter String: ";
    getline(cin, str);
    cout << str;
    cout << endl;

    cout << str.substr(0, 4) << endl;

    string str1 = {'H', 'a', 'r', 'i'};

    if(str.substr(0, 4).compare(str1) == 0) {
        cout << "Both Strings are same!" << endl;
    }
    else {
        cout << "Both strings are different!" << endl;
    }

    cout << str.find("rian");

    return 0;
}