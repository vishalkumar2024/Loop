#include<stdio.h>
int main (){
    // Taking input the number n
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    
    // Finding the fibonacci
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("the %dth fibonacci term is %d",n,sum);
    return 0;
}
