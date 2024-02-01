#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num ;
	num = 7;
	
	/*num += 12;
	num -= 5;
	num /= 2;
	num %= 2;
	printf("My number is %d",num);*/
	
	/*num &= 12 ;  AND
	printf("My number is %d",num);*/
	
	/*num |=12; OR
	printf("My number is %d",num);*/
	
	num ^=3; // XOR
	printf("My number is %d",num);
	
	return 0;
}
