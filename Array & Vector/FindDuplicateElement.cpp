// LeetCode 287. Find the Duplicate Number
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return nums[i];
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 4, 5};
    Solution solution;
    int duplicate = solution.findDuplicate(nums);
    cout << "Duplicate element: " << duplicate << endl;
    return 0;
}
