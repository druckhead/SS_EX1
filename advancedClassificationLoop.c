#include "NumClass.h"
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int tmp = num;
    int length = 0;
    int sum = 0;
    while (tmp != 0) {
        length++;
        tmp/=10;
    }
    tmp = num;
    while (tmp!=0)
    {
        int curr = tmp%10;
        sum += pow(curr, length);
        tmp/=10;
    }
    return (sum == num) ? TRUE : FALSE;
}

int isPalindrome(int num) {
    int tmp = num;
    int rev = 0;
    while (tmp != 0) {
        int curr = tmp%10;
        rev*=10;
        rev += curr;
        tmp/=10;
    }
    return (rev == num) ? TRUE : FALSE;
}