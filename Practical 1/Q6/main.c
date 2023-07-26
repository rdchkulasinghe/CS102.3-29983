#include<stdio.h>
main()
{
    //declaring variables
    int byear,age;
    //input the birth year
    char stname[20];
    printf("Enter name");
    scanf("%s",&stname);
    printf("Enter birth year");
    scanf("%d",&byear);
    age=2023-byear;
    printf("Student name is %s \n",stname);
    printf("Age is %d\n",age);
}

