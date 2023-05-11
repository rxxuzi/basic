#include <stdio.h>
int main(void){
    int x =10;
    int p[3] = {3,5,8};
    for(int i = 0; i < 3 ; i++){
        printf("%d",*(p + i)); 
    }
    
    puts("");
    char ptr[] = "Codeine Crazy";
    for(int i = 0 ; i < sizeof(ptr) / sizeof(ptr[0]) ; i ++ ){
        if(ptr[i] == 'C'){
            ptr[i] = 'B';
        }else if(ptr[i] == 'c'){
            ptr[i] = 'b';
        }
    }
    printf("%s",ptr);

}