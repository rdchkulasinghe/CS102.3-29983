#include <stdio.h>
int main()
{
    int fact=1,num,x=1;
    printf("Enter a number");
    scanf("%d",&num);
    while(x<=num)
    {
        fact=x*fact;
        x++;
    }
    printf("The Factorial of %d is %d",num,fact);
}
