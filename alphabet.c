//wap given character is an alphabet or not.

#include<stdio.h>
#include<conio.h>
int main(){
    char alpha;
    printf("Enter a character:\n");
    scanf("%c",&alpha);
    if(alpha>='a' && alpha<='z' || alpha>='A' && alpha<='Z'){
        printf("%c is an aplhabet.",alpha);
    }
    else{
        printf("%c is not an alphabet.",alpha);
    }
    return 0;
}