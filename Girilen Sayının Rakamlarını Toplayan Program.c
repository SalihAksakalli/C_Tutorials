#include <stdio.h>
#include <stdlib.h>
	/*kullan�c�dan 4 basmakl� bir say� al�p bu say�n�n rakamlar�n� toplayan program */
	
int main()
{
	int num, bolum,kalan,sum;
	sum = 0;
	
	printf("4 Basmakli bir sayi giriniz :");
	scanf("%d",&num);
	
	//4.basama�� bul
	
	bolum = num / 1000; //1
	sum += bolum; // 0+1
	kalan = num % 1000;//453
	
	//3.basama�� bul
	
	bolum = kalan/100; 
	sum += bolum;
	kalan = num % 100;
	
	//2.basama�� bul
	
	bolum = kalan/10;
	sum += bolum;
	kalan = num % 10;
	
	//1.basama�� bul
	sum += kalan;
	
	printf("Sonuc : %d",sum);
	
	
	
	
	
	
	return 0;
}
