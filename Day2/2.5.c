#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the value of X axis : ");
	scanf("%d",&x);
	printf("Enter the value of Y axis : ");
	scanf("%d",&y);
	if(x>0 && y>0)
	{
		printf("The Coordinate points (%d,%d) lies in the 1st Qudrant.\n",x,y);
	}
	else if(x<0 && y>0)
	{
		printf("The Coordinate points (%d,%d) lies in the 2nd Qudrant.\n",x,y);
	}
	else if(x<0 && y<0)
	{
		printf("The Coordinate points (%d,%d) lies in the 3rd Qudrant.\n",x,y);
	}
	else if(x>0 && y<0)
	{
		printf("The Coordinate points (%d,%d) lies in the 4th Qudrant.\n",x,y);
	}
	else
	{
		printf("The Coordinate points (%d,%d) lies at the Origin.\n",x,y);
	}
	
}
