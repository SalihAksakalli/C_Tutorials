#include <stdio.h>
#include <stdlib.h>


int main() 
{	
	
	int sayi,onlar,birler ;
	
	
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	onlar = sayi / 10 ;
	birler = sayi % 10 ;
	
	printf("Girdiginiz sayi %d dir . Bu sayinin onlar basamagi %d birler basamagi %d ' dir",sayi,onlar,birler);
	
	return 0;
}
