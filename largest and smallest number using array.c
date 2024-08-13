#include<stdio.h>
int main()
{
	int arr[5]={44,3,92,1,23};
	int i,largest,smallest;
	largest=smallest=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
		
		if(arr[i]<smallest)
		{
			smallest=arr[i];	
		}
	}
		printf("\n Largest element :%d",largest);
		printf("\n Smallest element :%d",smallest);
	
		return 0;
	
	}
	
