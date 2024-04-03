#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int BS(vector<int> arr, int start, int end, int target) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return -1;
}

int ExponentialSearch(vector<int> arr, int target) {
    if(arr[0] == target) {
        return 0;
    }

    int i=1;

    while(i<arr.size() && arr[i]<=target) {
        i *= 2;
    }
    return BS(arr, i/2, min(i, int(arr.size())-1), target);
}

int main() {

    vector <int> arr = {3,4,5,6,11,13,14,15,56,70};
    int target = 56;

    int ans = ExponentialSearch(arr, target);
    cout << "Answer is: " << ans << endl;
    
    return 0;
}