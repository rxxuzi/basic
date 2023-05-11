#include <stdio.h>
#include <stdlib.h>
typedef struct data{
    signed char d[4];
}Data;

typedef union uni{
    int n;
    Data d;
}Uni;

int main(void){
    Uni *u;
    u = (Uni*)malloc(sizeof(Uni));
    u -> n = -1;
    printf("%d", u -> d.d[3]);
    return 0;
}

