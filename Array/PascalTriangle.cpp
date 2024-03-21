#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);

            if (i > 1) {
                for (int j = 1; j < i; j++) {
                    row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
                }
            }
            triangle.push_back(row);
        }
        return triangle;
    }
};

int main() {
    Solution solution;
    int numRows = 5;
    vector<vector<int>> result = solution.generate(numRows);

    // Print the Pascal's Triangle
    for (const auto& row : result) {
        for (const auto& num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
