#include<stdio.h>
int main()
{
	int x,y,prod;
	printf("Enter 1st integer : ");
	scanf("%d",&x);
	printf("Enter 2nd integer : ");
	scanf("%d",&y);
	prod=x*y;
	printf("The product of %d * %d is : %d",x,y,prod);
	return 0;
}
