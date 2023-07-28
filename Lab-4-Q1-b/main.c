#include <stdio.h>
int main()
{
   int num,mod;
   printf("Enter the number");
   scanf("%d",&num);
   mod=num%2;
   //if(mod=0)
    //printf("%d is an even number",num);
   //else
    //printf("%d is an odd number",num);
    switch(mod)
    {
        case 0:printf("%d is an even number",num);break;
        case 1:printf("%d is an odd number",num);break;
        default:printf("Invalid numerical number");
    }
}
