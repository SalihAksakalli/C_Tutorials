#include <stdio.h>
#include <stdlib.h>

// Girilen say�n�n karek�k�n�n tam say� olup olmad�g�n� bulan program

int main()
{
	int number,squareRoot;
	
	printf("Enter a positive number:");
	scanf("%d",&number);
	
	if(number < 0)
	{
		printf("Please do not do this \n");
	}
	else
	{
		squareRoot = sqrt(number);
		if(squareRoot * squareRoot == number)
		{
			printf("square root of %d is an integer \n");
			printf("square root of %d\n",squareRoot);
		}
		else
		{
			printf("no it is not  \n");
		}
	}
	
		
	return 0;
}
