#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int b =1;b<=a;b+2;)
    {
        for(int c=b;c<=b;c+2;)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}