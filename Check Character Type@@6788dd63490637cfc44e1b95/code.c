#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='a')||(a=='i')||(a=='e')||(a=='o')||(a=='u')
    printf("Vowel");
    else if(a>0 && a<100)
    printf("digit");
    else if ((a >= 32 && a <= 47) || (a >= 58 && a <= 64) || 
    (a >= 91 && a <= 96) || (a >= 123 && a <= 126))
    printf("Specaial Character");
    else
    printf("consonant");
    return 0;
}