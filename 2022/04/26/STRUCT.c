#include <Stdio.h>
#define NAME_LEN 64
typedef struct student{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
}Student;

void hiroko(Student *std){
    if(std -> height < 180){
        std ->height=180;
    }
    if(std -> weight > 80){
        std ->weight=80;
    }
}
int main (void){
    Student sanaka={"sanaka" ,175 ,62.5 ,740000};
    hiroko(&sanaka);

    printf("�w��=%s\n",sanaka.name);
    printf("�g��=%d\n",sanaka.height);
    printf("�̏d=%f\n",sanaka.weight);
    printf("���w��=%ld",sanaka.schols);

    scanf("�w��=%s",&sanaka.name);
    printf("�w��=%s\n",sanaka.name);

    return 0;

}
