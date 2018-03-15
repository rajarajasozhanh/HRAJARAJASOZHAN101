
#include <stdio.h>
int main()
{
int n,i,a,b,f,originalno,result=0,rem;
printf("enter the min and max no.");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
originalno=i;
while(originalno!=0)
{
rem=originalno%10;
result=result+rem*rem*rem;
originalno=originalno/10;
}
printf("*");
f=153;
if(result==f)
{
printf("the no %d is arms",i);
}

}
return 0;
}
