/*Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters.
 Print the length as output.*/


#include <stdio.h>
#include <string.h>

int main() 
{
    char s[100];
    int lastIndex[256]; 
    int maxLen = 0, start = 0 , i , end = 0 ;

    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);

    
    for (i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (end = 0; end < n; end++) 
	{
       
        if (lastIndex[(unsigned char)s[end]] >= start)
            start = lastIndex[(unsigned char)s[end]] + 1;

        
        lastIndex[(unsigned char)s[end]] = end;

        
        int currLen = end - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}

