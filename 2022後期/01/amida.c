#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swp(int *x , int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void){

    srand((unsigned int)time(NULL));

    int p = rand()%6;//�����̃J�E���g
    int line = 9; //1 ~ 5�{�̉���������
    int arr[6] = {};//���������C���̊i�[
    int lineT[6][6] = {};//�����̍��W���
    int counter = 0;//�J�E���g�p�ϐ�
    printf("o is %d\n",p);//�����̐���\��

    //���������C���̊i�[
    for(int i = 0; i < 6; i ++){
        if(i == p){
            arr[i] = 1;
        }else{
            arr[i] = 0;
        }
    }
    /*�����̍��W�����߂�*/
    for(int i = 0 ; i < line ; i ++){
        lineT[rand()%6][rand()%5] = 1;
    }
    printf("border\n");
    /*�����̍��W�̊m�F*/
    for(size_t i = 0; i < 6; i++)
    {
        for (size_t j = 0; j < 6; j++)
        {
            printf("%d",lineT[i][j]);
        }
        puts("");
    }
    

    

    printf("0  1  2  3  4  5\n");
    printf("|  |  |  |  |  |  ");
    for(int j = 0; j < 6 ; j ++){
        printf("%d:[%d]," ,j , arr[j]);
    }
    printf("\n");

    /*���������v���O����*/
    for(size_t i = 0; i < 6 ; i++ ){
        for (size_t j = 0; j < 6; j++ ){

            if(lineT[i][j]){
                if(j < 5){
                    printf("|--");
                    swp(&arr[j] , &arr[j+1]);
                }else{
                    printf("|  ");
                }
                
            }else{
                printf("|  ");
            }
            
        }

        for(int j = 0; j < 6 ; j ++){
            printf("%d:[%d]," ,j , arr[j]);
        }
        printf("\n");
    }
    printf("|  |  |  |  |  |\n");

    for (size_t i = 0; i < 6; i++){
        if (arr[i]){
            printf("o  ");
        }else{
            printf("x  ");
        }   
    }
    puts("");
    puts("which is o");
    int c;
    scanf("%d",&c);
    if(c == p){
        puts("correct!");
    }else{
        puts("wrong!");
    }
    
}

