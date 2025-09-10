//wap to find the factorial of an integer.

#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,fact=1;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    if(n>=0){
        for(i=1;i<=n;i++){
            fact*=i;
        }
        printf("The factorial of %d is:%lu",n,fact);
    }
    else{
        printf("Error!!! Factorial of a negative number doesn't exists");
    }
    return 0;
}