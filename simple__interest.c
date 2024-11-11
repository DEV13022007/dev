#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Input: Principal, Rate of interest, and Time period
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // Simple Interest Formula: Interest = (Principal * Rate * Time) / 100
    interest = (principal * rate * time) / 100;

    // Output: Simple Interest
    printf("The simple interest is: %.2f\n", interest);

    return 0;
}