#include<stdio.h>
int main()
{
	int num;
	printf("Enter number :");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d is Even number",num);
	}
	else{
		printf("%d is Odd number",num);
	}
}
