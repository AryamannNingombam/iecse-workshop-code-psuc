#include <stdio.h>
#include <string.h>

//pointer to the struct;


typedef struct {
    char name[20];
    int age;
}person;


void print_person_details(person *p){
    printf("Name : %s\nAge : %d\n",p->name,p->age);
}
  



int main(){
   person p1;
   char arr[100];
   scanf("%s",arr);
   strcpy(p1.name,arr);
   int age;
    scanf("%d",&age);
    p1.age =age;
    person *p2 = &p1;
    print_person_details(p2);
    return 0;
}