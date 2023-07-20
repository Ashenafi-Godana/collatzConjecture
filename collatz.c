#include <cs50.h>
#include <stdio.h>

int collatz(int n);
int main(void)
{
    int num = get_int("Number: ");
    printf("It takes %d steps to get to 1\n", collatz(num));
}


//A function that returns how many steps it takes to get to 1 using collatz conjecture
int collatz(int n)
{
    //base case
    if (n == 1)
    {
        return 0;
    }

    //recursive case for even numbers
    else if (n%2 == 0)
    {
        return 1 + collatz(n/2);
    }

    //recursive case for odd numbers
    else
    {
        return 1 + collatz(3*n + 1);
    }
}