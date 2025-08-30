/*Write a program to input a character and check whether it is a vowel or consonant using if–else.*/





#include<stdio.h>
int main()
{
	char V ;
	printf("enter the alphabet : ");
	scanf("%c",&V);
	if((V=='a')||(V=='e')||(V=='i')||(V=='o')||(V=='u')||(V=='A')||(V=='E')||(V=='I')||(V=='O')||(V=='U'))
	{
		printf("it is a vowel ");
		
	}
	else
	{
		printf("it is not a vowel");
	}

}
