#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter the value of Celsius to calculate the Fahrenhit :");
	scanf("%f",&c);
	f=(1.8*c)+32;
	printf("The %.1f C =%.1f degree Fahrenhit ",c,f);
	return 0;
}
