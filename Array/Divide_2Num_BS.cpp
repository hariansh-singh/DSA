#include <iostream>
using namespace std;

int divide(int dividend, int divisor) {
    int start = 0;
    int end = abs(dividend);
    int ans = 0;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(abs(mid * divisor) == abs(dividend)) {
            return mid;
        }
        else if(abs(mid * divisor) > abs(dividend)) {
            end = mid - 1;
        }
        else {
            ans = mid;
            start = mid + 1;
        }
    }
    if( (divisor>0 && dividend>0) || (divisor<0 && dividend<0) ) {
        return ans;
    }
    else {
        return -ans;
    }
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