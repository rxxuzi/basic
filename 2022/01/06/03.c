#include <stdio.h>
int str_length(const char *s);
int main(void){
    char str[] = "ABCDEFG";
    printf("%d",str_length(str));
}
int str_length(const char *s){
    int len = 0; 
    while(*s++){//������̐擪��\0���ǂ������肷��
        len++;
    }
    return len;

}