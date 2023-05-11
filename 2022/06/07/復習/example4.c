#include <stdio.h>
typedef struct st{
    int number;
    double strength;
    struct st *next;

}st;
st init(int number,double strength){
    st p;
    p.number =number;
    p.strength = strength;
    return p;

}
int main(void){
    struct st *data;

    
    
    return 0;
}