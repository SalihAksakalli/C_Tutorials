#include <stdio.h>
#include <stdlib.h>


int main()
{
	char myCharacter;
	printf("Enter a character:");
	scanf("%c",&myCharacter);
	
	if((myCharacter>='A') && (myCharacter<='A'))
	{
		printf("%c is an uppercase letter\n",myCharacter);
	}
	else if((myCharacter>= 'a') && (myCharacter<='z'))
	{
		printf("%c is a lowercase letter\n",myCharacter);
	}
	else
	{
		printf("%c is a not letter. Please enter a character",myCharacter);
	}
	
	
	return 0;
}
