#include <stdio.h>
int main(void)
{
int num,a,rem,rev=0;
scanf("%d",&num);
a=num;
while(num!=0)
{
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
}
if(a==rev)
printf("palindrome");
else
printf("not a palindrome");
	return 0;
}
