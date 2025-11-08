#include <array>
#include <vector>

template <typename T, unsigned long N>
int binarySearchFirst(std::array<T, N> arr, T target) {
    int left = 0, right = static_cast<int>(N) - 1, ans = -1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] == target) {
            ans = middle;
            right = middle - 1;
        }
        else if (target < arr[middle]) {
            right = middle - 1;
        }
        else {
            left = middle + 1;
        }
    }
    return ans;
}

template <typename T>
int binarySearchFirst(std::vector<T> arr, T target) {
    int left = 0, right = static_cast<int>(arr.size()) - 1, ans = -1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] == target) {
            ans = middle;
            right = middle - 1;
        }
        else if (target < arr[middle]) {
            right = middle - 1;
        }
        else {
            left = middle + 1;
        }
    }
    return ans;

}