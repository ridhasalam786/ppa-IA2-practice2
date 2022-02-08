#include <stdio.h>

void input(float *b,float *h)
{
  printf ("Enter the base and height of the triangle: \t");
  scanf ("%f %f",b,h);
}

void find_area(float b,float h,float *area)
{
  *area=0.5*b*h;
}

void output(float b,float h,float area)
{
  printf ("Area of triangle with base %f and height %f is %f \n",b,h,area);
}

int main()
{
  float x,y,a;
  input(&x,&y);
  find_area(x,y,&a);
  output(x,y,a);
  return 0;
}
