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
    cout << "Answer is: " << ans << endl; 

    int precision;
    cout << "Enter the number of floating digits in precision: ";
    cin >> precision;

    double step = 0.1;
    double final_ans = ans;
    
    for(int i=0; i<precision; i++) {
        for(double j=final_ans; j*j < n; j += step) {
            final_ans = j;
        }
        step /= 10;
    }

    cout << "Answer with precision is: " << final_ans << endl;

    return 0;
}