#include<stdio.h>
int main()
{
	printf("Enter a 4-digit number please:");
	int q,w,e,r,t,y;
	scanf("%d",&q);
	w=q/1000;
	e=q/100-w*10;
	r=q/10-w*100-e*10;
	t=q-w*1000-e*100-r*10;;
	y=w+t;
	printf("Sum of first and last digit number is:%d\n",y);
	return 0;
}
