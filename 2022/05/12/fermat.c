#include <stdio.h>
#include <math.h>

int main(void){
    int num;
    int counter = 0;
    puts("”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
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
        puts("‚»‚Ì”‚Í‘f”‚Å‚·");
    }else{
        puts("‚»‚Ì”‚Í‘f”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ");
    }
    return 0;
}