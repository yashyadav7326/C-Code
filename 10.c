#include<stdio.h>// simple interest
int main(){
    float principle,rate,time,simple_interest;

    printf("enter priniciple\n");
    scanf("%f",&principle);

    printf("enter rate\n");
    scanf("%f",&rate);

    printf("enter time\n");
    scanf("%f",&time);

 simple_interest=(principle*rate*time)/100;
 printf("si = %f",simple_interest);
 return 0;


}