#include <stdio.h>

int input_side()
{
  int s;
  printf ("Enter a side:\t");
  scanf ("%d",&s);
  return s;
}

int check_scalene(int a,int b,int c)
{
  int isscalene;
  if(a!=b&&b!=c&&c!=a)
  isscalene=1;
  else
  isscalene=0;
  return isscalene;
}

void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
  printf("Triangle with sides %d,%d & %d is scalene.",a,b,c);
  else 
  printf("Triangle is not scalene.");
}

int main()
{
  int x,y,z,sc;
  x=input_side();
  y=input_side();
  z=input_side();
  sc=check_scalene(x,y,z);
  output(x,y,z,sc);
  return 0;
}