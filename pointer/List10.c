#include <stdio.h>
void ary(int *v , int n , int val){
    for(int i = 0; i < n ; i++){
        v[i] = val;
    }
}
int main(void){
    int i;
    int a[] = {1,2,3,4,5};

    ary(a,5,99);
    for(int i = 0; i < 5; i ++){
        printf("a[%d] = %d \n" , i , a[i]);
    }
    printf("”z—ñ‚Ì‘å‚«‚³‚Í%d",sizeof(a)/ sizeof(a[0]));
    return 0;
}