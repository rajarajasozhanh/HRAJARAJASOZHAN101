#include<stdio.h>
void main()
{
int a,flag=0,i;
printf("enter the number");
scanf("%d",&a);
for(i=0;i<a/2;i++)
{
if(a%2==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("prime");
}
else
{
printf("not prime");
}
}
