#include <stdio.h>
int main()
{
   float bsal,serv,nsal,bonus,sale;
   char city;
   printf("Enter basic salary:");
   scanf("%f",&bsal);
   printf("Enter monthly sale:");
   scanf("%f",&sale);
   printf("Enter service years:");
   scanf("%f",&serv);
   printf("Enter the city(enter 'C' if working in Colombo):");
   scanf(" %c",&city);
  {
   if(sale<25000)
    bonus=sale*0.10;
   if(25000<=sale<50000)
    bonus=sale*0.12;
   if(sale>50000)
    bonus=sale*0.15;

   nsal=bsal+bonus;

   if(serv>5)
    nsal= nsal+bsal*0.10;
   if(city=='C')
    nsal=nsal+2500;

    printf("New salary: %.2f",nsal);


}
}
