#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int r = 1;r<=a;r=r+1)
    {
        for(int c=1;c<=r;c++)
        {

        printf("* ");
        }
        printf("\n");
    }
    return 0;
}