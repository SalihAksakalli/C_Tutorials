#include <stdio.h>
#include <stdlib.h>
/*
	Birim fiyat ve abone ücreti enflasyonla degisir
	Fatura miktarý  = Harcanan Elektrik * birim fiyat + abone ücreti 
																				*/

int main()
{	
	float odenecekFatura,eskiBirimFiyat,yeniBirimFiyat;
	float enflasyon,eskiAboneUcreti,yeniABoneUCreti;
	int yeniOkuma,eskiOkuma,toplamHarcananElektrik;
	
	printf("Enflasyon oranini giriniz : ");
	scanf("%f",&enflasyon);
	
	printf("Onceki aya ait birim fiyati giriniz : ");
	scanf("%f",&eskiBirimFiyat);
	
	printf("Onceki aya ait abone ucretini giriniz : ");
	scanf("%f",&eskiAboneUcreti);
	
	printf("Onceki aya ait okuma degerini giriniz : ");
	scanf("%d",&eskiOkuma);
	
	printf("Bu aya  ait okuma degerini giriniz : ");
	scanf("%d",&yeniOkuma);
	
	toplamHarcananElektrik = yeniOkuma - eskiOkuma ;
	
	yeniBirimFiyat = eskiBirimFiyat * (1+enflasyon/100);
	yeniABoneUCreti =eskiAboneUcreti * (1+enflasyon/100);
	
	odenecekFatura = toplamHarcananElektrik	* yeniBirimFiyat + yeniABoneUCreti;
	
	printf("Odeyeceginiz Tutar :  %f\n\n",odenecekFatura);
	
	
	
	return 0;
}
