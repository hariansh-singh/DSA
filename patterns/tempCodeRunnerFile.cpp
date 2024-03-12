#include <iostream>
using namespace std;

int main() {
    
    for(int i=0; i<13; i++) {
        for(int j=0; j<13-i; j++  ) {
            cout << "* " ;
    }
    cout << endl;
    }
    return 0;
}