#include <stdio.h>

int main() {
 FILE *in = fopen("input.txt","r");
  if(in==NULL){
   printf("No input\n");
   return 1;
  }

 FILE *out = fopen("output.txt","w");
  if(out==NULL){
   printf("No output\n");
   return 1;
  }

 char ch;
  while((ch=fgetc(in))!=EOF){
    if(ch>='a' && ch<='z') ch = ch - 32;
     fputc(ch,out);
  }

 fclose(in);
 fclose(out);
 return 0;
}
