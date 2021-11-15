#include <stdio.h>
#include "NumClass.h"

int main(int argc, char const *argv[])
{
    int minRange = 0, maxRange = 0;
    scanf("%d %d", &minRange, &maxRange);
    printf("The Armstrong numbers are:");
    for (int i = minRange; i <= maxRange; i++)
    {
        if (isArmstrong(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    for (int i = minRange; i <= maxRange; i++)
    {
        if (isPalindrome(i))
        {
            printf(" %d", i);
        }   
    }
    printf("\n");
    printf("The Prime numbers are:");
    for (int i = minRange; i <= maxRange; i++)
    {
        if (isPrime(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Strong numbers are:");
    for (int i = minRange; i <= maxRange; i++)
    {
        if (isStrong(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}
