#include <stdio.h>
#include <cs50.h>
#include<math.h>


int main(void)
{
    float dollar;
    do
    {
        dollar = get_float("Change owed:");
    }
    while (dollar < 0);
    
    int cents = round(dollar * 100);
    int coins =  ;
    {
        while (cents >= 25)
        {
            cents -= 25;
            coins++;
        }
        while (cents >= 10)
        {
            cents -= 10;
            coins++;
        }
        while (cents >= 5)
        {
            cents -= 5;
            coins++;
        }
        while (cents >= 1)
        {
            cents -= 1;
            coins++;
        }
        printf("%i\n", coins);
     }
}
