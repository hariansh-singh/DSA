#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a[] = {2,4,1,5,3};
    int sizea = 5;
    int b[] = {2,4,1,7};
    int sizeb = 4;
    int sum = 9;

    vector <int> ans;

    for(int i=0; i<sizea; i++) {
        for(int j=0; j<sizeb; j++) {
            if((a[i] + b[j]) == sum) {
                ans.push_back(a[i]);
                cout << endl;
                ans.push_back(b[j]);
            }
        }
    }

    cout << "Pair Sum: ";
    for(auto value: ans) {
        cout << value << " ";
    }
    
    return 0;
}