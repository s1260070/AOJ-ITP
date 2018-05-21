#include<stdio.h>
int main(){
  int x;
  for(int i=0;;i++){
    scanf("%d",&x);
    if(x==0)break;
    printf("Case %d: %d\n",i+1,x);
    
  }
  return 0;
}
