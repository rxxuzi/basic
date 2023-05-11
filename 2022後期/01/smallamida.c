#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show(int *arr){
    for (size_t i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        printf("%d:%d, " , i , arr[i]);
    }
    printf("\n");
}
int main(void){

    srand((unsigned int)time(NULL));

    int p = 2;//正解のカウント
    int line = 3; //1 ~ 5本の横線を入れる
    int arr[3] = {};//正しいラインの格納
    int lineT[3][3] = {};//横線
    int counter = 0;

    for(int i = 0; i < 3; i ++){
        if(i == p){
            arr[i] = 1;
        }else{
            arr[i] = 0;
        }
    }
    //show
    show(arr);

    for(int i = 0 ; i < line ; i ++){
        int a = rand()%2;
        int b = rand()%2;
        lineT[a][b] = 1;
        printf("%d.%d\n",a,b);

    }

    

    

    printf("o is %d\n",p);

    printf("0  1  2  \n");
    printf("|  |  |  \n");

    for(size_t i = 0; i < 5 ; i++ ){
        for (size_t j = 0; j < 3; j++ ){

            if(lineT[i][j]){
                printf("|--");
            }else{
                printf("|  ");
            }
            
        }
        printf("\n");
    }

    for (size_t i = 0; i < 3; i++){
        if (i == p){
            printf("o  ");
        }else{
            printf("x  ");
        }   
    }
    puts("");
    
    
}

/*
void swap(int &x ,int &y){
    int tmp = &x;
    &x = &y;
    &y = tmp; 
}*/
