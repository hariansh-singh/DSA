#include <iostream>
using namespace std;

int main() {
    
    int arr[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}};

    int rows = 3;    
    int cols = 3;    
    
    for(int i=0; i<rows; i++) {
        int count = 0;
        for(int j=0; j<cols; j++) {
            count += arr[i][j];
        }
        cout << "Sum of row " << i+1 << ": " << count << endl;
    }
        cout << endl;

    return 0;
}