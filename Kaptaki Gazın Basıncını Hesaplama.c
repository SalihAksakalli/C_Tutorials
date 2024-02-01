#include <stdio.h>
#include <stdlib.h>

/* 
 				kapalý kaptaki  gazýn basýnýcýný hesaplayan program 
 				basýnc = (mol sayýsý * R sabiti * sýcaklýk) / hacim 
				 															*/
 		
int main()
{
	float pressure, constantR;
	int  numberOfMoles, volume, heat; 
	constantR = 0.82;
	
	printf("Kabin hacmini giriniz : ");
	scanf("%d",&volume);
	
	printf("Mol sayisini giriniz :");
	scanf("%d",&numberOfMoles);	
	
	printf("Ortam sýcaklýðýný giriniz :");
	scanf("%d",&heat);	
	
	pressure = (numberOfMoles * constantR * heat) / volume ;
	
	printf("Basincimiz : %f",pressure);
	
	
	
	
	
	
	return 0;
}
