#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE *fp;
    char fname[20];
    double a,b,c;
    
    printf("input filename =>");
    scanf("%s",fname);

    fp = fopen("fname","r");
    if(fp = NULL){
        printf("Can not open the file\n");
        exit(1);
    }
    fscanf(fp,"%lf %lf %lf",&a, &b , &c);
    fprintf(fp,"%f %f %f",a,b,c);
    fclose(fp);
    printf("a = %f , b= %f , c = %f\n" ,a,b,c);
    return 0;

}