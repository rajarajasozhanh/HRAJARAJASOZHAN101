#include<stdio.h>
void main()
{
    int x,y,z;
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("enter the value of y:");
    scanf("%d",&y);
    printf("enter the value of z:");
    scanf("%d",&z);
  if(x>y&&x>z)
  {
      printf("the number %d is greatest among 3 numbers",x);
  }
  else if(y>x&&y>z)
  {
  printf("the number %d is greatest among 3 numbers",y);
  }
  else 
  printf("the number %d is greatest among 3 numbers",z);
}
