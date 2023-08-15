#include <stdio.h>

/*This is where I first learned about float values!
Unfortunately, I learned in 32-bit linux, so I'm not 100% on their sizes.
Good thing we have sizeof(), right?*/
int main(void)
{
	// Variable declaration, setting everything to 0 to reduce comically long error numbers
	double orangeInPounds = 0;
	double orangeCost = 0;

	int energyDrink = 0;
	double energyDrinkCost = 0;
	double energyDrinkTax = 0;

	int yogurt = 0;
	double yogurtCost = 0;
	double yogurtTax = 0;

	double totalSub = 0;
	double totalTax = 0;
	double totalGrand = 0;

	// Asking user to input quantities of goods
	printf("Welcome to School Lunch Ltd.!\n");
	printf("How many pounds of oranges?: ");
	scanf("%lf", &orangeInPounds);
	printf("How many energy drinks?: ");
	scanf("%i", &energyDrink);
	printf("How many yogurts?: ");
	scanf("%i", &yogurt);

	/*
	Calculations
	Orange cost is 0.95/pound
	Energy drinks are 1.5/ct
	Yogurt is 0.75/ct
	Tax on yogurt and energy drinks are 6.5%
	*/
	orangeCost = orangeInPounds * 0.95;

	energyDrinkCost = energyDrink * 1.5;
	energyDrinkTax = energyDrinkCost * 0.065;

	yogurtCost = yogurt * 0.75;
	yogurtTax = yogurtCost * 0.065;

	totalSub = orangeCost + energyDrinkCost + yogurtCost;
	totalTax = energyDrinkTax + yogurtTax;
	totalGrand = totalSub + totalTax;

	// Printing receipt. There is no tax on oranges, so it will display a literal.
	printf("\nItem      Quantity   Price  Tax\n");
	printf("Oranges   %8.2lf   %5.2lf  0.00\n", orangeInPounds, orangeCost);
	printf("E. Drinks %8i   %5.2lf  %4.2lf\n", energyDrink, energyDrinkCost, energyDrinkTax);
	printf("Yogurt    %8i   %5.2lf  %4.2lf\n", yogurt, yogurtCost, yogurtTax);
	printf("\nTotals               %5.2lf  %4.2lf\n\n", totalSub, totalTax);
	printf("Grand Total          %5.2lf\n\n",totalGrand);

	// Obligatory return 0
	return 0;
}