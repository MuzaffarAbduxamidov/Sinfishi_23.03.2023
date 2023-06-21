#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   int imkoniyat=3;
   int user;
   printf("Son kiriting:");
   scanf("%d", &user);
   printf("%d", rand()%100+1);
}
