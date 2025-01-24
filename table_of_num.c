#include<stdio.h>
int main(){
    // Taking input the number
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    // Printing the table
    for(int i=1;i<=10;i++){
        printf("%d\n",i*num);
    }
    return 0;
}
