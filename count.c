#include<stdio.h>
#include<conio.h>
int main(){
    long int num;
    int count=0;
    printf("Enter a number:");
    scanf("%ld",&num);
    while(num!=0){
        num/=10;
        count++;
    }    
    printf("The no.of digits in num=%d",count);
    
    return 0;

}