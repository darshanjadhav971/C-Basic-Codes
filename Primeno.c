#include<stdio.h>
void check()
{
	int p;
	printf("\nEnter Prime Number: ");
	scanf("%d",&p);
	if(p%2==0)
	{
		printf("\nNumber is Prime:");
	}
	else{
			printf("\nNumber is Not Prime:");
	}
}
void main()
{
	check();
}
