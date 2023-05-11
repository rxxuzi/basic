#include <stdio.h>
#include <stdlib.h>

typedef struct data
{
    int x;
    struct data *p;

}Data;

int main(void){
    Data *p1 = NULL;
    Data *p2 ;
    for (int i = 1; i < 10 -3; i++)
    {
        p2 = p1;
        p1 = (Data *)malloc(sizeof(Data));
        p1 -> x = i ;
        p1 -> p = p2 ; 
    }
    printf("%d" , p1->x);
    do
    {
        p1 = p1->p;
        printf("%d",p1->x);
    } while (p1 ->p != NULL);
    
    
}
