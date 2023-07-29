#include <stdio.h>
int main()
{
    int base,expo,power=1;
    printf("Enter the base");
    scanf("%d",&base);
    printf("Enter the exponent");
    scanf("%d",&expo);
    while(expo>0)
    {
        power=base*power;
        expo--;
    }
    printf("The power is %d",power);

}
