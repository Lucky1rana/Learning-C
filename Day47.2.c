/*Find the longest word in a sentence.*/


#include <stdio.h>

int main() 
{
    char str[200], longest[50], word[50];
    int i = 0, j = 0, maxLen = 0, curLen = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (1) 
	{
        if (str[i] != ' ' && str[i] != '\0') 
		{
            word[j++] = str[i];   
            curLen++;
        } else {
            word[j] = '\0';  

            if (curLen > maxLen) 
			{
                maxLen = curLen;
                int k;
                for (k = 0; k <= j; k++) 
				{
                    longest[k] = word[k];  
                }
            }

            
            j = 0;
            curLen = 0;
        }

        if (str[i] == '\0') break;
        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}

