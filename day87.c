#include <stdio.h>

enum Role { ADMIN=1, USER, GUEST };

int main() {
 int r;
  printf("1-ADMIN 2-USER 3-GUEST : ");
   scanf("%d",&r);

 if(r==ADMIN) printf("Welcome Admin\n");
 else if(r==USER) printf("Hello User\n");
 else if(r==GUEST) printf("Guest Access\n");
 else printf("Invalid\n");

 return 0;
}
