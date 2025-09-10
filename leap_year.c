//wap given year is leap year or not.

// #include<stdio.h>
// #include<conio.h>


// int main(){
//     int year;
//     printf("Enter a year:\n");
//     scanf("%d",&year);
//     if(year%4==0 && year%100!=0||year%400==0){
//         printf("%d is an leap year.",year);
//     }
//     else{
//         printf("%d is not a leap year.",year);
//     }
//     return 0;
// }


#include<stdio.h>
#include<conio.h>

int main(){
    int year;
    printf("Enter a year:\n");
    scanf("%d",&year);
    if(year%400==0){
        printf("%d is an leap year.",year);
    }
    else if(year%100==0){
        printf("%d is not an leap year.",year);
    }
    else if(year%4==0){
        printf("%d is an leap year.",year);
    }
    else{
        printf("%d is not an leap year.",year);
    }
    return 0;
}