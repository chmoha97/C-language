//the purpose of this code is to compare between three number intrduced by the user
#include<stdio.h>

//define prototype of the function
void compare(int a,int b, int c);


int main(){
    //define data
    int a,b,c;
    printf("les nombre de a, b et c: ");
    while (1){
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        //verify the big number between a,b and c and print the result
        compare(a,b,c);
    }
    return 0
}

// The architecture of the function compare
void compare(int a,int b, int c){

    if(a>b && a>c){
        printf("a est le plus grand\n");
    }
    else if(b>a && b>c){
        printf("b est le plus grand\n");
    }
    else{
        printf("c est le plus grand\n");
    }

}
