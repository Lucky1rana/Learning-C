/*Reverse each word in a sentence without changing the word order.*/

#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) 
{
    char temp;
    while (start < end) 
	{
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() 
{
    char str[200];
    int i, start = 0, len;

    printf("Enter a sentence: ");
    gets(str);  

    len = strlen(str);

    for (i = 0; i <= len; i++) 
	{
        if (str[i] == ' ' || str[i] == '\0') 
		{
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Reversed each word: %s\n", str);
    return 0;
}


