#include <stdio.h>

struct Student {
 char name[50];
 int roll;
 int marks;
};

int main() {
 struct Student s[5];
 int i, max=0, idx=0;

 for(i=0;i<5;i++){
  printf("Name Roll Marks: ");
  scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
  if(s[i].marks > max){
    max = s[i].marks;
    idx = i;
  }
 }

 printf("\nTopper:\n");
 printf("%s %d %d\n", s[idx].name, s[idx].roll, s[idx].marks);

 return 0;
}
