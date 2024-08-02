#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number to check for even/odd : ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d is even number",num);
	}
	else
	{
		printf("%d is odd number",num);
	}
}
