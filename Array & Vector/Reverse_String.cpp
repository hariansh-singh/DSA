#include <iostream>
#include <string.h>
using namespace std;

void ReverseString(char arr[6]) {
    int i = 0;
    int j = strlen(arr) - 1;

    while (i <= j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (int k = 0; k < strlen(arr); k++) { 
        cout << arr[k] << " ";
    }
}

int main() {
    
    char arr[20];
    cin.getline(arr, 20);

    for (int k = 0; k < strlen(arr); k++) { 
        cout << arr[k] << " ";
    }
    cout << endl;

    ReverseString(arr);

    return 0;
}