#include<stdio.h>
int main()
{
	int a,b,c,op;
	printf("****CALCULATOR****\n");
	printf("\n1. ADDITION \n2. SUBSTANCTION \n3. DIVISION \n4. MULTIFICATION: \n");
	printf("Enter the operation Number: \n");
	scanf("%d",&op);
	printf("Enter the 2 Number: \n");
	scanf("%d %d",&a,&b);
	
	switch(op)
	{
		case 1:
			c=a+b;
			printf("\nADDITION:%d",c);
			break;
			
			case 2:
				c=a-b;
				printf("\nSUBTRACTION:%d",c);
				break;
				
			case 3:
				c=a/b;
				printf("\nDIVISION:%d",c);
				break;
				
			case 4:
				c=a*b;
				printf("\nMULTIFICATION:%d",c);
				break;
			
			default:
				printf("\nInvalid Operation Number:%d");
				break;			
	}
	return 0;
}
