#include<stdio.h>
#include<math.h>
int main(){
    // Taking input the number from user
    int num;
    int lastdigit,originalnum;
    int sum=0;
    int digit=0;
    printf("Enter the number:");
    scanf("%d",&num);

    originalnum=num;
    while(originalnum!=0){
       originalnum/=10;
       digit++;
    }
    originalnum=num;
    while(originalnum!=0){
        lastdigit=originalnum%10;
        sum+=pow(lastdigit,digit);
        originalnum/=10;
    }
    // Checkin the number if armstrong or not
    if(sum==num){
        printf("The number is an Armstrong");
    }
    else{
        printf("The number is not an Armstrong");
    }
    return 0;
}
