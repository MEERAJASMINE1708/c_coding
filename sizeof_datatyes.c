//wap to find the size of int,float,double,char

#include<stdio.h>
#include<conio.h>
int main(){
    int inttype;
    float floattype;
    char chartype;
    double doubletype;
    printf("The Size of int is:%lu\n",sizeof(inttype));
    printf("The size of float is:%lu\n",sizeof(floattype));
    printf("The size of char is:%lu\n",sizeof(chartype));
    printf("The size of double is:%lu\n",sizeof(doubletype));
    return 0;
}