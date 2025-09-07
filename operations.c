//wap apply oerations on integer values

#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n The Addition is:%d",c);
    c=a-b;
    printf("\n The Subtraction is:%d",c);
    c=a*b;
    printf("\n The Multliplication is:%d",c);
    c=a/b;
    printf("\n The Division is:%d",c);
    c=a%b;
    printf("\n The Modulo DIvision is:%d",c);
    return 0;
}