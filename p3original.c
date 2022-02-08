#include <stdio.h>

int input_number()
{
  int n;
  printf("Enter a number: \t");
  scanf("%d",&n);
  return n;
}

int is_composite(int n)
{
  int composite;
  composite=0;
  for (int i=2;i<n;i++)
  {
    if (n%i==0)
    composite++;
  }
  return composite;
}

void output(int n,int composite)
{
  if (composite>0)
  printf("%d is a composte number.\n",n);
  else
  printf("%d is not a composite number. \n",n);
}
int main()
{
  int x,cs;
  x=input_number();
  cs=is_composite(x);
  output(x,cs);
  return 0;
}