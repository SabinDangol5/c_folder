#include<stdio.h>
int main()
{
	double pincode;
	double pin;
	int i=1;
	int option;
	double balance=2000,deposite_money,withdraw_money,remain_balance,total_balance;
	char input;

	printf("Welcom to Sabin Bank Limited:\n");
	start:
	printf("\n");
	printf("Enter your pincode:\n");
	scanf("%lf",&pincode);
	if((pincode==9898))
	{
		printf("You succesfully enter your pincode:");
		printf("\n");
	}
	else{
//		for(i=0;i<=3;i++)
//		{
		printf("\n");
		printf("Pincode is incorrect:%d Time",i);
		printf("\n");
		i++;
		if(i<=3)
		{
			goto start;
		}
		else{
			printf("\n");
			printf("Try again after 24 hours:");
			exit(0);
		}
	}

		do{
			printf("\n");
			printf("menu:");
			printf("\n\n");
			printf("1. Deposite Money:");
			printf("\n");
			printf("2. Withdraw Money:");
			printf("\n");
			printf("3. Display Account Information:");
			printf("\n");
			printf("4. Show Balance:");
			printf("\n");
			printf("5. Exit:");
			printf("\n");
//			printf("which operation did you want to operate ?");
//			printf("\n");
			printf("Choose an option from menu");
			printf("\n");
			scanf("%d",&option);
			switch(option){
				case 1:
					printf("How many money you want to deposite:\n");
					scanf("%lf",&deposite_money);
					total_balance=balance+deposite_money;
					printf("Total Balance after deposite:%lf",total_balance);
					break;
				case 2:
						printf("How many money you want to withdraw:\n");
						scanf("%lf",&withdraw_money);
						if(balance>withdraw_money)
						{
							printf("Withdraw Succesfully");
							printf("\n");
							remain_balance=balance-withdraw_money;
							printf("remainding balance are:%lf",remain_balance);
							
						}
						else
						{
							printf("Insufficient Balance");
							printf("\n");
							printf("Your current balance is:%lf which is less than you withdraw amount",balance);
						}
						break;
				case 3:
					printf("Your information are:");
					printf("\n");
					printf("Account type: Saving Account");
					printf("\n");
					printf("Account Number : 00897650");
					printf("\n");
					printf("Name: Sabin Dangol");
					printf("\n");
					printf("Email : Sabindangol07@gmail.com");
					printf("\n");
					printf("Address : Tokha, Kathmandu");
					printf("\n");
					break;
				case 4:
					printf("Account Number : 00897650");
					printf("\n");
					printf("Balance : %lf",balance);
					printf("\n");
					break;
				case 5:
						exit(0);
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
