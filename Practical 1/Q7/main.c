#include <stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter First Number");
	scanf("%d",&n1);
	printf("Enter Second Number");
	scanf("%d",&n2);
	printf("Before swapping"
      "n1=%d,n2=%d\n",n1,n2);
	n3=n1;
	n1=n2;
	n2=n3;
	printf("After swapping"
    "n1=%d,n2=%d",n1,n2);
}


