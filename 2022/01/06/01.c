#include <stdio.h>
int main(void){
    int *p;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    p = arr;
    
    /*‘ŠŒİ‚É‘‚«Š·‚¦‚ª‚Å‚«‚é*/
    printf("%d\n",arr[2]);
    printf("%d\n", *(arr + 2));
    printf("%d\n",p[2]);
    printf("%d\n", *(p + 2));
}