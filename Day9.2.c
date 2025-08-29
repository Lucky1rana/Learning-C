/* Write a program to find the roots of a quadratic equation and categorize them */

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r1,r2;
	printf(" Enter the value of a , b and c : ");
	scanf("%f %f %f", &a, &b, &c);
	d = (b*b)-4*a*c;
	if(d==0)
	{
		printf("roots are real and equal \n");
		r1 = -b/(2*a);
		r2 = -b/(2*a);
		printf("root1 is %f and root2 is %f\n",r1,r2);
		
	}
	else if(d>0)
	{
	
	printf(" roots are real and different \n");
	r1= (-b+sqrt(d))/(2*a);
	r2= (-b-sqrt(d))/(2*a);
	printf(" root1 is %f and root2 is %f\n",r1,r2);
	}
	else 
	{
		printf("roots are imaginary ");
	}
	return 0;
}
	
