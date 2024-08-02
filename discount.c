//discount
#include <stdio.h>

int main() {
    float amount, discount, pay;
    printf("please enter the amount purchased:ksh.");
    scanf("%f",&amount);
if(amount>5000){
    discount=0.1*amount;
    pay=amount-discount;
    printf("the discount is ksh.%.2f \n", &discount);
    printf("the discounted amount is%.2f",pay);
}
else{
    printf("No discount");
}
    return 0;
}