#include <stdio.h>

int main(void)
{
    float loan, rate, payment, balance = 0.0f;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    rate /= 100 * 12;
    balance = loan;

    balance = (balance - payment) + (balance * rate);
    printf("Balance remaining after first payment: %.2f\n", balance);

    balance = (balance - payment) + (balance * rate);
    printf("Balance remaining after second payment: %.2f\n", balance);

    balance = (balance - payment) + (balance * rate);
    printf("Balance remaining after third payment: %.2f\n", balance);

    // balance is decreased by payment                  -> 20000 - 386.66 = 19613.34
    // increased by balance times monthly interest rate -> (20000 * 0.005) + 19613.34 = 100 + 19613.34 = 19713.34
}