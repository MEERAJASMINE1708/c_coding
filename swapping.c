//wap to swap two numbers using temp variable.

// #include<stdio.h>
// #include<conio.h>

// int main(){
//     int a,b,temp;
//     printf("Enter two values a and b:\n");
//     scanf("%d%d",&a,&b);
//     printf("\n Numbers before swapping:%d %d",a,b);
//     temp=a;
//     a=b;
//     b=temp;
//     printf("\n Numbers after swapping:%d %d",a,b);
//     return 0;

// }



//wap to swap two numbers without temp variable.


#include<stdio.h>
#include<conio.h>

int main(){
    int a,b;
    printf("Enter two int type values:\n");
    scanf("%d%d", &a, &b);
    printf("The values of a and b before swapping:%d %d\n",a,b);
    a=a + b;     // add both numbers and store it in a.
    b=a - b;     //original b from sum to get original a.
    a=a - b;     //subtract new b from sum to get original b.

    printf("The values of a and b after swapping:%d %d\n",a,b);
    return 0;
}


