#include<stdio.h>
#include<string.h>
size_t strlen(const char *s){
    size_t len = 0; 
    while(*s++){
        len++;
    }
    return len;
}
int main (void){
    char *str = "wassup";
    printf("%d",strlen(str));
    return 0;
}