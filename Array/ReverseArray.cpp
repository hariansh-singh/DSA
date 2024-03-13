#include <iostream>
using namespace std;

int main() {
    
    int arr[9] = {2,5,13,7,9,4,1,6,32};
    int size = 9;

    int start = 0;
    int end = size - 1;

    while(start<=end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}