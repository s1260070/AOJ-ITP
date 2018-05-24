#include<stdio.h>
int main(){
  int a,b,ans;
  char o;
  while(1){
    scanf("%d %c %d",&a,&o,&b);
    if (o=='?')break;
    if(o=='+'){ans=a+b;}
    else if(o=='-'){ans=a-b;}
    else if (o=='*'){ans=a*b;}
    else if (o=='/'){ans=a/b;}
    printf("%d\n",ans);
  }

  
  return 0;
  
}
