#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=="a,e,i,o,u")
    printf("Vowel");
    else if(a> -100 && a<100)
    printf("digit");
    else if(a>='`'&&a<='/');
    printf("Specaial Character")
    else
    printf("consonant");
    return 0;
}