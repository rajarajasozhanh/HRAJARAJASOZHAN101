#include <stdiod.h>
void main()
{
    int l,k,a[100],i,y=0;
    printf("enter the value for l :");
    scanf("%d",&l);
    printf("enter the value of k:");
    scanf("%d",&k);
    printf("enter an array:");
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        y+=a[i];
    }
    printf("%d",y);
}
