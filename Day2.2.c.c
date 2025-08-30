/*Write a program to calculate the area and circumference of a circle given its radius.*/



#include<stdio.h>
int main()
{
	float rad , ar , cir;
	printf("enter the radius ");
	scanf("%f",&rad);
	ar = 3.14* rad*rad;
	cir = 2*3.14*rad;
	printf("the area of circle is %f\n",ar);
	printf("the circumfrence of circle is %f\n",cir);
	return 0;
}
