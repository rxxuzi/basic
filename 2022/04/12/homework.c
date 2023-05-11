#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a1,a2;
    double b1,b2;
    char c1,c2;
    FILE *fp;
    /*値を入力する*/
    a1=1;
    b1=2.2;
    c1='x';

    /*temp.txtに値を書き込む*/
    fp=fopen("temp.txt","+w");
    fprintf(fp,"%d %lf %c",a1,b1,c1);
    fclose(fp);

    /*temp.txtから値を参照して持ってくる*/
    fp=fopen("temp.txt","r");
    fscanf(fp,"%d %lf %c",&a2,&b2,&c2);
    fclose(fp);
    printf("%d, %lf, %c",a2,b2,c2);
    return 0;

}