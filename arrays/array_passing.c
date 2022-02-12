#include <stdio.h>



void print_array(int arr[3]){
    int i;
    printf("Elements : ");
    for(i=0;i<10;i++){
        printf("%p ",&arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    print_array(arr);


    return 0;
}