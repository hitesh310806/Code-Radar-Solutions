#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int b = a;b<=a;b++)
    {
        for(int c=b;c<=b;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}