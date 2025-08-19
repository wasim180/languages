#include<stdio.h>
int main()
         {
     int n;
     int bill;
     int x;
     int s;


            printf("enter a number:");
            scanf("%d",&n);

         if(n<=200){
            bill= n*2;
         }
            else if(n>200 && n<=300){
            bill=200*2+(n-200)*4;
          }
             else if(n>300&& n<=400){
                bill=200*2+100*4+(n-300)*5;
             }
             else{
                x=200*2+100*4+100*5+(n-400)*7;
                s=(x*10)/100;
                bill= x+s;
             }

             printf("%d",bill);



         }
