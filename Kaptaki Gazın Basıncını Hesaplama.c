#include <stdio.h>
#include <stdlib.h>

/* 
 				kapal� kaptaki  gaz�n bas�n�c�n� hesaplayan program 
 				bas�nc = (mol say�s� * R sabiti * s�cakl�k) / hacim 
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
	
	printf("Ortam s�cakl���n� giriniz :");
	scanf("%d",&heat);	
	
	pressure = (numberOfMoles * constantR * heat) / volume ;
	
	printf("Basincimiz : %f",pressure);
	
	
	
	
	
	
	return 0;
}
