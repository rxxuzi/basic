#include<stdio.h>
#include<ctype.h>

#define put_str_ln(s) (put_str(s),putchar('\n'))

void put_str(const char *s){
    putchar('\"');
    while(*s){
        putchar(*s++);
    }
    putchar('\"');
}
int main(void){
    int i;
    char s[128],t[128];
    char a[] = "cocaine";
    char *p = "codeine";
    printf("a= "); put_str_ln(a);
    printf("p= "); put_str_ln(p);
    return 0;
}
