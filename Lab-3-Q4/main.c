#include <stdio.h>
int main()
{
    float radius;

    printf("Enter radius");
    scanf("%f",&radius);

    printf("Diameter is %f",radius*2.0);
    printf("Circumference is %f",radius*3.14159*2.0);
    printf("Area is %f",radius*radius*3.14159*2.0);

}
