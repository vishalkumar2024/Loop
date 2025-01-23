#include<stdio.h>
int main(){
    // Taking input the number
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
    return 0;
}
