#include <stdio.h>

int main() {
  int m1,m2;
  float avg;
  printf("enter the marks for paper 1 : ");
  scanf("%d",&m1);
  printf("enter the marks for paper 2 : ");
  scanf("%d",&m2);
  avg = (m1+m2)/2;
  printf("average is : %.1f", avg);
  return 0;
}

