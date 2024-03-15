#include <iostream>
using namespace std;

void Transpose(int arr[4][3], int rows, int cols) {

    int temp;

    for(int i=0; i<cols; i++) {
        for(int j=i+1; j<rows; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }   

    for(int i=0; i<cols; i++) {
        for(int j=0; j<rows; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int arr[4][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9},
        {10, 11, 12},};

    int rows = 4;    
    int cols = 3;

    Transpose(arr, rows, cols);

    return 0;
}