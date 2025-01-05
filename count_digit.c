#include<stdio.h>
int main (){
    // Taking input the number
    int n;
    printf ("enter the number:");
    scanf("%d",&n);
    
    // Counting the digits
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("the no. of digits are %d",count);
    return 0;
}
