/*Replace spaces with hyphens in a string.*/


#include <stdio.h>

int main() 
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str); // simple for beginners (but unsafe in real use)

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == ' ') 
		{
            str[i] = '-';  // replace space with hyphen
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}


