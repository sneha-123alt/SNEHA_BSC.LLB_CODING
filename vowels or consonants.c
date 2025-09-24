#include<stdio.h>
#include<ctype.h>
int main(){
char ch;
printf("enter a character:");
scanf("%c,&ch");
ch=tolower((ch));
switch(ch){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    printf("the character '%c' is a vowel.\n", ch);
    break;
default:
    if(ch>='0' && ch <='9'){
            printf("the character' '%c' is a digit.\n", ch);
    }else if((ch >='a' && ch <= 'z')){
    printf("the character '%c' is a consonant.\n", ch);
    }else{
    printf("the character '%c' is neither a vowel, consonant,nor a digit.\n",ch);
    }
    break;
}
return 0;
}
