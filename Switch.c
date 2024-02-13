#include <stdio.h>
#include <stdlib.h>


int main() 
{
	/*
	 int day=3;
    switch(day){
        case 1:printf("Monday\n");
                break;
        case 2:printf("Tuesday\n");
                break;
        case 3:printf("Wednesday\n");
                break;
        case 4:printf("Thursday\n");
                break;
        case 5:printf("Friday\n");
                break;
        case 6:printf("Saturday\n");
                break;
        case 7:printf("Sunday\n");
                break;
        default:printf("There is no such a day\n");
                break;
	*/
	
	
	/*
	 		x==7 ? 19 . (y==12?10:-90);
	
	*/
	
	int x,y,z;
	x = 3;
	y = 12;
	
	switch(x)
	{
		case 7: z=19;
		break;
		default:switch(y)
		{
			case 12:z=10;break;
			default: z = -90;
		}
	}
	
	printf("%d \n",z);
	return 0;
}
