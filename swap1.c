#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter 1st number :");
	scanf("%d",&x);
	printf("Enter 2nd number :");
	scanf("%d",&y);
	printf("Before swapping the vale of x is %d and the value of y is %d",x,y);	
	//using third variable
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("\n After swapping the value of x is %d and the value of y is %d",x,y);
}
