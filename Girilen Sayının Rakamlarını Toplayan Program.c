#include <stdio.h>
#include <stdlib.h>
	/*kullanýcýdan 4 basmaklý bir sayý alýp bu sayýnýn rakamlarýný toplayan program */
	
int main()
{
	int num, bolum,kalan,sum;
	sum = 0;
	
	printf("4 Basmakli bir sayi giriniz :");
	scanf("%d",&num);
	
	//4.basamaðý bul
	
	bolum = num / 1000; //1
	sum += bolum; // 0+1
	kalan = num % 1000;//453
	
	//3.basamaðý bul
	
	bolum = kalan/100; 
	sum += bolum;
	kalan = num % 100;
	
	//2.basamaðý bul
	
	bolum = kalan/10;
	sum += bolum;
	kalan = num % 10;
	
	//1.basamaðý bul
	sum += kalan;
	
	printf("Sonuc : %d",sum);
	
	
	
	
	
	
	return 0;
}
