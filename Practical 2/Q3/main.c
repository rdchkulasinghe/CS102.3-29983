#include <stdio.h>
int main()
{
	int dis,time,avg;
	printf("Enter Distance");
	scanf("%d",&dis);
	printf("Enter Time");
	scanf("%d",&time);
	avg=dis/time;
	printf("Average speed is %d ",avg);
}
