#include <stdio.h>

int main() {
 FILE *f = fopen("input.txt","r");
  if(f==NULL){
   printf("Can't open\n");
   return 1;
  }

 int v=0, c=0;
 char ch;

 while((ch=fgetc(f))!=EOF){
   if(ch>='A' && ch<='Z') ch = ch + 32;

   if(ch>='a' && ch<='z'){
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
         v++;
      else
         c++;
   }
 }

 fclose(f);

 printf("Vowels: %d\n",v);
 printf("Consonants: %d\n",c);

 return 0;
}
