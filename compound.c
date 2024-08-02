#include <stdio.h>
#include<math.h>

int main() {
    float principal;
    float rate; 
    float time;
    float ci;
    int n;

    // promts the user to enter the values
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in decimal): ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Calculates the compound interest
    ci = principal * pow((1 + rate / n), (n * time));

    //  the result that will be seen by the user 
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}