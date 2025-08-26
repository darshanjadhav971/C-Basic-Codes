#include<stdio.h>
int main()
{
	int a[4],i,sum=0;
	printf("Enter the 4 Number:");
	for(i=0;i<=3;i++)
	{
		scanf("\n %d",&a[i]);
	}
	
	printf("\n The Array value are");
	for(i=0;i<=3;i++)
	{
		printf("\n %d",a[i]);
		sum=sum+a[i];
	}
		printf("\n sum= %d",sum);
	return 0;
}


