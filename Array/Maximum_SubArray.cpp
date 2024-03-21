#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int max_sum = nums[0];
        int current_sum = nums[0];

        for(int i=1; i<nums.size(); i++) {
           current_sum =  max(nums[i], current_sum + nums[i]);
           max_sum = max(max_sum, current_sum);
        }

        return max_sum;
    }
};

int main() {
    // Test the maxSubArray function
    Solution solution;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = solution.maxSubArray(nums);
    cout << "Maximum subarray sum: " << maxSum << endl;

    return 0;
}
