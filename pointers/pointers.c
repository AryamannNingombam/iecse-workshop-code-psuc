#include <stdio.h>


int main(){
    int a = 4;
    int *b = &a;
    printf("a = %d\n", a);
    printf("b = %d\n", *b);
    //printing address of a and b;
    printf("Address of a : %p\n", &a);
    printf("Address of b : %p\n", b);

    //changing value of b;
    *b = 5;
    printf("a = %d\n", a);
    printf("b = %d\n", *b);


    return 0;
}