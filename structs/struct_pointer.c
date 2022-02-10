#include <stdio.h>
#include <string.h>

//pointer to the struct;


typedef struct Person{
    char name[20];
    int age;
}person;

 void test(person *p){
    p->age = 10;
    printf("%s\n", p->name);
}


int main(){
    struct Person p1;
    p1.age = 19;
    strcpy(p1.name,"james");
    struct Person *p2 = &p1;
    struct Person **p3 = &p2;
    p2->age = 21;
    p1.age = 23;
    strcpy(p2->name,"james");
    test(&p1);
    strcpy((*p2).name,"frank");
    test(p2);
    strcpy((*(*p3)).name,"aryamann");
    test(*p3);
    strcpy((*p3)->name,"god");
    test(*p3);
    
    
    return 0;
}