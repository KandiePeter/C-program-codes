// loan access
#include <stdio.h>

int main() {
    int age, income;
    //prompts the user to input 
printf("enter your age:");
scanf("%d",&age);
printf("enter your income:");
scanf("%d",&income);
//offers the conditions to be met
if(age>=21 && income>=21000){
    //the output on the user screen
    printf("congratulations you qualify for a loan \n");
}
else{
    printf("unfortunately, you cannot get a loan");
}
    return 0;
}