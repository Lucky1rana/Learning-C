#include <stdio.h>

struct Student {
 char name[50];
 int roll;
 int marks;
};

int main() {
 struct Student s[5];
 int i;

 for(i=0;i<5;i++){
   printf("Name Roll Marks: ");
   scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
 }

 printf("\nAll Students:\n");
 for(i=0;i<5;i++){
   printf("%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
 }

 return 0;
}
