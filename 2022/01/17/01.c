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
    printf("���������͂��Ă�������");
    scanf("%s" , str);
    printf("������̒�����%d�ł�",strlen(str));
    return 0;
}