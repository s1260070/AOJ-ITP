#include<stdio.h>
#include<math.h>
int main(){
  double r;
  double p = acos(-1);
  scanf("%lf",&r);
  printf("%f %f\n",p*r*r,2*p*r);
  return 0;
  
}
