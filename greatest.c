
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter the value of c:");
    scanf("%d",&c);
  if(a>b&&a>c)
  {
      printf("the number %d is greatest among 3 numbers",a);
  }
  else if(b>a&&b>c)
  {
  printf("the number %d is greatest among 3 numbers",b);
  }
  else 
  printf("the number %d is greatest among 3 numbers",c);
}
