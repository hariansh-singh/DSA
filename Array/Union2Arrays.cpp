#include <iostream>
#include <vector>
using namespace std;

int main() {

    int arr[] = {2,5,3,4};
    int sizea = 4;
    int brr[] = {3,5,7,6};
    int sizeb = 4;
    vector <int> ans;    

    for(int i=0; i<sizea; i++) {
        ans.push_back(arr[i]);
    }
    for(int i=0; i<sizeb; i++) {
        ans.push_back(brr[i]);
    }

    cout << "The union of the two arrays is: ";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}