#include <iostream>
using namespace std;

void Transpose(int arr[3][3], int rows, int cols) {

    int temp;

    for(int i=0; i<rows; i++) {
        for(int j=i+1; j<cols; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }   

    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int arr[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}};

    int rows = 3;    
    int cols = 3;

    Transpose(arr, rows, cols);

    return 0;
}