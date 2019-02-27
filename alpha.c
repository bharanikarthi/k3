#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter the value");
scanf("%d",&n);
if(isalpha(n)==0)
{
printf("the values are not an alphabets");
}
else
{
printf("the values are alphabets");
}
getch();
}
