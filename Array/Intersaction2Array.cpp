#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int a[] = {1,2,3,4};
    int sizea = 4;
    int b[] = {4,6,3,1};
    int sizeb = 4;

    vector <int> ans;

    for(int i=0; i<sizea; i++) {
        for(int j=0; j<sizeb; j++) {
            if(a[i] == b[j]) {
                ans.push_back(a[i]);
            }
        }
    }

    cout << "Intersaction of 2 arrays: ";
    for(auto value: ans) {
        cout << value << " ";
    }

    return 0;
}