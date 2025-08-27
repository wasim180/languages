#include<stdio.h>
int main(){
    float basicsalary,dearnessallowance,houserentallowance,grosssalary;

    printf("enter ramesh's basic slary: ");
    scanf("%f",&basicsalary);

    dearnessallowance=0.40*basicsalary;
    houserentallowance=0.20*basicsalary;
    grosssalary= basicsalary+dearnessallowance+houserentallowance;

    printf("%f",dearnessallowance);
    printf("%f",houserentallowance);
    printf("%f",grosssalary);




}
