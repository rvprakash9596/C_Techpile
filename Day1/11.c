#include<stdio.h>
int main()
{
	float num;
	printf("Enter the number to calculate cube :");
	scanf("%f",&num);
	float cube=num*num*num;
	printf("The cube of %f is : %f",num,cube);
	return 0;
}
