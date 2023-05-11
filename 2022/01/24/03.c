/*2022/01/24課題*/
#include <stdio.h>
void sum();
void diff();
void pro();
void quo();

int main(void){
    int n,m;
    //void (*clac[4])(int,int) = {sum,diff,pro,quo};//関数ポインタの定義
    void (*clac)(int n,int m) = sum;
    puts("２つの整数を入力してください");
    scanf("%d %d",n,m);
    
    (*clac)(n,m);

    /*
    for(int i = 0 ; i < 4; i ++ ){
        printf("%d\n", (*clac[i])(n , m));
    }*/
    return 0;
}
void sum(int x,int y){
    printf("%d",x+y);
}
void diff(int x,int y){
    printf("%d",x-y);
}
void pro(int x,int y){
    printf("%d",x*y);
}
void quo(int x,int y){
    printf("%d",x/y);
}