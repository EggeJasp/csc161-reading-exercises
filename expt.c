#include <stdio.h>

float expt(float x, int y){
  float value = 1.0;
  if(y>= 0){
  for(int i = 0; i < y; i++){
    value = value * x;
  }
  }
  else{
     for(int i = 0; i < y*-1; i++){
    value = value * x;
    
  }
     value= 1/value;
  }
  return value;
}
int main(void){
  printf("%f\n", expt(2,3));
  printf("%f\n", expt(0.5,2));
  printf("%f\n", expt(0.25,-2));
  printf("%f\n", expt(10.0,0));
  return 0;
}
