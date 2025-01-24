#include<stdio.h>
int main (){
    // Taking input the number 'n'
    int num;
    printf ("enter the number :");
    scanf("%d",&num);
    int sum=0;
    int lastDigit=0;
    while(num!=0){
        lastDigit = num%10;
        sum+=lastDigit;
        num/=10;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}
