#include <stdiod.h>
void main()
{
    long long p;
    int count=0;
    printf("enters an integer");
    scanf("%d lld", &p);
    while(p!=0)
    {
        p/ =10;
        ++ count;
    }
    printf("numbers of digits; %d, count");
    return 0;
    }
