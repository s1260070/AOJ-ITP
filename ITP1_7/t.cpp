#include<stdio.h>
int main(){
  int mid,fin,again;
  while(1){
    int sum=0;
    scanf("%d%d%d",&mid,&fin,&again);
    if(mid==-1&&fin==-1&&again==-1)break;
    if(mid==-1||fin==-1) printf("F\n");
    else if(mid+fin>=80) printf("A\n");
    else if(mid+fin>=65) printf("B\n");
    else if(mid+fin>=50) printf("C\n");
    else if(mid+fin>=30){
      if(again>=50) printf("C\n");
      else printf("D\n");
    }
    else printf("F\n");
  }
  return 0;
}
