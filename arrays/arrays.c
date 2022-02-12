#include <stdio.h>


int main(){
    int b =5;
    double a[4] = {12,3,45,66};
    //printing a single element;
    printf("First : %d\n", a[0]);
    printf("Second : %d\n", a[1]);
    printf("Third : %d\n", a[2]);
    printf("Fourth : %d\n",a[3]);
    //printing the whole array using for loop;
    printf("Elements : ");
    for(int i=0; i<4; i++){
        printf("%p ", &a[i]);
    }
    // printf("\n");

    // //changing element 2;
    // a[2] = b;
    // printf("a[2] = %d\n", a[2]);
    // //printing the whole array again
    // printf("Elements : ");
    // for(int i=0; i<4; i++){
    //     printf("%d ", a[i]);
    // }
    // printf("\n");
    return 0;
}