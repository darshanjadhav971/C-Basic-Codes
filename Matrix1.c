#include<stdio.h>
int main()
{
	int a[2][2],i,j;
	printf("\033[1;31m");
	printf("\nEnter 2x2 Matrix: \n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe 2x2 Matrix: \n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
