#include <stdio.h>
#include <stdlib.h>


int main() 
{
 	int number ;
 	
 	printf("Enter a number:");
 	scanf("%d",&number);
 	
 	if(number>0)
	 {
	 	if(number == 100)
	 	{
	 		printf("it is incredible");
		 }
		 else 
		{
		printf("The value is a positive number \n \n");
		printf("it is not incredible");
		}
	 }
	 else if(number<0)
	 {
	 	printf("The value is a negative number \n\n");
	 }else
	
	{
		printf("Your number is 0 \n\n");
	}
	
	
	// (num > 70) ? printf("you passed the exam ") : printf("You failded the exam ) ;
	return 0;
}
