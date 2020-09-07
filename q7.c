#include<math.h>
#include<stdio.h>

int main()
{
	printf("Enter cartesian coordinates as (x,y):");
	float q,w,e,r,t,y,u;
	scanf("%f %f",&q,&w);
	t=pow(q,2);
	y=pow(w,2);
	r=sqrt(t+y);
	u=w/q;
	e=atan(u);
	printf("Respective polar coordinates are r=%f and angle=%f\n",r,e);
	return 0;
}
