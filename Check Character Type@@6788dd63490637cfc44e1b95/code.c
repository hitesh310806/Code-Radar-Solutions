#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if((a=='a')||(a=='i')||(a=='e')||(a=='o')||(a=='u')||(a=='O'))
    printf("Vowel");
    else if(a>='0' && a<='9')
    printf("Digit");
    else if ((a >= 32 && a<=123>))
    printf("Special Character");
    else
    printf("Consonant");
    return 0;
}