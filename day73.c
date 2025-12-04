#include <stdio.h>

int main() {
 FILE *file = fopen("input.txt","r");
 if(file==NULL){
   printf("File not opened\n");
   return 1;
 }

 int chars=0, words=0, lines=0;
 int inWord=0;
 char ch;

 while((ch=fgetc(file))!=EOF){
  chars++;
  if(ch=='\n') lines++;
  if(ch==' ' || ch=='\n' || ch=='\t'){
      inWord=0;
  } else {
      if(inWord==0){
        words++;
        inWord=1;
      }
  }
 }

 if(chars>0 && ch!='\n') lines++;

 fclose(file);

 printf("Characters: %d\n",chars);
 printf("Words: %d\n",words);
 printf("Lines: %d\n",lines);

 return 0;
}

