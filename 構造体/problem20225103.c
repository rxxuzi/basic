#include <stdio.h>
struct bits
{
    unsigned int b1 : 1;
    unsigned int b2 : 1;
    unsigned int b3 : 1;
    unsigned int b4 : 1;
    unsigned int b5 : 1;
    unsigned int b6 : 1;
    unsigned int b7 : 1;
    unsigned int b8 : 1;
};
typedef union{
    unsigned int a;
    struct bits b;
}u;

int main(void){
    u moji;
    moji.a = 63;
    printf("%d�̃r�b�g�\����",moji.a);
    printf("%d%d%d%d%d%d%d%d",
    moji.b.b1,
    moji.b.b2,
    moji.b.b3,
    moji.b.b4,
    moji.b.b5,
    moji.b.b6,
    moji.b.b7,
    moji.b.b8);
    printf("�ł�");
    return 0;
}
