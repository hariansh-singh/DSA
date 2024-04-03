#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MissingElement(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if the middle element is equal to its index + 1
        // If not, the missing element is to the left of mid
        if (arr[mid] != mid + 1) {
            if (mid == 0 || arr[mid - 1] == mid) {
                return mid + 1;
            }
            end = mid - 1;
        } 
        // If the middle element is equal to its index + 1,
        // the missing element is to the right of mid
        else {
            start = mid + 1;
        }
    }
    // If no missing element is found
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6, 7, 8};

    sort(arr.begin(), arr.end());
    
    cout << "Sorted Array to verify the answer: ";
    for (auto value : arr) {
        cout << value << " ";
    }
    cout << endl;

    int missing_element = MissingElement(arr);

    if (missing_element != -1) {
        cout << "Missing Element in the sorted array is: " << missing_element << endl;
    } else {
        cout << "No missing element found in the sorted array." << endl;
    }

    return 0;
}
