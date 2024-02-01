#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y;
	x = 7 ;
	y = 3 ;
	
	/*	printf("Result x = y : %d",x==y);
		printf("\n\n");
		printf("Result x = y : %d",x!=y); */
		
	/*	printf("Result x < y : %d",x<y);
		printf("\n");
		printf("x : %d y : %d",x,y);
		printf("\n\n");
		printf("Result x > y : %d",x>y);
		printf("\n");
		printf("x : %d y : %d",x,y);   */
	
	
	printf("Result : %d", (x>5 && x<10) );
	printf("\n");  
	printf("Result : %d", (x>5 && x<y) );   
	printf("\n");  
	
	printf("Result : %d", (x>5 || x<y) );
	printf("\n");
	printf("Result : %d", (x<5 || x>y) );
	printf("\n");   
	printf("Result : %d", (x<5 || x<y) );   
	printf("\n");
	
	printf("Result : %d", !(x>5 && x<10));  		
	
	
	
	
	return 0;
}
