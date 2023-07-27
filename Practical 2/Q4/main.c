#include <stdio.h>
int main()
{
	float cel,fah;
	printf("Enter Fahrenheit value");
	scanf("%f",&fah);
	cel=5.0/9.0*(fah-32.0);
	printf("Celsius value is %f",cel);
}
