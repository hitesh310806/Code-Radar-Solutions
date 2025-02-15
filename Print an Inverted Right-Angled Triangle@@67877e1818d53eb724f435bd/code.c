#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    r=1;
    c=1;
    for(r<=a;r++){
        for(c<=a;c++)
        printf("*");
    }
    printf("/n");
    return 0;
}