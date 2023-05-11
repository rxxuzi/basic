#include<stdio.h>
int main(void){
    char *p = "Hello";
    int len =0 ;
    while(*p++){
        len++;
    }
    printf("%d\n",len);
    char s[] = "hello";
    int len2 =0;
    len2= sizeof(s)/sizeof(s[0]);
    printf("%d\n",len2);
    return 0;
}