#include <stdio.h>
int main() 
{
  int n,i,sum;//n:number and i:loop counter
  printf("enter the number:");
  scanf("%d",&n);
  for(i=1; i<n; ++i)
  {
  	sum = sum +i+1;
  }
  printf("the sum of number '%d' is : %d" ,n,sum);
  
  return 0;
}
