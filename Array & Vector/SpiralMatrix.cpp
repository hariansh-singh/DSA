#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int total_elements = m*n;

        int starting_row = 0;
        int ending_col = n-1;
        int starting_col = 0;
        int ending_row = m-1;

        int count = 0;
        while(count < total_elements) {
            //StartinRow
            for(int i=starting_col; i<=ending_col && count<total_elements; i++) {
                ans.push_back(matrix[starting_row][i]);
                count++;
            }
            starting_row++;
            // EndingCol
            for(int i=starting_row; i<=ending_row && count<total_elements; i++) {
                ans.push_back(matrix[i][ending_col]);
                count++;
            }
            ending_col--;
            // EndingRow
            for(int i=ending_col; i>=starting_col && count<total_elements; i--) {
                ans.push_back(matrix[ending_row][i]);
                count++;
            }
            ending_row--;
            // StartingCol
            for(int i=ending_row; i>=starting_row && count<total_elements; i--) {
                ans.push_back(matrix[i][starting_col]);
                count++;
            }
            starting_col++;
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

    vector<int> result = solution.spiralOrder(matrix);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
