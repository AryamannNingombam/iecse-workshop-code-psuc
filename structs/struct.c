#include <stdio.h>
#include <string.h>

typedef struct{
    char name[100];
    int age;
    char shirt_size[100];
}Boy;

struct Girl{
    char name[100];
    int age;
    char pant_size[100];
};

void print_girl_info(struct Girl g){
    printf("Name : %s\nAge : %d\nPant Size : %s\n",
    g.name,g.age,g.pant_size);
}

int main(){ 
    Boy b1;
    b1.age=19;
    strcpy(b1.name,"Aryamann");
    strcpy(b1.shirt_size,"XL");
    struct Girl g1;
    strcpy(g1.name,"Arushi");
    g1.age = 45;
    strcpy(g1.pant_size,"SS");
    //print boy information;
    printf("Name : %s\nAge : %d\nShirt size : %s",
    b1.name,b1.age,b1.shirt_size);
    print_girl_info(g1);
    return 0;
}