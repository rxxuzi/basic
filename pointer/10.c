#include <stdio.h>
void check(int a[]);
void check2(int *a);
int main(void){
    int arr[100];
    check(arr);
    check2(arr);
    printf("check%d\n",sizeof(arr)/sizeof(arr[0]));
}
void check(int a[]){
    printf("check%d\n",sizeof(a)/sizeof(a[0]));
}
void check2(int *a){
    printf("check%d\n",sizeof(a)/sizeof(a[0]));
}