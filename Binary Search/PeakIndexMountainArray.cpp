#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end - start) / 2;

        while(start < end) {
            if (arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }
            
            mid = start + (end - start) / 2;
        }
        return start;
    }
};

int main() {
    // Test the peakIndexInMountainArray function
    Solution solution;
    vector<int> arr = {1, 3, 5, 9, 7, 4, 2};
    int peakIndex = solution.peakIndexInMountainArray(arr);
    cout << "Peak index: " << peakIndex << endl;

    return 0;
}
