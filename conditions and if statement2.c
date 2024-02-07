#include <stdio.h>
#include <stdlib.h>



int main()
{
	
	//Program that compares numbers received from the user

	int num1,num2 ;
	num1 = 0 ;
	num2 = 0;
	printf("Enter two number : ");
	scanf("%d %d",&num1,&num2);
	
	if(num1> num2)
	{
		printf("Number1 is greater than Number2 variable\n");
	}
	else if(num1 < num2)
	{
		printf("Number2 is greater than Number1 variable\n");
	}
	else
	{
		printf("Number1 is  equal Number1 variable\n");
	}
	
	
	return 0;
}
