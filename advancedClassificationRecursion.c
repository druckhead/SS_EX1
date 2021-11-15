#include "NumClass.h"
#include <stdio.h>
#include <math.h>

int reverse(int num);
int numlength(int num);
int armstrong_helper(int num, int num_size);

int numlength(int num) {
    int tmp = num;
    int count = 0;
    while(tmp) {
        count++;
        tmp/=10;
    }
    return count;
}

int armstrong_helper(int num, int num_size) {
    if (!num) {
        return 0;
    } else {
        return pow((num%10), num_size) + armstrong_helper(num/10, num_size);
    }
}

int isArmstrong(int num) {
    int tmp=num;
    int size = numlength(tmp);
    int ans = armstrong_helper(num, size);
    return (ans==num) ? TRUE : FALSE;
}

int reverse(int num) {
    /* Find number of digits in num */
    int digit = (int)log10(num)+1;
    /* Recursion base condition */
    if(!num) {
        return 0;
    }
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}

int isPalindrome(int num) {
    int tmp = reverse(num);
    if (num == tmp) {
        return TRUE;
    }
    return FALSE;
}