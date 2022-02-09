#include <stdio.h>

int input()
{
  int n;
  printf ("Enter a number: \t");
  scanf ("%d",&n);
  return n;
}

int gcd(int a,int b)
{
  int gcd;
  for (int i=1;i<=a&&i<=b;i++)
  {
    if(a%i==0&&b%i==0)
    gcd=i;
  }
  return gcd;
}

void output(int a,int b,int gcd)
{
  printf ("GCD for the given two numbers %d & %d is %d",a,b,gcd);
}

int main()
{
  int x,y,g;
  x=input();
  y=input();
  g=gcd(x,y);
  output(x,y,g);
  return 0;
}