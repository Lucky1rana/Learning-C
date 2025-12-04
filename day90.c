#include <stdio.h>

enum Gender { MALE=1, FEMALE, OTHER };

struct Person {
 char name[50];
 enum Gender g;
};

int main() {
 struct Person p;

 printf("Name: ");
 scanf("%s",p.name);

 printf("1-MALE 2-FEMALE 3-OTHER : ");
 scanf("%d",&p.g);

 if(p.g==MALE)  printf("Gender: Male\n");
 else if(p.g==FEMALE) printf("Gender: Female\n");
 else if(p.g==OTHER)  printf("Gender: Other\n");
 else printf("Invalid\n");

 return 0;
}
