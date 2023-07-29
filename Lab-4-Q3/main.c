#include <stdio.h>
int main()
{
float radius;
int op;
printf("enter the radius \n");
scanf("%f" ,&radius);
printf("1.circumference of a circle in 2. volume of spherein 3.Area of circle \n");
printf("enter desired operation");
scanf("%d", &op);
switch(op)
{
    case 1:printf("circumference of a circle is %.2f",radius*2.0*3.14); break;
    case 2:printf("volume of sphere is %.2f",(4/8)*3.14*radius*radius*radius);break;
    case 3:printf("area of a circle is %.2f",3.14*radius*radius);break;
    default:printf("unknown operation");
}
}
