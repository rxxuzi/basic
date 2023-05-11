#include<stdio.h>
int main(void){
    int arr[5] = {1,2,3,4,5};
    int *p ;
    p =arr;
    for(int i =0 ; i < 5 ; i ++){
        printf("%d\n",arr[i]);
    } 
    for(int i =0 ; i < 5 ; i ++){
        printf("%d\n",*(p+i));
    } 
    return 0;
}