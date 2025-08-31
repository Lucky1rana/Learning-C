/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/

#include<stdio.h>
int main()
{
	int sec,hr,min,Rsec;
	printf("enter the time in seconds :");
	scanf("%d",&sec);
	hr=sec/3600;
	min=(sec%3600)/60;
	Rsec=sec%60;
	printf("the time is %d:%d:%d",hr,min,Rsec);
	return 0;
}


