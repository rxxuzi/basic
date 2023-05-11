#include <stdio.h>
#include <stdlib.h>
int main(void){
    char str[] = "1234567890";
    char *p ;
    int i =0, j =0, n  = 0;
     while (str[i] != '3'){
        i ++;
     }
     while (str[j] != '7')
     {
        j ++;
     }

     printf("%d %d\n", i,j);
    
    

    p = (char *)malloc(sizeof(char)*(j - 1));
    for (n = 0; n < (j-1); n++)
    {
        *(p + n) = str[i + n];
        printf("\n ”z—ñp[%d] = %c" ,n, str[n + i]);
    }
    printf("\n%s" , p);
    
     return 0;
     
}