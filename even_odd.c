//wap given number is even or odd.

#include<stdio.h>
#include<conio.h>


int main(){
    int x;
    printf("Enter a number:\n");
    scanf("%d",&x);
    if(x%2==0){
        printf("%d is an even number.",x);
    }    
    else{
        printf("%d is an odd number.",x);
    }    
    return 0;
}
