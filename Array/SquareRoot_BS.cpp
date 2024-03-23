#include <iostream>
using namespace std;

int sqrt(int n) {
    int target = n;
    int start = 0;
    int end = target;
    int ans = -1;

    while(start <= end) {

        int mid = start + (end - start) / 2;
        
        if(mid*mid == target) {
            return mid;
        }
        else if(n < mid*mid) {
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int ans = sqrt(n);
    cout << "Answer is: " << ans; 

    return 0;
}