#include<stdio.h>
#include<math.h>

float calcul_puissance(){

    float a,y,p;
    printf("la valeur de base est: ");
    scanf("%f",&a);
    printf("la valeur de composante est : ");
    scanf("%f",&y);
    p=pow(a,y);
    return p;
}

int main(){
    float a=calcul_puissance();

    printf("la puissance est : %.2f",a);



    return 0;
}