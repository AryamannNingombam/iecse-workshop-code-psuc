#include <stdio.h>



int main(){
    int a = 4;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    printf("a = %d\n", a);
    printf("b = %d\n", *b);
    printf("c = %d\n", **c);

    //printing value of a,b, and c;
    printf("Value of a : %p\n", &a);
    printf("Value of b : %p\n", b);
    printf("Value of c : %p\n", *c);
    //printing address of a, b and c;
    printf("Address of b : %p\n", &b);
    printf("Value of c : %p\n", c);


// & - value to address;
// * - address to value

    //changing value of c
    **c = 5;
    printf("a = %d\n", a);
    printf("b = %d\n", *b);
    printf("c = %d\n", **c);


    return 0;
}