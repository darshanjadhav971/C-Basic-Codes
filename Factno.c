#include<stdio.h>
int main()
{
	int i,m,fact=1;
	
	printf("Enter a Factorial Number:");
	scanf("%d",&m);
	
	for(i=1;i<=m;i--)
	{
		fact = fact * i;
		
	}
		printf(": = %d",fact);
	return 0;
	
}
