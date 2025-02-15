#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int r = a ; r >= 1; r--)
    {
        for(int c = 1 ; c <= r; c++)
        {
            printf("* ");
        }
    
    printf("\n");
    }
    return 0;
}
