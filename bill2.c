#include<stdio.h>
 int main()
 {
     int n;
     int bill;

     printf("enter a number");
     scanf("%d",&n);

       if(n<=200){
         bill= n*2+50;
       }
     else if(n>200  && n<=300){
        bill=200*2+(n-200)*4+50;
     }
     else if(n>300 && n<=400){
        bill=200*2+100*4+(n-300)*5+50;
     }
     else{
        bill=200*2+100*4+100*5+(n-400)*7+50;
     }

     printf("%d",bill);

 }
