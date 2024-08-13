#include<stdio.h>
int main()
{
	double firstNumber,secondNumber,sum,difference,multiply,divide;
	int option;
	char input;
	do{
	printf("\Menu");
	printf("\n");
	printf("1. Adittion");
	printf("\n");
	printf("2. subtraction");
	printf("\n");
	printf("3. Multiplication");
	printf("\n");
	printf("4. Division");
	printf("\n");
	
	printf("Enter first number");
	printf("\n");
	scanf("%lf",&firstNumber);
	printf("\n");
	printf("Enter second number");
	printf("\n");
	scanf("%lf",&secondNumber);
	printf("\n");
	printf("which operation did you want to operate ?");
	printf("\n");
	printf("Choose an option from menu");
	printf("\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			sum = firstNumber + secondNumber;
			printf("Addition = %lf",sum);
			printf("\n");
			break;
		case 2:	
			difference= firstNumber - secondNumber;
			printf("Subtraction = %lf",difference);
			printf("\n");
			break;
		case 3:		
			multiply = firstNumber * secondNumber;
			printf("Multiplication = %lf",multiply);
			printf("\n");
			break;
		case 4:
			divide = firstNumber / secondNumber;
			printf("Division = %lf",divide);
			printf("\n");
			break;
		default:
			printf("\n");
			printf("option not available");
		}
		printf("\n");
		printf("Do you want to continue ??");
		printf("\n");
		printf("Press y for continue and any other key for exit...");
		printf("\n");
		scanf(" %c",&input);

		}while(input == 'y' || input == 'Y');
		return 0;	
		
}


