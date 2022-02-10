#include <stdio.h>


//pass by value;
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

//pass by reference
void swap_ref(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 4;
    int b = 5;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    swap(a, b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    swap_ref(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}