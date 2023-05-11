#include <stdio.h>
#include <time.h>

#define MAX 100
int main(void){

    int array[MAX] = {};
    int flag =0;
    
    clock_t start,end;
    start =clock();
    for(int i = 3; i <= MAX; i++){
        flag = 0;
        for(int j = 2; j < MAX; j++){
            if(i%j == 0){
                flag=1;
            }
           
        }
        
        if(flag == 1){
            printf("%d\n",i);
        }
        
    }
    
    end = clock();
    printf("%2f•b‚©‚©‚è‚Ü‚µ‚½",(double)(end-start)/CLOCKS_PER_SEC); 


    return 0;
}