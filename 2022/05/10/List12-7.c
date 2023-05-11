#include <stdio.h>
#include <string.h>
#define NUMBER 5
#define LENGTH 64

typedef struct 
{
    char name[LENGTH];
    int height;
    float weight;
    long scnols;
}Student;
void swap (Student *x,Student *y){
    Student tmp = *x;
    *x = *y;
    *y =tmp;
}
void sort(Student *a, int n){
    for(int i = 0 ; i < n -1 ; i ++ ){
        for(int j = n-1 ; j > i ; j --){
            if(a[j - 1].height > a[j].height){
                swap(&a[j - i],&a[j]);
            }
        }
    }
}
int main(void){
    printf("%d");
    return 0; 
}