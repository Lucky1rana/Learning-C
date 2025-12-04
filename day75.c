#include <stdio.h>

int main() {
 char name[100];
  printf("Enter file name: ");
   scanf("%s",name);

 FILE *f = fopen(name,"a");
 if(f==NULL){
  printf("Can't open\n");
  return 1;
 }

 char text[200];
  printf("Enter text to add: ");
   getchar();
   fgets(text,200,stdin);

 fputs(text,f);

 fclose(f);
 printf("Done\n");
 return 0;
}

