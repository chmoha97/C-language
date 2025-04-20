//this code with purpose to create a simple calculator to do the + - * / operations with integer and float number
#include <stdio.h>
#include <stdlib.h>
//structure contain data that will be used to manipulate the calculator
typedef struct{
    float a,b;
    char c;
}data_calcul;
int main() {
    float d; //to stock the result
    int i=0; //initialise for the while boucle
    data_calcul d1;
    while (i<=10){
      printf("les entrees a et b :");
      scanf("%f",&d1.a);
      scanf("%f",&d1.b);
      printf("le symbole : ");
      scanf(" %c",&d1.c);
      switch (d1.c){
          case '+':
          d=d1.a+d1.b;
          printf("le resultat est : %.2f\n",d);
          break;
          case '-':
          d=d1.a-d1.b;
          printf("le resultat est : %.2f\n",d);
          break;
          case '*':
          d=d1.a*d1.b;
          printf("le resultat est : %.2f\n",d);
          break;
          case '/':
           if(d1.b!=0){
             d=d1.a/d1.b;
             printf("le resultat est : %.2f\n",d);
             break;
             }
           else{
             printf("division impossible\n");
             break;
             }
          default:
          // if none of the symbole used, then quit the program
          printf("option non disponible, quitte le programme");
          exit(EXIT_FAILURE);
        }
        printf("iteration i est : %d\n", i);
        i++;
      }
   return 0;
}
