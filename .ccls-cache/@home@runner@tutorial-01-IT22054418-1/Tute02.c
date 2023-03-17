#include <stdio.h>

int main() 
{
  int d,amo; //d:distance and amo:amount
  printf("enter the distance:");
  scanf("%d",&d);
  if (d <=30 )
  {
    amo = d * 50;
  }
  if (d>30)
  {
    amo = (30 * 50) + ((d-30)*40);
  }
  printf("The amount is : %d", amo);
  return 0;
}
