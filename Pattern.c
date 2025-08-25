#include<stdio.h>
int main()
{	
	printf("\033[1;36m");
	int i,j,n=10;
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
		{
			if(i>=j)
				printf(" 1");
			else
				printf(" ");
		}
		printf("\n");
	}
}
