#include<stdio.h>
int main (){
    // Taking input the no.
    int n;
    printf ("entre the number :");
    scanf("%d",&n);
    // Checking for the prime no.
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    // number 1 is neither prime nor composite
    if (n==1) printf("neither prime nor composite");
   else if(a==0) printf("number is prime \n");
   else printf("number is composite\n");
    return 0;
}
