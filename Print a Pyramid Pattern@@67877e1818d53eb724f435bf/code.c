#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int b=1;b<=a;b++)
    {
        printf("\n");
    }
        for(int c=[100];c>=a;c--)
        {
            printf(" ");
        }
        for(int c=1;c<=a;c++)
        {
            printf("*");
        }
        return 0;
}
