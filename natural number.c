#include <stdio.h>
int main()
{
    int i,s,sum=0;
    printf("enter the value of s: ");
    scanf("%d",&s);
    for(i=1;i<=s;i++)
    {
        sum+=i;
    }
    printf("sum of first %d given natural number=%d",s,sum);
    return 0;
}
