#include<stdio.h>
struct Student
{
	int id;
	char name[20];
	float fees;
};
	struct Student D;
	int main()
	{
		printf("\nEnter the ID: ");
		scanf("%d",&D.id);
	
		printf("\nEnter the Name: ");
		scanf("%s",&D.name);
	
		printf("\nEnter the Fees: ");
		scanf("%f",&D.fees);
	
		printf("\nID %d",D.id);
		printf("\nName %s",D.name);
		printf("\nFees %f",D.fees);
	
		return 0;
	}
