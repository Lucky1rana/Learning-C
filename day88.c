#include <stdio.h>

enum Days { SUN, MON, TUE, WED, THU, FRI, SAT };

int main() {
 enum Days d;
 char *names[] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };

 for(d=SUN; d<=SAT; d++){
   printf("%s = %d\n", names[d], d);
 }

 return 0;
}
