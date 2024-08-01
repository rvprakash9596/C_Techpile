#include<stdio.h>
int main()
{
	//Converting kilometer to miles.
	float km,miles;
	printf("Enter Kilometer :");
	scanf("%f",&km);
	miles=km/1.6;
	printf("%.2f Miles",miles);
}
