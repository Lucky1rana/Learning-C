/*Write a program to find profit or loss percentage given cost price and selling price.*/



#include <stdio.h>
int main()
{
	float sp,cp,P,L,per;
	printf("Enter the cost price and selling price : ");
	scanf("%f%f",&cp,&sp);
	if(cp>sp)
	{
		L=cp-sp;
		per=(L/cp)*100;
		printf("The loss is %f\n",L);
		printf("The loss percentage is %f\n",per);
		
	}
	else if(sp>cp)
	{
		P=sp-cp;
		per=(P/cp)*100;
		printf("The profit is %f\n",P);
		printf("The profit percentage is %f\n",per);
	}
	else 
	{
		printf("No profit and no loss ");
	}
	return 0;
}
