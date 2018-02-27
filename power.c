#include<stdio.h>
int main()
{
	int a,p,s=1,i;
	scanf("%d %d",&a,&p);
	for(i=1;i<=p;i++)
	{
		s=s*a;
	}
	printf("%d",s);
	return 0;
}

