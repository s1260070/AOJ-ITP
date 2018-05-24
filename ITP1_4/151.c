#include<stdio.h>
int main(){
  int x,y;

  while(1){
      scanf("%d %d",&x,&y);
      if(x==0&&y==0)break;
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
      printf("#");
    }
    printf("\n");
  }
  printf("\n");
  }
  return 0;
  
}
