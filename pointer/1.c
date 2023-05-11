#include <stdio.h>
void setZero(char *p){
    int i = 0 ;
    while(p[i] != '0'){
        p[i] = '0' ;
        i ++;
    }
}
int main(void){
    char str[] = "3210123";
    char *p;
    p= str;
    setZero(p);
    printf("%s" , str);
    return 0 ; 
    
}
