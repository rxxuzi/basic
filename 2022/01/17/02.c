#include <stdio.h>
char *strcopy(char *s1 , const char *s2){
    char *tmp = s1;
    while(*s1++ = *s2++){
        ;
    }
    return tmp;
}

char *strncopy(char *s1,const char *s2,size_t t){
    char *tmp = s1;
    while(t){
        if(!(*s1++ = *s2++)) break;
        t --;
    }
    while(t--){
        *s1++ = '\0';
    }
    return tmp;
    
}
int main(void){
    char str1[128];
    char str2[128];
    printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
    scanf("%s" , str1);
    *strcopy(str2,str1);
    printf("%s,%s",str1,str2);
    return 0;
}