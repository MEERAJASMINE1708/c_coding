#include<stdio.h>
#include<conio.h>
int main(){
  int n,originalN,reverseN=0,rem;
  printf("Enter a number:");
  scanf("%d",&n);
  originalN=n;
  while(n!=0){
    rem=n%10;
    reverseN=reverseN*10 + rem;
    n/=10;
  }
  if(originalN==reverseN){
    printf("%d ia a palindrome",originalN);
  }
  else{
    printf("%d is not a palindrome",originalN);
  }
  return 0;
}