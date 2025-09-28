#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int base,exp;
    long int res=1;
    printf("Enter base:");
    scanf("%d",&base);
    printf("\nEnter exponent:");
    scanf("%d",&exp);
    while(exp!=0){
        res*=base;
        exp--;
    }
    printf("The power of the number is:%ld",res);
    return 0;

}