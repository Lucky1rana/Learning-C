/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/


#include<stdio.h>
int main()
{
	int a,b,result;
    char op;
    printf("Enter the two number and a operator (+ , / , - , * , %) : ");
    scanf("%d %d %c",&a,&b,&op);
     
     switch(op)
     {
     	
     	case'+':
     	result=a+b;
     	printf("%d\n",result);
     	break;
     		
     	case'-':
     	result=a-b;
     	printf("%d\n",result);
     	break;
     	
     	case'*':
     	result=a*b;
     	printf("%d\n",result);
     	break;
     	
     	case'/':
     	if(b!=0)
     	{
		 
     	result=a/b;
     	printf("%d\n",result);
        }
     	else
     	printf("error : division by zero\n");
     	break;
     	
     	case'%':
     	if(b!=0)
     	{
		 
     	result=a%b;
     	printf("%d\n",result);
        }
     	else
     	printf("error : modulo by zero\n");
     	break;
     	
     	default:
     		printf("invalid operator\n");
     		
	 }
	 return 0;
}


