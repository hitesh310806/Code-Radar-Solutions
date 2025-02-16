#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int b = 1;b<=a;b++)
    {
        for(int c=2;c==b;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}