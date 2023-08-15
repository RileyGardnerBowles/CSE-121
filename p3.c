#include <stdio.h>

int main(void)
{
    // Variable declaration, sorted by category
    double loanAmount = 0;        // The numerical size of the loan provided by user. Whittled away by leftOverPayment every month
    double loanPayment = 0;       // The base loan payment provided by user
    double loanActualPayment = 0; // loanPayment-interestAmount. Used to calculate actual payment made to loan

    double interestRate = 0;    // Stores interest rate provided by user
    double interestMonthly = 0; // Store interest rate's monthly calculation, (interestRate/100)/12, for easier calculations.
    double interestAmount = 0;  // Stores current month's interest
    double interestTotal = 0;   // Sum of all interest accrued

    int years = 0;      // Amount of years the payments span over, provided by user
    int monthTotal = 0; // years * 12
    int month = 0;      // used as counter for loop

    // Ask user for required information
    printf("Welcome to RGB Loan Dept\n");
    printf("How much is your loan? ");
    scanf("%lf", &loanAmount);
    printf("How long is your loan in years? ");
    scanf("%i", &years);
    printf("what is the loan's interest rate in percentage? ");
    scanf("%lf", &interestRate);
    printf("what is the loan's monthly payment? ");
    scanf("%lf", &loanPayment);

    // Preliminary Calculations
    interestMonthly = (interestRate / 100.00) / 12.00; // Used in looped calculation
    monthTotal = years * 12;                           // Used as a terminator for the loop
    month = 0;                                         // Used as a counter for the loop
    
    //This loops
    for (month = 1; month <= monthTotal; month++)
    {
        interestAmount = interestMonthly * loanAmount;    // Calculates this month's interest
        interestTotal += interestAmount;                  // Adds this month's interest to the total interest
        loanActualPayment = loanPayment - interestAmount; // This will create a positive number if your bank isn't screwing you over.
        loanAmount -= loanActualPayment;                  // Removes this month's interest from the loan balance
        printf("Month(%3i): interest = %.2lf, leftover payment: = %.2lf, balance = %.2lf\n", month, interestAmount, loanActualPayment, loanAmount);
    }
    printf("Total Interest = %.2lf,Final Balance = %.2lf\n", interestTotal, loanAmount);
    return 0;
}
