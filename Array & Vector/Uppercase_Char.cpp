#include <iostream>
#include <string.h>
using namespace std;

void UpperCase(char arr[20]) {
    for(int i=0; i<strlen(arr); i++) {
        arr[i] = arr[i] - 'a' + 'A';
    }
    for (int k = 0; k < strlen(arr); k++) { 
        cout << arr[k] << " ";
    }
}

int main() {
    
    char arr[20];
    cout << "Enter the lower-case chars: ";
    cin.getline(arr, 20);

    UpperCase(arr);

    return 0;
}