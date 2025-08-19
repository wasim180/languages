#include<stdio.h>
  int main()
  {
     int a;
     int b;

      printf("enter a number");
      scanf("%d",&a);

      printf(" enter number b:");
      scanf("%d",&b);

      if(a==b){
        printf("both are equal");

      }
    else if(a>b){
        printf("a is bigger");

    }
  else{
    printf(" b is bigger");
  }


     }
