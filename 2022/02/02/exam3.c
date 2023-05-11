#include <stdio.h>
void func(char a[] , char b[]){
    while(*b++ = *a++){
        ;
    }
}
int main (void){
    char str1[] = {0};
    char str2[] = {0};

    scanf("%s" ,str1);
    func(str1,str2);

    printf("%s" , str2);
    return 0;
}