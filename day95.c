#include <stdio.h>

struct Student {
 char name[50];
 int roll;
 int marks;
};

struct Student top(struct Student s[], int n){
 int i, m = s[0].marks, idx = 0;
 for(i=1;i<n;i++){
   if(s[i].marks > m){
     m = s[i].marks;
     idx = i;
   }
 }
 return s[idx];
}

int main() {
 struct Student a[5], t;
 int i;

 for(i=0;i<5;i++){
   printf("Name Roll Marks: ");
   scanf("%s %d %d", a[i].name, &a[i].roll, &a[i].marks);
 }

 t = top(a,5);

 printf("\nTop Student:\n");
 printf("%s %d %d\n", t.name, t.roll, t.marks);

 return 0;
}
