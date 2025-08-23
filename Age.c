#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("You Are Eligible For Driving \n");
	}
	else{
		printf("You Are Not Eligible for Driving \n");
		printf("You must be at least 18 years old \n");
	}
	return 0;
}
