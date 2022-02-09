#include <stdio.h>

int input_array_size()
{
  int n;
  printf ("Enter array size: \t");
  scanf ("%d",&n);
  return n;
}

int is_composite()
{
  int num=0;
  printf ("Enter a number: \t");
  scanf ("%d",&num);
  for (int i=2;i<num;i++)
  {
    if(num%i==0)
    return num;
    else
    continue; 
  }
  return num;
}

void input_array(int n,int a[n])
{
  for (int i=0;i<n;i++)
  {
    a[i]=is_composite();
  }
}

void output_n(int n,int a[n])
{
  for(int i=0;i<n;i++)
  printf ("Elements:%d \t",a[i]);
}

int sum_composite_number(int n,int a[n])
{
  int sum=0;
  for (int i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}

void output(int n,int a[n],int sum)
{
  for (int i=0;i<n;i++)
  printf ("%d+",a[i]);

  printf ("%d=%d \n",a[n-1],sum);
}

int main()
{
  int x,y;
  x=input_array_size();
  int a[x];
  input_array(x,&a[x]);
  output_n(x,&a[x]);
  y=sum_composite_number(x,&a[x]);
  output(x,&a[x],y);
  return 0;
}