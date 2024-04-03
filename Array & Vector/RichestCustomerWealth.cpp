#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for (int i = 0; i < accounts.size(); i++) {
            int wealth = 0;
            for (int j = 0; j < accounts[0].size(); j++) {
                wealth += accounts[i][j];
            }
            maxWealth = max(maxWealth, wealth);
        }      
        return maxWealth;
    }
};

int main() {
    // Test the maximumWealth function
    Solution solution;
    vector<vector<int>> accounts = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int maxWealth = solution.maximumWealth(accounts);
    cout << "Maximum wealth: " << maxWealth << endl;
    
    return 0;
}
