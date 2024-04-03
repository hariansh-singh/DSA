#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> FirstRepeatingElement(vector<vector<int>>& matrix) {
        vector<int> ans;
        unordered_set<int> seen;

        for (const auto& row : matrix) {
            for (int num : row) {
                if (seen.count(num) > 0) {
                    ans.push_back(num);
                    return ans;
                }
                seen.insert(num);
            }
        }

        return ans;
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution solution;

    vector<int> result = solution.FirstRepeatingElement(matrix);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
