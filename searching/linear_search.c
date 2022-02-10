#include <stdio.h>

int linearSearch(int arr[], int x, int n) {
  for(int i = 0; i < n; i++){
      if(arr[i] == x){
          return i;
      }
  }
    return -1;
}

int main() {
    int n = 8;
    int arr[] = {1, 2, 4, 6, 7, 8, 10, 13};
    int k = 5;
    linearSearch(arr,k, n) == -1 ? printf("Element not found!"): printf("Element found! at index %d", linearSearch(arr,k, n));
}