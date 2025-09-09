//wap given character is an vowel or consonant.

#include<stdio.h>
#include<conio.h>


int main(){
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("%c is an vowel.",ch);
    }
    else{
        printf("%c is an consonant.",ch);
    }
    return 0;

}