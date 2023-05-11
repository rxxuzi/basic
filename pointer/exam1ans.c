#include <stdio.h>
int main(void){
    int *p;
    int a[10];

    p = &a;

    if(&p == a[0]){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}