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

    printf("指名=%s\n",sanaka.name);
    printf("身長=%d\n",sanaka.height);
    printf("体重=%f\n",sanaka.weight);
    printf("奨学金=%ld",sanaka.schols);

    scanf("指名=%s",&sanaka.name);
    printf("指名=%s\n",sanaka.name);

    return 0;

}
