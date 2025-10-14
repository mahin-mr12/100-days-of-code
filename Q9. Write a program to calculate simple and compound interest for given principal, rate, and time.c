#include <stdio.h>
#include <math.h>
int main() {
    double principal, rate, time, simple_interest, compound_interest, amount;
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);
    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    simple_interest = (principal * rate * time) / 100;
    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    printf("\n--- Calculated Interest ---\n");
    printf("Principal Amount: %.2lf\n", principal);
    printf("Annual Rate of Interest: %.2lf%%\n", rate);
    printf("Time (in years): %.2lf\n", time);
    printf("----------------------------------\n");
    printf("Simple Interest: %.2lf\n", simple_interest);
    printf("Compound Interest: %.2lf\n", compound_interest);

    return 0;
}
