#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter 1st number: ");
	scanf("%f",&a);
	printf("Enter 2nd number: ");
	scanf("%f",&b);
	printf("Enter 3rd number: ");
	scanf("%f",&c);
	float avg=(a+b+c)/3;
	printf("The average of %f,%f and %f is : %f",a,b,c,avg);
	return 0;
}
