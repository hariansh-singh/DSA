#include <iostream>
using namespace std;

void SearchElement(int arr[3][3], int rows, int cols, int n) {
    bool found;

    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(arr[i][j] == n) {
                cout << "Element found at index: (" + to_string(i) + "," + to_string(j) + ")" << endl;  
                found = 1;
            }
        }
    }   
    if(found != 1) {
        cout << "Element not found!";
    }
}

int main() {

    int arr[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}};

    int n;
    int rows = 3;    
    int cols = 3;

    cout << "Enter the Element you want to search in 2D Array: ";
    cin >> n;    
    
    SearchElement(arr, rows, cols, n);

    return 0;
}