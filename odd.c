//WAP to show first 50 odd number.
#include<stdio.h>
int main()
{
	int i,count=0;
	for(i=1;i<100;i++)
	{
		if(i%2==1)
		{
			count++;
			printf("%d\n",i);
		}
	}
	printf("Total odd number(1-100) is %d",count);
	return 0;
}


