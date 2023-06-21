
//23.03.2023 Payshanba
//Mavzu: "do while"
//"do while" da malumot shartdan o'tmasa ham ma'lumotni ekranga chiqarib beradi. Chunki "do while"da shart ya'ni "while" "do"dan keyin keladi.
//"do while" da birinchi qadam o'ylab o'tirmasdan tashlanadi.
//"do while" odatda judayam kam ishlatilinadi.Buning o'rniga ko'pincha "while"ning o'zi ishlatilinadi.
//"do while" va "while"da shartning ichida bitta o'zgaruvchida amal bajarsa bo'ladi.
//Misol: while(a<b+1).

//Mavzu: #include <stdlib.h> <time.h>standart library."Random kutubxona.
//"srand" ning vazifasi bizaga "rand" ya'ni random olib kevotgan sonni vaqtdga ulab qo'yadi.
//"srand" bilan "rand" kombinatsiya qilish orqali
//"rand" random son chiqarib beradi.
//(time(0 yokida NULL))ni o'z ichiga oladi.



#include <stdio.h>

int main(){

   char a='a';
   char b='z';

   do{
     printf("%c\n",a);
     a++;
   }while(a!=b);


   /*int a;
   int b=0;
   printf("Son kiriting:");
   scanf("%d", &a);
   do{
     b+=a%10;
     a/=10;
   }while(a!=0);

     if(b%2==0){
       while(a<4){
       printf("Abduxamidov\n");
       a++;
       }
     }else{
       while(a<5){
       printf("Muzaffar\n");
       a++;
       }
     }
     */

   /*int a;
   int b=10;
   int c=0;
   do{
     printf("Son kiriting:");
     scanf("%d", &a);
     b-=1;
     c=c+a;
   }while(b!=0);
     printf("Kiritilgan sonlar yig'indisi:%d",c);
   */

   /*int a;
   int b=1;
   printf("Son kiriting:");
   scanf("%d", &a);

   while(a>=b){
     if(a%b==0){
     printf("%d\n",b);
     }
     b++;
   }
   */


  
}
