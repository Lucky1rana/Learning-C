/*Write a program to find the LCM of two numbers*/


#include <stdio.h>
int main() 
{
    int num1, num2, i , lcm;  
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

  for (i=1;i<=num1*num2;i++) 
  {
  	if(i%num1==0&&i%num2==0)
	  {
  	   printf("the lcm is %d",i);
  	   break;
  
      }
   } 
    return 0;
}

