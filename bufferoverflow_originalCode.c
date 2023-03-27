#include <stdio.h>
int main() {
char prenom[1];
printf("Comment vous vous appelez ?\n");
scanf("%s", prenom);
printf("Vous vous appelez %s\n", prenom);
printf("%p", &prenom); 
return 0;
}