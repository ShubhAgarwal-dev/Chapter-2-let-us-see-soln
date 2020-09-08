#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
  /* calculate wind chill factor */
  printf("please tell temperature(in farenhiet) and velocity of wind:");
  float q,w,e,r;
  scanf("%f %f",&q,&w);
  e=pow(w,0.16);
  r=35.74+0.6215*q+(0.4275*q-35.75)*e;
  printf("The tempetature you are feeling due to wind is %f\n",r);
  return 0;
}
