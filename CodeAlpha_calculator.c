#include<stdio.h>
#include<conio.h>
int main ()
{
int a,b,c,d;
printf("1 for add\n2 for sub\n3 for mul\n4 for division");
printf("plz enter two numbers");
scanf("%d%d",&a,&b);
printf("plz choose your choice ");
scanf("%d",&d);
switch(d)
{
case 1:
c=a+b;
printf("%d",c);
break;
case 2:
c=a-b;
printf("%d",c);
break;
case 3:
c=a*b;
printf("%d",c);
break;
case 4:
c=a/b;
printf("%d",c);
break;
default:
printf("wrong choice ");
}
getch();
return 0 ;
}
