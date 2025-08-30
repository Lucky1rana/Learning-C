/*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

#include<stdio.h>
int main()
{
	float len , br, ar,peri;
	printf("enter the length and breadth of rectangle  ");
	scanf("%f%f",&len,&br);
	ar = len*br;
	peri = 2*(len+br);
	printf("the area of rectangle is %f\n",ar);
	printf("the perimeter of rectangle is %f\n",peri);
	return 0;
}
