#include <stdio.h>
size_t strlen(const char *s){
    size_t len = 0;
    while(*s++){
        len++;
    }
    return len;
}
int main(void){
    char str[128];
    printf("文字列を入力してください");
    scanf("%s" , str);
    printf("文字列の長さは%dです",strlen(str));
    return 0;
}