#include<stdio.h>
int main()
{
	int roll_no,age;
	char name[50],address[50],email[50];
	char gender;
	printf("Enter you Roll Number:");
	scanf("%d",&roll_no);
	printf("\n Enter you Name:");
	scanf("%s",&name);
	printf("\n Enter you age:");
	scanf("%d",&age);
	printf("\n Enter you Email:");
	scanf("%s",&email);
	printf("\n Enter you Gender: ");
	scanf(" %c",&gender);
	printf("\n Enter you address:");
	scanf("%s",&address);
	printf("\n Your details are:");
	printf("\n Roll Number:%d",roll_no);
	printf("\n Name:%s",name);
	printf("\n Age:%d",age);
	printf("\n Email:%s",email);
	printf("\n Gender:%c",gender);
	printf("\n Address:%s",address);
	return 0;
}
