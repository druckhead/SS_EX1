#include "NumClass.h"
#include <stdio.h>

int isPrime(int num) {
    if (num < 1) {
        return FALSE;
    }
    for (int i = 2; i*i < num; i++) {
        if (num % i == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

int isStrong(int num) {
    int tmp = num;
    int sum = 0;
    while (tmp != 0) {
        int curr = tmp%10;
        int tmp2 = curr-1;
        while(tmp2>0) {
            curr*=(tmp2);
            --tmp2;
        }
        sum+=curr;
        tmp/=10;
    }
    if (sum == num) {
        return TRUE;
    }
    return FALSE;
}