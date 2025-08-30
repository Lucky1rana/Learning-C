/*Write a program to convert temperature from Celsius to Fahrenheit*/


#include<stdio.h>
int main()
{
	float feh , cel ;
	printf("enter the temperature in celcius ");
	scanf("%f",&cel);
	feh = (cel*(9/5))+32;
	printf("the temperature in fehranheit is %f",feh);
	return 0;
}
