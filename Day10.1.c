/*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/


#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter the sides of a triangle : ");
	scanf("%d %d %d",&s1 ,&s2 ,&s3);
	if(s1==s2&&s2==s3)
	{
		printf(" It is an Equilateral Triangle");
	}
	else if (s1==s2&&s2!=s3)
	{
		printf("It is a Isosceles Triangle");
	}
	else
	{
		printf("It ia Scalene Triangle");
	}
}
