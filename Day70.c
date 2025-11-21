/*Write a program to take a string input. Change it to sentence case.*/


#include <stdio.h>
#include <ctype.h>  

int main() {
    FILE *fp;
    char str[200];

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fputs(str, fp);
    fclose(fp);

  
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fgets(str, sizeof(str), fp);
    fclose(fp);


    int i = 0;
    int newWord = 1;  

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            newWord = 1; 
        } else {
            if (newWord == 1 && isalpha(str[i])) {
                str[i] = toupper(str[i]);
                newWord = 0;
            } else {
                str[i] = tolower(str[i]);
            }
        }
        i++;
    }

   
    printf("Output: %s", str);

    return 0;
}

