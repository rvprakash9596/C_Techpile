#include<stdio.h>
int main()
{
	float temp;
	printf("Please enter the Temperature in Degree Celsius : ");
	scanf("%f",&temp);
	if(temp<0)
	{
		printf("Freezing Weather");
	}
	else if(temp>0 && temp<10)
	{
		printf("Very Cold Weather");
	}
	else
	{
		printf("Not Available");
	}
}
