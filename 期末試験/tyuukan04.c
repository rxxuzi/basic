#include <stdio.h>
#include <stdlib.h>
typedef struct data
{
    unsigned char d[4];
}Data;

typedef union uni
{
    Data data;
    int i ;
}Uni;

int main(void){
    Uni u ;
    u.data.d[0] = 255;
    u.data.d[1] = 255;
    u.data.d[2] = 255;
    u.data.d[3] = 255;
    printf("%d",u.i);
    return 0;
}

