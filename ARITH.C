#include<stdio.h>
#include<conio.h>
void main ()
{
 void add(),sub(),mul(),div();
 add();
 sub();
 mul();
 div();
 getch();
}
void add()
{
 int a=10,b=5,c;
 c=a+b;
 printf("the addition value is %d\n",c);
}
void sub()
{
 int a=10,b=5,c;
 c=a-b;
 printf("the subtraction value is %d\n",c);
}
void mul()
{
 int a=10,b=5,c;
 c=a*b;
 printf("the multiplication value is %d\n",c);
}
void div()
{
int a=10,b=5,c;
c=a/b;
printf("the division value is %d\n",c);
}
