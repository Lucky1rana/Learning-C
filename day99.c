#include <stdio.h>
#include <stdlib.h>

struct Person {
 char name[50];
 int age;
};

int main() {
 struct Person *p;

 p = (struct Person*)malloc(sizeof(struct Person));
 if(p==NULL){
  printf("no mem\n");
  return 1;
 }

 printf("Name Age: ");
 scanf("%s %d", p->name, &p->age);

 printf("%s %d\n", p->name, p->age);

 free(p);
 return 0;
}
