#include <stdio.h>
int main(){
  int number,originalnumber,reversednumber=0,remainder;
printf("enter an integer:");
scanf("%d",&number);
originalnumber=number;
while(number!=0){
    remainder=number%10;
    reversednumber=reversednumber * 10 + remainder;
}
if (originalnumber==reversednumber){
    printf("%d is a palindrome number.\n",originalnumber);
}else {
  printf("%d is not a palindrome number.\n", originalnumber);
}
return 0;

}
