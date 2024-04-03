#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty())
            return false;

        int start = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        int end = m*n - 1;
        int mid = start + (end - start) / 2;

        while(start <= end) {
            int element = matrix[mid / n][mid % n];

            if(element == target) {
                return true;
            }
            else if(target < element) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return false;
    }
};

int main() {
    // Test the searchMatrix function
    vector<vector<int>> matrix = {{1, 3, 5, 7},
                                  {10, 11, 16, 20},
                                  {23, 30, 34, 60}};
    int target = 3;

    Solution solution;
    bool found = solution.searchMatrix(matrix, target);

    if (found) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}
