#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char arr[20]) {
    int i = 0;
    int j = strlen(arr) - 1;

    while (i <= j) {
        if (arr[i] != arr[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main() {
    
    char arr[20];
    cout << "Enter the chars: ";
    cin.getline(arr, 20);

    bool ans = isPalindrome(arr);
    if (ans) {
        cout << "The string is a palindrome.";
    } 
    else {
        cout << "The string is not a palindrome.";
    }

    return 0;
}