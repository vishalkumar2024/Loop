#include<stdio.h>
int main(){
    // Taking input the number
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    // calculate sum of num
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
        printf("%d ",sum);
    
    return 0;
}
    
