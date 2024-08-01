#include<stdio.h>
int main()
{
	float amt,rate,time,interest;
	printf("Enter the principle amount to calculate the Simple Interest :");
	scanf("%f",&amt);
	printf("Enter Interest rate :");
	scanf("%f",&rate);
	printf("Enter time period in years :");
	scanf("%f",&time);
	interest=(amt*rate*time)/100;
	printf("Simple Interest is : %.2f",interest);
	printf("\nTotal Balance with principle amount is : %.2f",interest+amt);
	return 0;
}
