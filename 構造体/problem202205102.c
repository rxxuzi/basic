#include <stdio.h>
#include <stdlib.h>
void show_data();

typedef struct myst{
    int number;
    double strength;
    struct myst *next;    
}myst;

void show_data(myst *p){
    myst *lp;
    lp = p;
    while(lp != NULL){
        printf("%3d %f\n",p->number, p->strength);
        lp = lp -> next;
    }
}

myst add_data(void){
    myst *p;
    p=(myst *)malloc(sizeof(myst));
    printf("num : "); scanf("%d",&p->number);
    printf("strength : "); scanf("%d",&p->strength);
    p=p->next;
    return *p;
}

int main(void){
    int choose = 0;
    myst *head;
    myst *p;
    myst *c;
    myst b;
    head = NULL;
    head = (myst *)malloc(sizeof(myst));

    head->next=NULL;

    while (choose != 3)//選択画面
    {
        puts("1:表示 2:追加 3:終了");
        printf("choose = "); scanf("%d",&choose);
        c = head;
        if(choose == 1){//データを見る
            show_data(c);
        }
        if(choose == 2){
            *head = add_data();
            head -> next = p;
            printf("head = %3d %f",head->number,head->strength);
            printf("p=%3d %f",p->number,p->strength);
        }
    }
    return 0;
}