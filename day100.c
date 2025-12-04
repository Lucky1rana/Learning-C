#include <stdio.h>

struct Student {
 char name[50];
 int roll;
 int marks;
};

int main() {
 struct Student s, *p;
 p = &s;

 printf("Name Roll Marks: ");
 scanf("%s %d %d", p->name, &p->roll, &p->marks);

 printf("%s %d %d\n", p->name, p->roll, p->marks);

 return 0;
}
