#include <stdio.h>
int str_length(const char *s);
int main(void){
    char str[] = "ABCDEFG";
    printf("%d",str_length(str));
}
int str_length(const char *s){
    int len = 0; 
    while(*s++){//文字列の先頭が\0がどうか判定する
        len++;
    }
    return len;

}