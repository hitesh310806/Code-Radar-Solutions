#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int b = 2;b<=a;b+a)
    {
        for(int c=b;c<=b;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}