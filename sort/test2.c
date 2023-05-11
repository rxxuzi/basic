#include <stdio.h>
#include <stdio.h>
#define N 10
#include <time.h>
void sort (int *s,int n){
    int i , j , tmp;
    while (n > 0){
        for(int i = 0 ; i < N ; i ++){
            j = i;
            tmp = s[i];
            while (j >= n && (s[j - n ] > tmp)){
                s[j] = s[j-n];
                j = j -n;
            }
            s[j] = tmp; 
        }
        if(n / 2 != 0){
            n = n/2;
        }else if(n == 1){
            n =0;
        }else{
            n = 1;
        }
    }  
}
void view(int *s){
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",s[i]);
    }
    
}
int main(void){
    int arr[] = {2,5,4,3,7,1,9,8,0,6};
    view(arr);
    puts("");
    sort(arr,5);
    view(arr);
    return 0;


}