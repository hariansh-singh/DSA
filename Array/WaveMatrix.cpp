#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> WaveOrder(vector<vector<int>>& matrix) {
        vector <int> ans;
        int count =0;

        for(int i=0; i<matrix.size(); i++) {
            //top to bottom
            if((i%2) == 0) {
                for (int j=0; j<matrix[0].size(); j++) {
                    ans.push_back(matrix[j][i]);
                }
            }
            else {
                for (int j=matrix[0].size() - 1; j<matrix[0].size(); j--) {
                    ans.push_back(matrix[j][i]);
                }
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

    vector<int> result = solution.WaveOrder(matrix);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
