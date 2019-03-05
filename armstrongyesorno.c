#include<stdio.h>
int main()
{
int n,f,m,l,c;
printf("\n Enter three digit number");
scanf("\n %d",&n);
l=n%10;
m=(n/10)%10
f=n/100;
c=(f*f)+(m*m*m)+(l*l*l);
if(n==c)
printf("\n Armstrong number");
else
printf("\n Not armstrong number");
getch();
return 0;
}
