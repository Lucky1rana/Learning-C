#include <stdio.h>

enum Code { A=10, B, C, D, E };

int main() {
 enum Code x;
 for(x=A; x<=E; x++){
   printf("%d ", x);
 }
 return 0;
}
