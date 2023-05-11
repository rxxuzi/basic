#include <stdio.h>
int func(const char s[]){
        int i=0;
        while(s[i]){
            i++;
        }
        return i;
    }

    
    int main(void){
        char str[256];
        scanf("%s",str);
        printf("%d",func(str));
        return 0;
    
    return 0;
    }