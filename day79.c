#include <stdio.h>

int main() {
 FILE *f = fopen("numbers.txt","r");
  if(f==NULL){
   printf("Not opening\n");
   return 1;
  }

 int x, sum=0, cnt=0;

 while(fscanf(f,"%d",&x)==1){
   sum += x;
   cnt++;
 }

 fclose(f);

 if(cnt==0){
  printf("No numbers\n");
  return 0;
 }

 float avg = (float)sum / cnt;

 printf("Sum = %d\n",sum);
 printf("Avg = %.2f\n",avg);

 return 0;
}
