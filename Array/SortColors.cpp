// Leetcode 75. Sort Colors

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int white = 0;
        int blue = nums.size() - 1;
        
        while (white <= blue) {
            if (nums[white] == 0) {
                swap(nums[red], nums[white]);
                red++;
                white++;
            } 

            else if (nums[white] == 1) {
                white++;
            } 

            else {
                swap(nums[white], nums[blue]);
                blue--;
            }
        }
    }
};

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    
    Solution solution;
    solution.sortColors(nums);
    
    cout << "Sorted colors: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
