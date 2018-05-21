#include<stdio.h>
int main(){
  int x,y,c;
  while(1){
    scanf("%d %d",&x,&y);
    if(x==0&&y==0)break;
    if(x>y){
      c=x;
      x=y;
      y=c;
    }
    printf("%d %d\n",x,y);
  }
  return 0;
}
