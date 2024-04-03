// Last Occurance of an Target Element Binary Search

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int FirstOccurance(vector <int> arr, int n) {

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    
    while(start <= end) {

        if(arr[mid] == n) {
            ans = mid;
            start = mid + 1;
        }

        else if (n > arr[mid]) {
            start = mid + 1;
        }

        else if (n < arr[mid]) {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {

    vector <int> arr = {1,6,8,4,4,4,2,23,15,84,23,10};

    sort(arr.begin(), arr.end());
    cout << "Sorted Array to verify the answer: ";
    for (auto value: arr) {
        cout << value << " ";
    }
    cout << endl;

    int n;
    cout << "Enter Target Element to Search: ";
    cin >> n;

    int index_of_target = FirstOccurance(arr, n);
    
    cout << "Element's Last Occurance is at index: " << index_of_target << endl;
    
    return 0;
}