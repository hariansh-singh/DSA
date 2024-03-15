#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <vector <int>> arr;
    
    vector <int> a{1,5,9};
    vector <int> b{11,4,13};
    vector <int> c{19,2,21};

    int element;
    bool found;

    cout << "Enter the Element you want to search in 2D Array: ";
    cin >> element;  
    
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(int i=0; i<arr.size(); i++) {
        for(int j=0; j<arr[0].size(); j++) {
            if(arr[i][j] == element) {
                cout << "Element found at index: (" + to_string(i) + "," + to_string(j) + ")" << endl;  
                found = 1;
            }
        }
    }

    if(found != 1) {
        cout << "Element not found!";
    }

    return 0;
}