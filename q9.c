#include<stdio.h>
#include<math.h>
int main()
{
	//To finnd distance between two places of earth
	printf("Enter value of longitude and latitude of both places as (latitude,longitude)\n");
	float q,w,e,r,t,y,u,i,o,p;
	scanf("%f %f %f %f",&q,&w,&e,&r);
	t=(q*22)/(7*180.0);
	y=(w*22)/(7*180.0);
	u=(e*22)/(7*180.0);
	i=(r*22)/(7*180.0);
	o= acos((sin(t)*sin(u))+(cos(t)*cos(u)*cos(y-i)));
	p=3963.0*o;
	printf("Distance between two points in miles is:%f\n",p);
	return 0;
}
