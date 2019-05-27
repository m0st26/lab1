#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main()	
{
	float x = 5;
	float fx =	(float) 1/4-1/4*sin(5/2*3.14-8*x);
	printf("x =  %f\nf(x) = %f", x, fx);
	printf("\nEnter x:\n");
	scanf("%f", &x);
	fx = (double) 1/4-1/4*sin(5/2*3.14-8*x);
	printf("x =  %f\nf(x) = %f", x, fx);
	system("pause");
}	
