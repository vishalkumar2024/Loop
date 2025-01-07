#include <stdio.h>
int main(){

    int n;
    int originalnum;
    int reverse = 0;
    int lastdigit = 0;
    // Taking input the  n
    printf("Enter the number:");
    scanf("%d", &n);
    originalnum = n;
    while (n != 0){
        lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n /= 10;
    }
    // Checking the no. is palindrome or not
    if (originalnum == reverse){
        printf("%d is a palindrome number", originalnum);
    }
    else
    {
        printf("%d is not a palindrome number", originalnum);
    }
    return 0;
}
