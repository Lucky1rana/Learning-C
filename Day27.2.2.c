/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   * */
   
   #include<stdio.h>
int main()
{
	int i;
    printf("   ");
	for(i=0;i<1;i++)
	{
	printf("*");
	}
	printf("\n");
	printf("  ");
	for(i=0;i<3;i++)
	{
	printf("*");
	}
	printf("\n");
	printf(" ");
	for(i=0;i<5;i++)
	{
	printf("*");
	}
	printf("\n");
	for(i=0;i<7;i++)
	{
	printf("*");
	}
	printf("\n");
	printf(" ");
	for(i=0;i<5;i++)
	{
	printf("*");
	}
	printf("\n");
	printf("  ");
	for(i=0;i<3;i++)
	{
	printf("*");
	}
	printf("\n");
	printf("   ");
	for(i=0;i<1;i++)
	{
	printf("*");
	}
	printf("\n");
	
	return 0;
}
