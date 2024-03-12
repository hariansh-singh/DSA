#include <iostream>
using namespace std;

int main() {
    
    for(int i=0; i<13; i++) {
        for(int j=0; j<13; j++) {
            if(i == 0 || j == 0 || j == 13 - i - 1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
    }
    cout << endl;
    }
    return 0;
}