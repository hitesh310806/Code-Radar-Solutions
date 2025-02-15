#include<stdio.h>
int main()
{
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
         case'+':
         printf("%d %d",a+b);
         break;
         case'-':
         printf("%d %d",a-b);
         break;
         case'*':
         printf("%d %d",a*b);
         break;
                     if (b != 0) {
                printf("%d / %d = %.2f\n", a, b, (float)a / b); // Use float for division result
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            break;
    }

    return 0;
}