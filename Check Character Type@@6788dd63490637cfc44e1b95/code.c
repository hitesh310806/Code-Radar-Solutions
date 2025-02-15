#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if((a=='a')||(a=='i')||(a=='e')||(a=='o')||(a=='u')||(a=='O'))
    printf("Vowel");
    else if(a>'0' && a<'10')
    printf("Digit");
    else if ((a >= 32 && a <= 47) || (a >= 58 && a <= 64) || 
    (a >= 91 && a <= 96) || (a >= 123 && a <= 126))
    printf("Specaial Character");
    else
    printf("Consonant");
    return 0;
}