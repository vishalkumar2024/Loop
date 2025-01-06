#include<stdio.h>
int main (){
    // Taking input the number 
    int n;     
    printf("enter the number:");
    scanf("%d",&n);
    
   // Finding the factorial of number
    int fact=1;    
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
        printf("the factorial of %d is %d",n,fact);
    
    return 0; 
}
