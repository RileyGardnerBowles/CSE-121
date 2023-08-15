/*I feel like previous me explained this one pretty well. Note this is in 32-bit linux!*/
#include <stdio.h>

void print_binary(unsigned long long int);

int main()
{
    unsigned long long int number = 0; // This datatype gives us the range we want
    printf("Give an integer within the range 0-18,446,744,073,709,551,615 you want to turn into a binary number: ");
    scanf("%llu", &number);
    print_binary(number);
    return 0;
}
void print_binary(unsigned long long int numberToBinarize)
{
    for (int i = 63; i >= 0; i--)
    {
        printf("%d", (numberToBinarize >> i) & 1);
        /*Data is stored as 1's and 0's, meaning our number is already converted, we just need to get it out.
          To demonstrate with a smaller int:
          We input number 17
          Computer stores it as 00010001
          In print_binary, where i starts at 7 (number of bits - 1):
          We shift the bits of the input 7 times, the shifted number being 00000000
          We then use the bitwise AND operator to compare it to the decimal number 1 (binary 00000001)
          input: 00000000
          one:   00000001
          result:00000000
          Since neither of the bits are both at one, this set of operations returns a 0, which printf() then prints.
          We can printf() this accurately because, by default, linebreaks are not added by every printf() call.
          It then repeats, each time bit-shifting it one less time.

          Let's skip a few turns of this to the first printed 1:
          i is 4, so we shift the bits to the right 4 times, the shifted number being 00000001
          We then use bitwise AND to compare the two numbers:
          input: 00000001
          one:   00000001
          result:00000001
          we then printf() the result, 1, into the terminal.
          After the loop ends, the program ends with this printed display:
          00010001
          */
    }
    printf("\n"); // after everything else is done, a linebreak is added for visual clarity
}