#include <stdio.h>

int main(){
   int son2;
   int son1;
   printf("Son kiriting:");
   scanf("%d%d", &son1, &son2);
//-----------------------------
   do{
     printf("%d\n", son1);
     son1--;
   }while(son1!=0);
//------------------------------
   while(son2!=0){
     printf("%d",son2);
     son1--;
   }
//------------------------------


}

