#include <stdio.h>

struct Student {
 char name[50];
 int roll;
 int marks;
};

void show(struct Student s){
 printf("%s %d %d\n", s.name, s.roll, s.marks);
}

int main() {
 struct Student a;

 printf("Name: ");
 scanf("%s",a.name);

 printf("Roll: ");
 scanf("%d",&a.roll);

 printf("Marks: ");
 scanf("%d",&a.marks);

 show(a);

 return 0;
}
