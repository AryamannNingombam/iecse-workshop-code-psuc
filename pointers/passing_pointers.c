#include <stdio.h>


void change(int *a){
    *a = 5;
}

int main(){
    int a = 4;
    int *b = &a;
    printf("a = %d\n", a);
    printf("b = %d\n", *b);
    change(b);
    printf("a = %d\n", a);
    printf("b = %d\n", *b);

    return 0;
}