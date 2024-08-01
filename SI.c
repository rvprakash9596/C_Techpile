//WAP to find simple interest only if principle amount,rate and time is greater that 0.
#include<stdio.h>
int main()
{
	int pa;
	float rate,time;
	printf("Enter principle amount,rate,time to calculate SI:");
	scanf("%d %f %f",&pa,&rate,&time);
	if(pa>0 && rate>0 && time>0 )
	{
		float op=(pa*rate*time)/100;
		printf("SI =%.2f",op);
	}
}
