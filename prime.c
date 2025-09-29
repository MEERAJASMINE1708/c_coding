#include<stdio.h>
int main(){
    int i,n,isprime=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<=1){
        printf("%d is not a prime number",n);
    }else{
        for(i=2;i<n;i++){
            if(n%i==0){
                isprime=1;
                break;
            }
        }
        if(isprime==0){
            printf("%d is a prime number",n);
        }else{
            printf("%d is not a prime number",n);
        }
    }
    return 0;
}

