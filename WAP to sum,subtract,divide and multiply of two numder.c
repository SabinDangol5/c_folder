#include<stdio.h>
int main()
{
	double firstNo,secondNo,subtract,sum,divide,multiply;
	printf("Enter two number:");
	scanf("%lf%lf",&firstNo,&secondNo);
	sum= firstNo + secondNo;
	subtract= firstNo - secondNo;
	divide=firstNo/secondNo;
	multiply=firstNo * secondNo;
	printf("\n Sum of two number:%lf",sum);
	printf("\n subtract of two number:%lf",subtract);
	printf("\n Divide of two number:%lf",divide);
	printf("\n Multiply of two number:%lf",multiply);
	return 0;
}
