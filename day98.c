#include <stdio.h>
#include <string.h>

struct Box {
 int a;
 int b;
 char name[50];
};

int main() {
 struct Box x, y;

 printf("First (a b name): ");
 scanf("%d %d %s", &x.a, &x.b, x.name);

 printf("Second (a b name): ");
 scanf("%d %d %s", &y.a, &y.b, y.name);

 if(x.a==y.a && x.b==y.b && strcmp(x.name,y.name)==0)
    printf("Identical\n");
 else
    printf("Not Identical\n");

 return 0;
}
