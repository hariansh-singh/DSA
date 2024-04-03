#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp;

        for(int i = 0; i < matrix.size(); i++) {  
            for(int j = i + 1; j < matrix[0].size(); j++) {  
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
            reverse(matrix[i].begin(), matrix[i].end());
        }   

        for(int i = 0; i < matrix[0].size(); i++) {  
            for(int j = 0; j < matrix.size(); j++) {  
                cout << matrix[i][j] << " ";  
            }
            cout << endl;
        }
    }
};

int main() {
    // Create a test matrix
    vector<vector<int>> matrix = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};

    Solution solution;
    solution.rotate(matrix);

    return 0;
}
