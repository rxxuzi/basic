#include <stdio.h>
int main(void){
    char str[] = "abc";
    char *ch = "abc"; //�����񃊃e�����Ƃ�����/3�Ƃ͈Ⴄ�̂Œ���
    /*
    �z��𐶐����Ă���A�f�[�^������� abc\0
    /4��abc\0������Ă���Aa�̃f�[�^������
    */
   printf("%s\n",str);
   printf("%c",*ch);
}