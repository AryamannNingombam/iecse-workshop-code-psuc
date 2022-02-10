#include <stdio.h>

int factorial(int n){
    if(n == 0){ // base case
        return 1;
    }
    printf("%d\n", n);
    int res = n * factorial(n-1);
    printf("%d\n", res);
    return res;
}

int main(){
    printf("Factorial: \n%d\n", factorial(5));
}

