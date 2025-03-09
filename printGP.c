#include<stdio.h>
int main (){
    // Taking input the number n
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int a=1;
    // increasing a by 2 times
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        a=a*2;
    }
    return 0;
}
