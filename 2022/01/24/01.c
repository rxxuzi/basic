#include <stdio.h>
void func(void);
int main(void){
    void (*thug)(void)=func;
    (*thug)();
    return 0;
}
void func(void){
    printf("funcPoi\n");
}