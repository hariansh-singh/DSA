#include <iostream>
using namespace std;

int main() {
    
    for(int i=0; i<10; i++) {
        int k = 0;
        for(int j=0; j< ((2*10) - 1) ; j++) {
            if(j < 10-i-1) {
                cout << "  ";
            }
            else if(k < 2*i + 1) {
                cout << "* ";
                k++;
            }
            else {
                cout << "  ";
            }
    }
    cout << endl;
    }
    return 0;
}