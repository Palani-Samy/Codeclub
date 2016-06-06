#include<stdio.h>
int main()
{
  int n;
  printf("Enter number:");
  scanf("%d",&n);
  if(n>0)
    printf("positive");
  elseif(n<0)
    printf("negative");
  else
    printf("zero");
  return 0;
}
