#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
scanf("%d",&a);
if(a>1)
printf("positive");
else if(a==0)
printf("zero");
else
printf("negative");
getch();
}
