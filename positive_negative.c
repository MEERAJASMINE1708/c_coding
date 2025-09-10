//wap given integer is positive or negative or zero.

#include<stdio.h>
#include<conio.h>

int main(){
    int x;
    printf("Enter an integer:\n");
    scanf("%d",&x);
    if(x>0){
        printf("%d is an positive number.",x);
    }
    else if(x<0){
        printf("%d is an negative number.",x);
    }
    else{
        printf("%d is an zero.",x);
    }
    return 0;
}