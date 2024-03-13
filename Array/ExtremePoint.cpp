#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {2,5,13,7,9,4,1,6,32};
    int size = 9;
    
    int start = 0;
    int end = size - 1;
    
    while(start<=end) {
        if (start == end) {
            cout << arr[start] << " ";
            break;
        }
        cout << arr[start] << " ";
        cout << arr[end] << " ";
        
        start++;
        end--;
    }

    return 0;
}
 