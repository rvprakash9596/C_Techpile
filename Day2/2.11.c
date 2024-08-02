#include<stdio.h>
int main()
{
	int mn;
	printf("Enter Month Number : ");
	scanf("%d",&mn);
	
	//Method 1: Using Ladder if statement
	
//	if(mn==1)
//	{
//		printf("January");
//	}
//	else if(mn==2)
//	{
//		printf("February");
//	}
//	else if(mn==3)
//	{
//		printf("March");
//	}
//	else if(mn==4)
//	{
//		printf("April");
//	}
//	else if(mn==5)
//	{
//		printf("May");
//	}
//	else if(mn==6)
//	{
//		printf("June");
//	}
//	else if(mn==7)
//	{
//		printf("July");
//	}
//	else if(mn==8)
//	{
//		printf("August");
//	}
//	else if(mn==9)
//	{
//		printf("September");
//	}
//	else if(mn==10)
//	{
//		printf("October");
//	}
//	else if(mn==11)
//	{
//		printf("November");
//	}
//	else if(mn==12)
//	{
//		printf("December");
//	}
//	else
//	{
//		printf("Sorry ! , Please enter number between 1 to 12");
//	}

	//Method 2:using switch case statement.

	switch(mn)
	{
		case 1:
			printf("January\n");
			break;
		case 2:
			printf("Febrauary\n");
			break;
		case 3:
			printf("March\n");
			break;
		case 4:
			printf("April\n");
			break;
		case 5:
			printf("May\n");
			break;
		case 6:
			printf("June\n");
			break;
		case 7:
			printf("July\n");
			break;
		case 8:
			printf("August\n");
			break;
		case 9:
			printf("September\n");
			break;
		case 10:
			printf("October\n");
			break;
		case 11:
			printf("November\n");
			break;
		case 12:
			printf("December\n");
			break;
		default:
			printf("Sorry ! Please input a valid month number.......");		
	}
}
