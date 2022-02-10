#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);

        return binarySearch(arr, mid + 1, right, x);
    }

    return -1;
}

int main() {
    int arr[] = {1, 2, 4, 6, 7, 8, 10, 13};
    int k = 2;
    binarySearch(arr, 0, 7, k) == -1 ? printf("Element not found!"): printf("Element found! at index %d", binarySearch(arr, 0, 7, k));
}