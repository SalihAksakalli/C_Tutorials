#include <stdio.h>
#include <stdlib.h>

/*
	A GSM operator has set the cost of a phone call for up to 4 minutes at 0.30 Turkish liras.
If the duration of the call exceeds 4 minutes, they charge an additional 0.70 Turkish liras for each minute thereafter.
Write a C program that takes the duration of the phone call in minutes as input and calculates the cost of the call.


*/

int main() 
{	
	float talkTime,fee;
	
	printf("Phone Talk Time :");
	scanf("%f",&talkTime);
	
	if(talkTime <= 4.0)
	{
		fee = 0.30;
	}
	else
	{
		fee = 0.30 + (talkTime - 4) * 0.07;	
	}
	printf("Fee : %.3f TL \n",fee);
	
	return 0;
}
