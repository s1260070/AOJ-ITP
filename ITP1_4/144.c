#include<stdio.h>
#include<limits.h>
int main(){
  int n;
  scanf("%d",&n);
   long  sum=0,min=LONG_MAX,max=LONG_MIN;
  for (int i=0;i<n;i++){
    int x;
   
    scanf("%d",&x);
    if (x>max)max=x;
    if (x<min)min=x;
    sum+=x;
  }
  printf("%ld %ld %ld\n",min,max,sum);
  return 0;
  
}
