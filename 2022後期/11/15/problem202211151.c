#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
int main(void){
  int counter = 0;
  int max = 100000;
  double x,y,z;
 
  srand((unsigned int)time(NULL));
 
  /* 0 ? 1 �̗����𐶐��E�o�� */
  for(size_t i=0; i<max; i++){
    x = (rand()/(double)RAND_MAX);/*x�̍��W*/
    y = (rand()/(double)RAND_MAX);/*y�̍��W*/
    z= x*x + y*y;/*�~�̕�����*/
    if(z<1){
      counter += 1;
      /*�~�̓���*/
      
    }

    printf("x: %7f , y= %7f ,z=%7f: ���s��:%7d, z<1�̉�%7d\n",x,y,z,i+1,counter);
  }
 
  /* �~�������v�Z�E�o�� */
  printf("count : %d\n",counter);
  printf("max : %d\n",max);
  double pi = (double)counter*4 / max; /*�m������~���������߂�*/
  printf("�� : %lf\n", pi);
 
  return 0;
}
