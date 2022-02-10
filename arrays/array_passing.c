#include <stdio.h>



void print_array(int arr[10]){
    int i;
    printf("Elements : ");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[10] = {1,2,3,4,5};
    print_array(arr);


    return 0;
}