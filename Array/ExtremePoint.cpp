#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {2,5,13,7,9,4,1,6};
    int size = 8;
    
    int start = 0;
    int end = size - 1;
    
    while(true) {
        if(start>end) {
            break;
        }
        cout << arr[start] << " ";
        cout << arr[end] << " ";
        
        start++;
        end--;
    }

    return 0;
}
