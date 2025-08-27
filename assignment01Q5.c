#include<stdio.h>
int main(){
  float totalsellingprice,totalprofit,costpriceone;

  printf("Enter the total selling price of 15 items: ");
  scanf("%f",&totalsellingprice);

  printf("Enter total profit earned: ");
  scanf("%f",&totalprofit);

  costpriceone= (totalsellingprice-totalprofit)/15;

  printf("%f",costpriceone);



}
