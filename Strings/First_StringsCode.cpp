#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string str;
    cout << "Enter String: ";
    getline(cin, str);

    cout << "Entered String is: " << str << endl << "Length of String entered is: " << str.length();
    cout << endl;
    cout << "Is empty? " << str.empty();
    return 0;
}