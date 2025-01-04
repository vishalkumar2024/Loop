#include<stdio.h>
int main (){
    //Loop from 1 to 100
    for(int i=1;i<=100;i++){
        //If the number is odd, skip the rest of the loop
        if(i%2!=0)
        continue;
    
    printf("%d\n",i);
    }
    return 0;
}