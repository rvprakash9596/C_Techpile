#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter 1st number : ");
	scanf("%d",&num1);
	
	printf("Enter 2nd number : ");
	scanf("%d",&num2);
	
	if(num1==num2)
	{
		printf("Both %d and %d are equal.",num1,num2);
	}
	else
	{
		printf("Both %d and %d are not equal.",num1,num2);
	}
}
