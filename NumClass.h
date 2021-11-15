/* will return if a number if armstrong number
* an armstrong number is an n-digit number that is equal to ther sum of the nth powers of its digits.
* For Example: 407 = 4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407
*/
#define TRUE 1
#define FALSE 0

int isArmstrong(int num);

/* will return if a number is a palindrome */
int isPalindrome(int num);

/* will return if a number is prime */
int isPrime(int num);

/* Strong number is a special number whose sum of the factorial of digits is equal to the original number.
*   For Example: 145 is strong number
*   145= !5+ !4+ !1
*/

int isStrong(int num);