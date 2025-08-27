#include<stdio.h>
 int main(){
     int m,hour,minutes;

     printf("enter the number of minute: ");
     scanf("%d",&m);

     hour=(m/60);
     minutes=(m%60);

     printf("hour=%d" ,hour);
     printf("minutes=%d",minutes);


 }
