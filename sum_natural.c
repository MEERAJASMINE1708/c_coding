//wap to find the sum of n natural numbers.

#include<stdio.h>
#include<conio.h>

int main(){
    int i,n,sum=0;
    printf("Enter n value:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("The sum of %d natural numbers is:%d",n,sum);
    return 0;
}