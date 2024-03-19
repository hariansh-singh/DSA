#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int BinarySearch(vector <int> arr, int n) {

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    
    while(start <= end) {

        int element = arr[mid];

        if(element == n) {
            return mid;
        }

        else if(n < element) {
            // search left
            end = mid - 1;
        }

        else {
            // search right
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main() {

    vector <int> arr = {1,1,6,8,4,2,15,84,4,4,23,10};

    sort(arr.begin(), arr.end());

    int n;
    cout << "Enter Target Element to Search: ";
    cin >> n;

    int index_of_target = BinarySearch(arr, n);

    if(index_of_target == -1) {
        cout << "Element not found!" << endl;
    }
    else {
        cout << "Element Found at index: " << index_of_target << endl;
    }
    
    return 0;
}