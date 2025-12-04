#include <stdio.h>

int main() {
 char name[100];
  printf("Enter file name: ");
   scanf("%s",name);

 FILE *f = fopen(name,"r");
  if(f==NULL){
   printf("File not found\n");
   return 1;
  }

 char ch;
  while((ch=fgetc(f))!=EOF){
     putchar(ch);
  }

 fclose(f);
 return 0;
}
