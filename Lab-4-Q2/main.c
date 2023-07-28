#include <stdio.h>
int main()
{
   int a,b;
   char calcu;
   printf("Enter two numbers\n");
   scanf("%d, %d",&a,&b);
   printf("Enter desired operator");
   scanf(" %c",&calcu);
   switch(calcu)
   {
       case '+':printf("addition is %d",a+b);break;
       case '-':printf("substraction is %d",a-b);break;
       case '/':printf("division is %d",a/b);break;
       case '*':printf("multiplication is %d",a*b);break;


       default:printf("Unknown operator");
   }
}
