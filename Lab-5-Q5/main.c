#include <stdio.h>
int main()
{
    int num,sum,digit;
    printf("Enter a number");
    scanf("%d",&num);
    do
    {
        digit=num%10;
        printf("%d",digit);
        num=num/10;
    }
    while(num>0);
}
