#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char *name;
    int number;
    double height;
}person;

person init(char *name , int number, double height){
    person p1;
    p1.name = name;
    p1.number = number;
    p1.height = height;
    return p1;
}

int main(void){
    person p1;
    p1 = init("AAA",123,12.345);
    printf("名前 - %s : ナンバー : %d 体重 : %f",p1.name,p1.number,p1.height);
    return 0;
}

