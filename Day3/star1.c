#include<stdio.h>
int main()
{
	int i , j ,row,col;
	printf("Enter no of row : ");
	scanf("%d",&row);
	printf("Enter no of col : ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
