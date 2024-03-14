#include <iostream>
#include <vector>
using namespace std;

int findunique(vector<int> arr) {
    int ans = 0;

    for (int i=0; i<arr.size(); i++) {
        ans ^= arr[i];
    }
    
    return ans;
}

int main() {
    
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements" << endl;

    for (int i=0; i<arr.size(); i++) {
        cin >> arr[i];
    }    

    int unique = findunique(arr);
    cout << "The unique element is: " << unique << endl;

    return 0;
}