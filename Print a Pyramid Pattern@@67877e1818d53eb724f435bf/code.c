#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int b = 1;b<=a;b = b+2)
    {
        for(int c=1;c<=b;c++)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
}