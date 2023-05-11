#include <stdio.h>
int str_length(const char *s);
int main(void){
    char str[] = "ABCDEFG";
    printf("%d",str_length(str));
}
int str_length(const char *s){
    int len = 0; 
    while(*s++){//•¶š—ñ‚Ìæ“ª‚ª\0‚ª‚Ç‚¤‚©”»’è‚·‚é
        len++;
    }
    return len;

}