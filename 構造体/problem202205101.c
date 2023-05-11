#include<stdio.h>
#include<string.h>

#define NUMBER 5
#define LEN 64

typedef struct{
    char name[LEN];
    int height;
    float weight;
    long schols;
}Student;

void swap(Student *x, Student *y){
    Student temp=*x;
    *x=*y;
    *y=temp;
}

void sort(Student *a, int n){
    int i, j;

    for(i = 0 ; i < n - i ; i++){
        for(j = n-1 ; j > i ; j--){
            if(a[j-1].height > a[j].height){
                swap(&a[j-1], &a[j]);
            }
        }
    }
}
Student check_std (Student st){
    
    if (100 > st.height || st.height >220)
    {
        strcat(st.name , "*");
    }
    if (30 > st.weight || st.weight > 150)
    {
        strcat(st.name , "*");
    }
    if (0 > st.schols || st.schols > 200000)
    {
        strcat(st.name , "*");
    }
    return (st);
    
}
int main(void){

    Student std[]={
        {"Sato", 178, 61.2, 80000},
        {"Sanaka", 175, 62.5, 73000},
        {"Takao", 173, 86.2, 0},
        {"Mike", 165, 72.3, 70000},
        {"Masaki", 179, 77.5, 70000},
    };

    

    for(int i=0; i<NUMBER; i++){
        printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
    }
    sort(std, NUMBER);
    
    /*
    puts("test");
    insert(std[0]);
    printf("%-8s %6d%6.1f%7ld\n", std[0].name, std[0].height, std[0].weight, std[0].schols);
    */

    for (size_t i = 0; i < NUMBER; i++){
        std[i] = check_std(std[i]);
    }
    
        puts("\nAfter Sort");
    for(int i=0; i<NUMBER; i++){
        printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
    }

    return 0;
}



