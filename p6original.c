#include <stdio.h>
#include <string.h>

void input_string(char *a)
{
  printf("Enter the string: \t");
  scanf("%s",a);
}

char str_reverse(char *a,char *b)
{
  int n;
  n=strlen(a);
  int j=n-1;
  for(int i=0;i<n;i++)
    {
      b[j]=a[i];
      j--;
    }
}

void output(char *a,char *b)
{
  printf("The reverse of %s is %s \n",a,b);
}

int main()
{
  char str[100];
  input_string(str);
  char rev_str[100];
  str_reverse(str,rev_str);
  output(str,rev_str);
  return 0;
}

