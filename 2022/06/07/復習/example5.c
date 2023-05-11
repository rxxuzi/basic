#include <stdio.h>
union un{
    char *s;
    int a;
    int b;
    double c;
};

struct st{
    char *s;
    int a;
    int b;
    double c;
};
int main(void){

    struct st *data1;
    data1->s="ABC";
    data1->a=123;
    data1->b=321;
    data1->c=3.1415;
    printf("name %s:number %d:number2 %d:Pi %f\n",data1->s,data1->a,data1->b,data1->c);

    /*
    unionは同じメモリを使いまわしているから一度に同じデータを出力できない
    */
    union un *data2;
    data2->s = "XYZ";
    data2->a=789;
    data2->b=987;
    data2->c=3.1415;
    printf("name %s:number %d:number2 %d:Pi %f\n",data2->s,data2->a,data2->b,data2->c);

    
    return 0;
}