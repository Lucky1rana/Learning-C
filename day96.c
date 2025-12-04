#include <stdio.h>

struct Date {
 int d;
 int m;
 int y;
};

struct Employee {
 char name[50];
 int id;
 struct Date join;
};

int main() {
 struct Employee e;

 printf("Name: ");
 scanf("%s",e.name);

 printf("ID: ");
 scanf("%d",&e.id);

 printf("Join Date (d m y): ");
 scanf("%d %d %d",&e.join.d,&e.join.m,&e.join.y);

 printf("\nDetails:\n");
 printf("%s %d %02d-%02d-%d\n", e.name, e.id, e.join.d, e.join.m, e.join.y);

 return 0;
}
