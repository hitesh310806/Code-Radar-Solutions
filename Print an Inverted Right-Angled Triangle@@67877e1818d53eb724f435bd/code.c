#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(int r ; r <= a; r++){
        for(int c ; c <= a; c++){
        printf("*");
    }
    printf("/n");
    }
    return 0;
}