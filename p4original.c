#include <stdio.h>

int input_array_size()
{
  int n;
  printf ("Enter array size: \t");
  scanf ("%d",&n);
  return n;
}

void input_array(int n,int a[n])
{
  for (int i=0;i<n;i++)
  {
    printf("Enter the elements: \t");
    scanf("%d",&a[i]);
  }
  
}

int sum_composite_number(int n,int a[n])
{
  int sum=0,composite=0;
  for(int i=0;i<n;i++)
  {
    for (int j=2;j<a[i];j++)
    {
      if(a[i]%j==0)
      composite++;
    }
    if(composite>0)
    sum=sum+a[i];
  }
  return sum;
}

void output(int sum)
{
  printf ("Sum:%d \t",sum);
}

int main()
{
  int x,y;
  x=input_array_size();
  int a[x];
  input_array(x,a);
  y=sum_composite_number(x,a);
  output(y);
  return 0;
}