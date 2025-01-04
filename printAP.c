#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        a+=3;
    }
    return 0;
}