#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int b=1;b<=a;b++){
        for(int c=0;c<=b;c+b)
        printf("*");
    }
    printf("\n");
    return 0;
}