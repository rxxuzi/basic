#include <stdio.h>
#include <stdlib.h>
int main(void){
    char str[128];
    printf("文字列を入力してください");
    scanf("%s",str);
    printf("intに変換すると%dです\n",atoi(str));
    printf("longに変換すると%dです\n",atol(str));
    printf("doubleに変換すると%fです\n",atof(str));


    return 0;
}