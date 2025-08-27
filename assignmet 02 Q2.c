#include<stdio.h>
int main(){
   float radius,volume;
   const pi=3.14;

   printf("enter the radius of a sphere: ");
   scanf("%f",&radius);

   volume=(4*pi*radius*radius*radius)/3;

   printf("%f",volume);


}
