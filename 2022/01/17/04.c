#include <stdio.h>
#include <stdlib.h>
int main(void){
    char str[128];
    printf("���������͂��Ă�������");
    scanf("%s",str);
    printf("int�ɕϊ������%d�ł�\n",atoi(str));
    printf("long�ɕϊ������%d�ł�\n",atol(str));
    printf("double�ɕϊ������%f�ł�\n",atof(str));


    return 0;
}