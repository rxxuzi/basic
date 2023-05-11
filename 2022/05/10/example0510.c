#include <stdio.h>
#include <stdlib.h>
typedef struct myst
{
    int number;
    double strength;
    struct myst *next;    
}Myst;

int main(void){
    Myst *head;
    Myst *p;
    head = NULL;

    head = (Myst*)malloc(sizeof(Myst));
    head -> number = 100;
    head -> strength = 200;
    /*
    :mallocは動的メモリの確保
    :データ部分に値を入れていく、scanfとか使って
    head -> number 代入したい値
    
    */
   head -> next = NULL;

   /*データの追加*/
   p = head;
   head = (Myst*)malloc(sizeof(Myst));
   
   head -> number = 200;
    head -> strength = 300;

   head ->next=p;

   p = head;
   head = (Myst*)malloc(sizeof(Myst));
   
    head -> number = 900;
    head -> strength = 300;

   head ->next=p;

    
    while(p != NULL){
    ("%d",p->number);
    p = p->next;
    }
    

    return 0;
}
