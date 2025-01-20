#include<stdio.h>
int main (){
    // Taking input the number 'n'
    int n;
    printf ("enter the number :");
    scanf("%d",&n);
    int sum=0;
    int lastDigit=0;
    while(n!=0){
        lastDigit=n%10;
        sum =sum+lastDigit;
        n/=10;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}
