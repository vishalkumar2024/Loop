#include<stdio.h>
int main (){
  // Takng input the number
  int n;
  printf("enter the number:");
  scanf("%d",n);
  int s=n;
   int r=0;
   while(n!=0){
    r=r*10;
    r=r+(n%10);
    n=n/10;
   } 
   printf("%d",s+r);
  return 0;
} 
