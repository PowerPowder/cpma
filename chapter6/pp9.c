#include <stdio.h>

int main(void)
{
    float loan, rate, payment, balance = 0.0f;
    int num;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter number of payments: ");
    scanf("%d", &num);

    rate /= 100 * 12;
    balance = loan;

    for (int i = 0; i < num; i++)
    {
        balance = (balance - payment) + (balance * rate);
        printf("Balance remaining after first payment: %.2f\n", balance);
    }

    // balance is decreased by payment                  -> 20000 - 386.66 = 19613.34
    // increased by balance times monthly interest rate -> (20000 * 0.005) + 19613.34 = 100 + 19613.34 = 19713.34
}