//wap to swap two numbers using tem variable.

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,temp;
    printf("Enter two values a and b:\n");
    scanf("%d%d",&a,&b);
    printf("\n Numbers before swapping:%d %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n Numbers after swapping:%d %d",a,b);
    return 0;

}