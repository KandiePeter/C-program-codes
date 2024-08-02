// calculating simple interest
#include <stdio.h>

int main() {
int principal;
float rate; 
double time; 
double result;// Change the result variable type to double since it's calculated using double precision
//prompts the user to enter the values
printf("enter the principal:");
scanf("%d",&principal);
printf("enter the rate:");
scanf("%f",&rate);
printf("enter the time:");
scanf("%lf",&time);
//calculates the simple interest
result=principal*rate*time/100;
printf("the simple interest is % .2lf",result);//displays the simple interest in two decimal places 
return 0
}