//wap to find the greatest number among three integers.

#include<stdio.h>
#include<conio.h>

int main(){
    long a,b,c;
    printf("Enter three integer numbers:\n");
    scanf("%lu%lu%lu",&a,&b,&c);
    if(a>b && a>c){
        printf("a=%lu is greater.",a);
    }
    else if(b>a && b>c){
        printf("b=%lu is greater.",b);
    }
    else{
        printf("c=%lu is greater.",c);
    }
    return 0;

}