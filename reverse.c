#include<stdio.h>
int main (){
    int n;
    // Taking input the number
    printf("enter the number :");
    scanf("%d",&n);
    int reverse=0;
    // Reverse the number
    while(n>0){
        reverse=(reverse*10)+(n%10);
        n=n/10;
    }
    printf("the reverse no. is %d",reverse);
    return 0;
}
