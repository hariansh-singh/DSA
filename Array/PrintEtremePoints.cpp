#include <iostream>
#include <vector>
using namespace std;

void printExtremePoints(vector<int>& arr) {
    if (arr.empty()) {
        std::cout << "Array is empty." << std::endl;
        return;
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "Minimum element: " << min << std::endl;
    std::cout << "Maximum element: " << max << std::endl;
}

int main() {
    std::vector<int> arr = {5, 2, 9, 1, 7};
    printExtremePoints(arr);

    return 0;
}