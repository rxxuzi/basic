#include <stdio.h>
int main(void){
    char str[] = "abc";
    char *ch = "abc"; //文字列リテラルといって/3とは違うので注意
    /*
    配列を生成してから、データをいれる abc\0
    /4はabc\0を作ってから、aのデータを入れる
    */
   printf("%s\n",str);
   printf("%c",*ch);
}