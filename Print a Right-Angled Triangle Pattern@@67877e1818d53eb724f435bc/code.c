#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int r = 1;r<=10;r++)
    
        for(int c=1;c<=r;c++)
        
            printf("* ");
        
        printf("\n");
    
    return 0;
}