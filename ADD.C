#include <stdio.h>
#include <conio.h>

void main()
{
   int no1, no2, out1,o2,o3,o4,o5;
   clrscr();
   printf("enter input values :");
   scanf("%d%d",&no1,&no2);
   // printf("enter no2:");
   //scanf("%d",&no2);
   out1=no1+no2;
   printf("sum of the values are %d\n",out1);
   o2=no1-no2;
   printf("sub of the values are %d\n",o2);
   o3=no1*no2;
   printf("multiply of the values are %d\n",o3);
   o4=no1/no2;
   printf("divide of the value are %d\n",o4);
   getch();
}
