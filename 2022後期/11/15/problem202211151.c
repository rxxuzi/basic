#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
 
int main(void){
  int counter = 0;
  int max = 100000;
  double x,y,z;
 
  srand((unsigned int)time(NULL));
 
  /* 0 ? 1 の乱数を生成・出力 */
  for(size_t i=0; i<max; i++){
    x = (rand()/(double)RAND_MAX);/*xの座標*/
    y = (rand()/(double)RAND_MAX);/*yの座標*/
    z= x*x + y*y;/*円の方程式*/
    if(z<1){
      counter += 1;
      /*円の内側*/
      
    }

    printf("x: %7f , y= %7f ,z=%7f: 実行回数:%7d, z<1の回数%7d\n",x,y,z,i+1,counter);
  }
 
  /* 円周率を計算・出力 */
  printf("count : %d\n",counter);
  printf("max : %d\n",max);
  double pi = (double)counter*4 / max; /*確率から円周率を求める*/
  printf("π : %lf\n", pi);
 
  return 0;
}
