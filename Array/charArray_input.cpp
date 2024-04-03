#include <iostream>
#include <strings.h>
using namespace std;

int main() {

    char ch[10];
    cout << "Enter Your Name: "; 
    cin.getline(ch, 10);
    cout << endl;
    cout << "Your Name is " << ch << endl;
    
    return 0;
}