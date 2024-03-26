#include <iostream>
using namespace std;

int divide(int dividend, int divisor) {
    int start = 0;
    int end = dividend;
    int ans = 0;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(mid * divisor == dividend) {
            return mid;
        }
        else if(mid * divisor > dividend) {
            end = mid - 1;
        }
        else {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    
    int dividend;
    int divisor;

    cout << "Enter Dividend: ";
    cin >> dividend;

    cout << "Enter Divisor: ";
    cin >> divisor;

    int ans = divide(dividend, divisor);
    cout << "Answer is: " << ans << endl;

    return 0;
}