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
    printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
    scanf("%s" , str);
    printf("•¶Žš—ñ‚Ì’·‚³‚Í%d‚Å‚·",strlen(str));
    return 0;
}