/*2022/01/24�ۑ�*/
#include <stdio.h>
int add(int,int);int sub(int,int);
int mul(int,int);int div(int,int);

int main(void){
    int x,y,z;
    int (*clac[])(int,int) = {add,sub,mul,div};//�֐��|�C���^�̒�`
    char c[4]={'+','-','*','/'};
    puts("�Q�̐�������͂��Ă�������");

    scanf("%d%d",&x,&y);
    puts("���Z���@��I��ł�������");
    for(int i=0;i<4;i++){
        printf("[ %c ] -> %d\n",c[i],i);
    }
    scanf("%d",&z);
    
    printf("%d %c %d = %d\n", x, c[z], y,(*clac[z])(x,y));
    
    for(int i=0;i<4;i++){
        printf("%d %c %d = %d\n", x, c[i], y, (*clac[i])(x,y));
    }
    return 0;
}
int add(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}
int mul(int x,int y){
    return x*y;
}
int div(int x,int y){
    return x/y;
}