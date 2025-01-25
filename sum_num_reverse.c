#include<stdio.h>
int main (){
  // Takng input the number
  int num;
  printf("enter the number:");
  scanf("%d",&num);
  int s=num;
   int r=0;
   while(num!=0){
    r=r*10;
    r=r+(num%10);
    num=num/10;
   } 
   printf("%d",s+r);
  return 0;
} 
