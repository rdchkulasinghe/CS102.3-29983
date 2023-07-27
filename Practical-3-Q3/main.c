#include <stdio.h>
int main()

{
  char empname[5];
  float bs,inc,ns;

  printf("Enter Employee Name");
  scanf("%s",&empname);
  printf("Enter Basic Salary");
  scanf("%f",&bs);
  //process (if)
  if(bs>=10000)
    inc=bs*0.25;
  else
    if(bs>=5000)
    inc=bs*0.10;
    else
    inc=bs*0.05;
//output employee name with new salary
    ns=bs+inc;
printf("Employee name %c\n",empname[5]);
printf("New salary %.f \n",ns);

}
