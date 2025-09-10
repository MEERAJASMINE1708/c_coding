//wap to generaate multiplication table.

#include<stdio.h>
#include<conio.h>

int main(){
    int i,n,mul;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mul=i*n;
        printf("%d * %d = %d\n",n,i,mul);
    }
    return 0;
}