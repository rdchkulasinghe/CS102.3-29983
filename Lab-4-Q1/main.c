#include <stdio.h>
int main()
{
   int num;
   printf("Enter the number");
   scanf("%d",&num);

   if(num%2==0)
    printf("The integer is even");
   else
    printf("The integer is odd");
}
