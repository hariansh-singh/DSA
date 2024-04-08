// LeetCode - 35 Search Insert Position

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;

        while(start <= end) {
            mid = start + (end - start) / 2;

            if(nums[mid] == target) {
                return mid;
            }
            else if(target < nums[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return start;
    }    
};

int main() {
    Solution solution;
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    int result = solution.searchInsert(nums, target);
    cout << "Insert position: " << result << endl;

    return 0;
}
