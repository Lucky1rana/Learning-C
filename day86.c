#include <stdio.h>

enum Menu { ADD=1, SUBTRACT, MULTIPLY };

int main() {
 int a,b,ch;
  printf("Enter two numbers: ");
   scanf("%d %d",&a,&b);

 printf("1-ADD 2-SUBTRACT 3-MULTIPLY : ");
  scanf("%d",&ch);

 switch(ch){
   case ADD: printf("%d\n",a+b); break;
   case SUBTRACT: printf("%d\n",a-b); break;
   case MULTIPLY: printf("%d\n",a*b); break;
   default: printf("Invalid\n");
 }

 return 0;
}
