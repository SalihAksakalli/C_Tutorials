#include <stdio.h>
#include <stdlib.h>


int main()
{
		// Kullanýcýdan alýnan üç sayýnýn em büyüðünü ve en küçüðünü koþullu ifadelerle tespit eden program 
	
	int num1,num2,num3;
	
	printf("enter three number : ");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	
	if(num1 > num2)
	{
		printf(" %d  %d 'den daha buyuktur.\n",num1,num2);
		if(num1 > num3)
		{
			printf("Sayi1 girdiginiz diger sayilardan daha buyuktur.");
		}
		else
		{
				printf("Girdiginiz en buyuk sayi %d 'dur.\n",num3);
				printf("Girdiginiz en kucuk sayi %d 'dur.",num2);
		}
		}
	else if(num2 > num1)
	{
		printf(" %d  %d'den daha buyuktur.\n",num2,num1);
			if(num2 > num3)
			{
				printf("Sayi2 girdiginiz diger sayilardan daha buyuktur.");
			}
			else
			{
				printf("Girdiginiz en buyuk sayi %d 'dur.\n",num3);
				printf("Girdiginiz en kucuk sayi %d 'dur.",num1);
			}
	}
	
	
	
	
	
	
	
	
	return 0;
}
