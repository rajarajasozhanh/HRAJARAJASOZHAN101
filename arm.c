
#include <stdio.h>
#include<conio.h>
int main()
{
int n,orgno,result=0,rem;
printf("enter the no");
scanf("%d",&n);
orgno=n;
while(orgno!=0)
{
rem=(orgno%10);
result=(result*rem*rem*rem);
orgno=(orgno/10);
}
if(result==n)
{
printf("the no. is arms");
}
else
{
printf("the no is not arms");
}
return 0;}
