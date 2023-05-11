#include <stdio.h>
#include <stdlib.h>
int main(void){
    char str[128];
    printf("•¶Žš—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
    scanf("%s",str);
    printf("int‚É•ÏŠ·‚·‚é‚Æ%d‚Å‚·\n",atoi(str));
    printf("long‚É•ÏŠ·‚·‚é‚Æ%d‚Å‚·\n",atol(str));
    printf("double‚É•ÏŠ·‚·‚é‚Æ%f‚Å‚·\n",atof(str));


    return 0;
}