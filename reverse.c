#include<stdio.h>
int main (){
    int num;
    // Taking input the number
    printf("enter the number :");
    scanf("%d",&num);
    int reverse=0;
    // Reverse the number
    while(n>0){
        reverse=(reverse*10)+(num%10);
        num=num/10;
    }
    printf("the reverse no. is %d",reverse);
    return 0;
}
