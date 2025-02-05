#include <stdio.h>

void checkPalindrome(int num) {
    int originalNum = num, reversedNum = 0, remainder;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum)
        printf("%d is a palindrome number.\n", originalNum);
    else
        printf("%d is not a palindrome number.\n", originalNum);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkPalindrome(num);

    return 0;
}
