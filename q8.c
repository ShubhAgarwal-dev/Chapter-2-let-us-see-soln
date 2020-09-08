#include<stdio.h>
#include<math.h>
int main()
{
	printf("Enter angle in degrees:");
	int q;
	float w,e,r,t,y,u;
	scanf("%d",&q);
	w=(q*3.1416)/180;
	e=sin(w);
	r=cos(w);
	t=pow(e,2);
	y=pow(r,2);
	u=t+y;
	printf("%f\n",u);
	return 0;
}
