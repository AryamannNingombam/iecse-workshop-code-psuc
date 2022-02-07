#include <stdio.h>
#include <string.h>

//pointer to the struct;


typedef struct Person{
    char name[20];
    int age;
    struct Person parent;
}ppppp;


void test(struct Person *s){
    s->age += 3;

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
    strcpy((*p2).name,"james");
    strcpy((*(*p3)).name,"james");
    strcpy((*p3)->name,"james");
    return 0;
}