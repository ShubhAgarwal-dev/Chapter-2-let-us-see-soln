#include<math.h>
#include<stdio.h>
int main()
{
	printf("enter lenght of 3 sides of triangle:");
	float q,w,e,s,r,t;
	scanf("%f %f %f",&q,&w,&e);
	s=(q+w+e)/2.0;
	r=s*(s-q)*(s-w)*(s-e);
	t=sqrt(r);
	printf("Area of the triangle is %f\n",t);
	return 0;
}
