//Program to calculate minimum number of notes
#include<stdio.h>
int main()
{
	printf("Please enter sum of rupee:");
	int q,w,e,r,t,y,u,i;
	scanf("%d",&q);
	w=q/100;
	e=(q-w*100)/50;
	r=(q-w*100-e*50)/10;
	t=(q-w*100-e*50-r*10)/5;
	u=(q-w*100-e*50-r*10-t*5)/2;
	i=(q-w*100-e*50-r*10-t*5-u*2);
	y=w+e+r+t+u+i;
	printf("minimum nomber of notes you need to carry is %d\n",y);
	return 0;
}
