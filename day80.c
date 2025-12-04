#include <stdio.h>

int main() {
 FILE *f = fopen("students.txt","w");
 if(f==NULL){ printf("err\n"); return 1; }

 int n,i,roll; char name[50]; int marks;

 printf("How many: "); scanf("%d",&n);

 for(i=0;i<n;i++){
   printf("Name Roll Marks: ");
   scanf("%s %d %d",name,&roll,&marks);
   fprintf(f,"%s %d %d\n",name,roll,marks);
 }

 fclose(f);

 f = fopen("students.txt","r");
 if(f==NULL){ printf("read err\n"); return 1; }

 printf("\nRecords:\n");

 while(fscanf(f,"%s %d %d",name,&roll,&marks)==1){
   printf("%s %d %d\n",name,roll,marks);
 }

 fclose(f);
 return 0;
}
