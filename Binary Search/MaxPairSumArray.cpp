// Leetcode - 2815. Max Pair Sum in an Array

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largest(int num) {
        int mx = 0;
        while (num > 0) {
            mx = max(mx, num % 10);
            num /= 10;
        }
        return mx;
    }

    int maxSum(vector<int>& nums) {
        int ans = -1;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (largest(nums[i]) == largest(nums[j])) {
                    ans = max((nums[i] + nums[j]), ans);
                }
            }
        }
        return ans;
    }
};

int main() {
    // Test the Solution class
    Solution solution;
    vector<int> nums = {51, 71, 27, 24, 42};
    int maxPairSum = solution.maxSum(nums);
    cout << "Max Pair Sum: " << maxPairSum << endl;

    return 0;
}
