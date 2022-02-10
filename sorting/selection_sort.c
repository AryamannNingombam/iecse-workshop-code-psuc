#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n) {
    int minimum_element;
    for (int i = 0; i < n - 1; i++) {
        minimum_element = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minimum_element])
                minimum_element = j;
        }
        swap(&arr[minimum_element], &arr[i]);
    }
}

int main() {
    int n = 10;
    int arr[] = {8, 6, 4, 2, 1, 3, 5, 7, 9, 0};
    selectionSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}