#include <stdio.h>

// double pointers, passing values, refernce and value,
//array passing;



void swap_value(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap_ref(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

void test(int arr[100]){
 *(arr+2) += 3;;
}
 
 

int main(){
    int a[] = {1,2,3,4};
    printf("%d\n",a[2]);
    test(a);
    printf("%d\n",a[2]);
    return 0;
}