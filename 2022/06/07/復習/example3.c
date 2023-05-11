#include <stdio.h>
struct st{
    char *s;
    float height;
    float weight;
    long schols;
};
int main(void){
    //struct st data[10];
    struct st *data;
    data->s = "²“¡";
    data->height = 12;
    data->weight = 120.3;
    data->schols = 1000;

    printf("%s %3f",data->s, data->height);
    
    return 0;
}