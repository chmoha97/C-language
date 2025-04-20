// the purpose of this code is to exchange value between variable
#include<stdio.h>
// function to exchange value between variable
void exchange(float *a, float *b){
    float c=*a; // move value of a to c
    *a=*b; // move value of b to a
    *b=c; // move value of c (=a) to b
}

int main(){

    float x,y;
    scanf("%f",&x); // enter a float number
    scanf("%f",&y); // enter a float number 
    //print initial values of variable
    printf("valeur de x: %.2f et y: %.2f\n",x,y); //display two value after comma
    //exchange the values between variable
    exchange(&x,&y);
    // print values of variable after exchange
    printf("valeur de x: %.2f et y: %.2f",x,y); //display two value after comma
    return 0;
}

