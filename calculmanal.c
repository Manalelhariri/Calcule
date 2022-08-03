#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main ()
{
    double nb1 , nb2;
    char  t , u;
{
printf("operande : ");
   scanf("%lf", &nb1);
 printf("operande : "); 
   scanf("%c" , &t );
 printf("operande : ");
   scanf("%lf" , &nb2 );
  switch(t)
    {
 case '+' : 

printf("resultat = %f\n" , nb1 + nb2 );
 break ;

 case '-' :
 printf("resultat = %f\n" , nb1 - nb2 );
 break ; 


 case '*' :
 printf("resultat = %f\n" , nb1 * nb2 );
  break;
  
 case '/' :
 if (nb2 == 0);
     {
 printf("resultat = %f\n" , nb1 / nb2  );
     }
   default : 
   printf("ERRER \n"); 
   break ;
   case 'q' :
  printf("finir le programme");
 break;
 }
  printf("un autre operation \n : ");
   scanf("%c" , &u);
   printf("%c", u);
}
while (u == 'o'|| u == 'o');

 } 