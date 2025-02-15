#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int r=1 ; r <= a; r++){
        for(int c ; c <= r; c++){
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}