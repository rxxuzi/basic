#include <stdio.h>
#include <math.h>

int main(void){
    int num;
    int counter = 0;
    puts("数を入力してください");
    scanf("%d",&num);

    double ans,exp,base;
    
    exp = (double)num; 
    ans = pow(base,exp);
    
    for(int i =1 ; i < num ; i++){
        base =i;
        ans = pow(base,exp);
        printf("%d mod %d =  %d\n",(int)ans, num , ((int)ans%num));
        
        if(i ==((int)ans%num) ){
            counter++;
        }
    }
    if(counter == num-1){
        puts("その数は素数です");
    }else{
        puts("その数は素数ではありません");
    }
    return 0;
}