#include <math.h>
#include <stdio.h>

int main() {

    /* COMPOUND INTEREST CALCULATOR */

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int times_compound = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter # of times compound per year (n): ");
    scanf("%d", &times_compound);

    total =
        principal * pow(1 + rate / times_compound, times_compound * years);

    printf("After %d years, the total will be $%.2lf\n", years, total);

    // exit code 0 == success
    return 0; // unnecessary after C99, but good convention
}
