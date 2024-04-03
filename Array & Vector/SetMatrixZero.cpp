// 73. Set Matrix Zeroes

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<bool> rowZero(rows, false);
        vector<bool> colZero(cols, false);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    rowZero[i] = true;
                    colZero[j] = true;
                }
            }
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (rowZero[i] || colZero[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    // Create an instance of the Solution class
    Solution solution;

    // Call the setZeroes function
    solution.setZeroes(matrix);

    // Print the modified matrix
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
