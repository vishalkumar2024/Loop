#include<stdio.h>
int main (){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int reverse=0;
    while(n>0){
        reverse*=10;
        reverse+=(n%10);
        n=n/10;
    }
    printf("the reverse no. is %d",reverse);
    return 0;
}