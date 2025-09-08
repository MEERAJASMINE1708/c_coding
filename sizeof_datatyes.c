//wap to find the size of int,float,double,char

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int inttype;
//     float floattype;
//     char chartype;
//     double doubletype;
//     printf("The Size of int is:%lu\n",sizeof(inttype));
//     printf("The size of float is:%lu\n",sizeof(floattype));
//     printf("The size of char is:%lu\n",sizeof(chartype));
//     printf("The size of double is:%lu\n",sizeof(doubletype));
//     return 0;
// }





//demonstarte the keyword long in c program

#include<stdio.h>
#include<conio.h>

int main(){
    int a;
    long b;
    long long c;
    float d;
    double e;
    long double f;

    
    printf("\n The sizeof int is:%lu",sizeof(a));
    printf("\n The size of long int is:%lu",sizeof(b));
    printf("\n The size of long long int is:%lu",sizeof(c));
    printf("\n The size of float is:%lu",sizeof(d));
    printf("\n The size of double is:%lu",sizeof(e));
    printf("\n The size of long double is:%lu",sizeof(f));
    return 0;
}