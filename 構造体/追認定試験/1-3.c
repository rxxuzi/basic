#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr[] = {9 , 8 , 7, 6, 5, 4, 3, 2, 1, 0};
    int *p;
    int i = 0;
    int j = 1;
    int n = 0;
    while (arr[i] != 7){ i++; }
    while (arr[j] != 3){ j++; }

    printf("%d %d ", i , j);
    p = (int *)malloc(sizeof(int) * (j-i));
    for(n=0;n<(j-i);n++){
        *(p+n) = arr[i + n];
    }
    
    for (n = 0; n < (j-i); n++){
        printf("%d",*(p+n));
    }
    free(p);
    return 0;
    
}