#include <stdio.h>
int main(void){
    int x[2][2] = {
        {4 , 3 },
        {2 , 1 }
    };

    int y[2][2] = {
        {4 , 3 },
        {2 , 1 }
    };

    int z[2][2] = {0};

    for (size_t i = 0; i < 2; i++){
        for (size_t j = 0; j < 2; j++){
            for (size_t k = 0; k < 2; k++){
                z[i][j] += x[i][k] * y[k][j];
            }
        }
    }
    for (size_t i = 0; i < 4; i++){
        printf("%d ",z[0][i]);
    }
    
    return 0;
    
}