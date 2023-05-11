#include <stdio.h>
#include <stdlib.h>
int main(void){
    char *s = "12345678";
    printf("%s\n",s);
    int *x = atoi(s);
    printf("%d",x);
    
    return 0;
}