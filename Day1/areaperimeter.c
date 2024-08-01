#include<stdio.h>
int main()
{
	float l,w,p,a;
	printf("Enter the Length of the Rectangle :");
	scanf("%f",&l);
	printf("Enter the Width of the Rectangle :");
	scanf("%f",&w);
	
	p=2*(l+w);
	printf("Perimeter of the Rectangle:%0.4f\n",p);
	a=l*w;
	printf("Area of the Rectangle : %0.4f\n",a);
}
