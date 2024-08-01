#include<stdio.h>
int main()
{
	int x;
	printf("Enter the number for which you want to print the square : ");
	scanf("%d",&x);
	int sq=x*x;
	printf("The square of the %d is : %d",x,sq);
	return 0;
}
