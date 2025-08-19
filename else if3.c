#include<stdio.h>
int main ()
{
    int a;
    int b;

       printf("enter number a:");
       scanf("%d",a,b);

       printf("enter number b:");
       scanf("%d",&b);


              if(a>b){

                printf("a is bigger");
              }

    else if(b>a){

    printf("b is bigger");
    }

else{
    printf("both are equal");
}


}
