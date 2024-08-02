// C program to create calculator using switch statement...
#include<stdio.h>
int main()
{
	
	//Method 1
	
//	char opr;
//	printf("Select an Operator (+,-,*,/) : ");
//	scanf("%c",&opr);
//	
//	double a,b;
//	printf("Enter 1st Operand : ");
//	scanf("%lf",&a);
//	printf("Enter 2nd Operand : ");
//	scanf("%lf",&b);
//	
//	switch(opr)
//	{
//		case '+':
//			printf("%.1lf + %.1lf = %.1lf",a,b,a+b);
//			break;
//		case '-':
//			printf("%.1lf - %.1lf = %.1lf",a,b,a-b);
//			break;
//		case '*':
//			printf("%.1lf * %.1lf = %.1lf",a,b,a*b);
//			break;
//		case '/':
//			printf("%.1lf / %.1lf = %.1lf",a,b,a/b);
//			break;
//
//			printf("Sorry! Please select only given operator");
//	}

		//Method 2
		
		int a,b,choice;
		printf("Enter 1st Number :");
		scanf("%d",&a);
		printf("Enter 2nd Number :");
		scanf("%d",&b);
		printf("Select your Choice :");
		printf(" 1.Add 2.Subtract 3.Multiply 4.Divide\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("\nAddition is : %d",a+b);
			break;
			case 2:
			printf("\nSubtraction is : %d",a-b);
			break;
			case 3:
			printf("\nMultiplicatin is : %d",a*b);
			break;
			case 4:
			printf("\nDivision is : %d",a/b);
			break;
		}
		
}
