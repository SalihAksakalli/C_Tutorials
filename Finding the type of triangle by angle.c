#include <stdio.h>
#include <stdlib.h>
/*

Bir üçgenin açýlariný girdi olarak alan ve bu üçgenin eþ kenar, 
ikiz kenar veya çeþit kenar olup olmadýðýný belirleyen programý yazalým

Not : Üçgenin tüm açýlarý 60 is eþkenar, herhangi iki açý birbirine eþit ise ikiz kenar, 
diðer durumlarda ise çeþit kenar üçgendir.



									English 

Taking the angles of a triangle as input and the equilateral side of this triangle,
Let's write a program that determines whether there is an isosceles or a kind of edge.

Note: All angles of a triangle are 60 degrees is equilateral, any two angles containing equal are isosceles,
Other products are side triangles.

*/




int main()
{
    int angle1, angle2, angle3;
    
    printf("Please enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    if(angle1+angle2+angle3 != 180){
    	printf("These angles do not form triangles\n");
	}
    else
    {    
	    if (angle1 == angle2 && angle2 == angle3 && angle1 == angle3)
	    {
	        printf("The triangle you entered has three equal angles, it is an equilateral triangle.");
	    }
	    else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3)
	    {
	        printf("The triangle you entered has two equal angles, it is an isosceles triangle.");  
	    }
	    else
	    {
	        printf("The triangle you entered has three different angles, it is a scalene triangle.");  
	    }
    }
    
    return 0;
}
