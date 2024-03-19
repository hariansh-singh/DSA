// Missing Elements from and arraywith duplicates. a[1,N]
#include <iostream>
using namespace std;

void findmissing(int *a, int n) {
    // visited method
    for (int i=0; i<n; i++) {
        int index = abs(a[i]);
        if(a[index-1] > 0) {
            a[index - 1] *= -1;
        }
    }

    cout << "Missing elements: ";
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}

int main() {

    int n;
    int a[] = {1,3,5,3,4};
    n = sizeof(a)/sizeof(int);
    findmissing(a, n);
    
    return 0;
}