#include <iostream>

void binarySearch(int arr[], int target, int size, int left, int right, int result) {

    std::cout << "Введите число: ";
    std::cin >> target;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            break;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (result != -1) {
        std::cout << target << " | " << result << std::endl;
    }
}

int main() {

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int target;
    int left = 0;
    int right = size - 1;
    int result = -1;

    binarySearch(arr, size, target, left, right, result); 
    
    return 0;
}