#include<stdio.h>
float input()
float my_sqrt(float n)
{
  float guess=x/2;
  float next=x/guess;
  while(fabs(guess-next)>0.000001);
  {
    guess=(guess+next/2);
    next=x/guess;
  }
  return next;
}

void output(float n,float sqrt_result)
{
  printf("Square root of %f is %f",n,sqrt);
}

int main()
{
float n,sqrt;
n=my_sqrt();
output(n,sqrt);
return 0;
}