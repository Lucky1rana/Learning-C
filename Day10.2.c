/*Write a program to display the day of the week based on a number (1–7) using switch-case.*/


#include <stdio.h>
int main()
{
	int number;
	printf("Enter the number between 1-7 : ");
	scanf("%d",&number);
	
	switch(number)
	{
	
	
	case 1:
		printf("Monday");
		break;
		
	case 2:
		printf("Tuesday");
		break;
			
	case 3:
		printf("Wednesday");
		break;
					
	case 4:
		printf("Thursday");
		break;
					
	case 5:
		printf("Friday");
		break;
					
	case 6:
		printf("Saturday");
		break;
					
	case 7:
		printf("Sunday");
		break;
		
	default:
	printf("invalid number");
		break;
	}
	return 0;
}
