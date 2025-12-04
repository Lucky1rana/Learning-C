#include <stdio.h>

int main() {
  char src[100], dst[100];
   printf("Enter source file name: ");
   scanf("%s",src);
    printf("Enter destination file name: ");
    scanf("%s",dst);

 FILE *s = fopen(src,"r");
 if(s==NULL){
   printf("Source missing\n");
   return 1;
 }

 FILE *d = fopen(dst,"w");
 if(d==NULL){
   printf("Destination error\n");
   return 1;
 }

 char c;
  while((c=fgetc(s))!=EOF){
     fputc(c,d);
  }

 fclose(s);
 fclose(d);

 printf("Copied\n");
 return 0;
}
