#include<stdio.h>
int main()
{
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case'+'
        printf("%d %d",a,b,a+b);
         case'-'
        printf("%d %d",a,b,a-b);
         case'*'
        printf("%d %d",a,b,a*b);
         case'/'
        printf("%d %d",a,b,a/b);
    }
    else
    printf(" Error");
    return 0;
}