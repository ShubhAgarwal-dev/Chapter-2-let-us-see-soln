#include <math.h>
#include <stdio.h>
int main()
{
  int q,w,e,r,t,y,u;
  printf("please enter a 5 digit number\n");
  scanf("%d",&q);
  w=q/10000;
  e=q/1000-w*10;
  r=q/100-w*100-e*10;
  t=q/10-w*1000-e*100-r*10;
  y=q-w*10000-e*1000-r*100-t*10;
  u=10000*y+1000*t+100*r+10*e+w;
  printf("Your Given number in reverse order is:%d\n",u );
  return 0;
}
