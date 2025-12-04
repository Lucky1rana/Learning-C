#include <stdio.h>

enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
 enum Month m;
  printf("Enter month number (1-12): ");
   scanf("%d",&m);

 if(m==JAN) printf("31 days\n");
 else if(m==FEB) printf("28 or 29 days\n");
 else if(m==MAR) printf("31 days\n");
 else if(m==APR) printf("30 days\n");
 else if(m==MAY) printf("31 days\n");
 else if(m==JUN) printf("30 days\n");
 else if(m==JUL) printf("31 days\n");
 else if(m==AUG) printf("31 days\n");
 else if(m==SEP) printf("30 days\n");
 else if(m==OCT) printf("31 days\n");
 else if(m==NOV) printf("30 days\n");
 else if(m==DEC) printf("31 days\n");
 else printf("Invalid\n");

 return 0;
}
