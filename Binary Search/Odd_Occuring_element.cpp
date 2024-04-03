#include <iostream>
#include <vector>
using namespace std;

int Odd(vector <int> arr) {
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if (start == end) {
            return start;
        }
        if (mid % 2 == 0) {
            if (arr[mid] == arr[mid + 1]) {
                start = mid + 2;
            }
            else {
                end = mid;
            }
        }
        else {
            if(arr[mid] == arr[mid - 1]) {
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {

    vector<int> arr = {1,1,3,3,5,5,98,6,6,8,8,4,4};

    int ans = Odd(arr);
    cout << "Odd occuring element index is: " << ans << endl;
    cout << "Odd occuring element is: " << arr[ans] << endl;
    
    return 0;
}