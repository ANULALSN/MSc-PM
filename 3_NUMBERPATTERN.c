#include <stdio.h>
int main()
{
  int i, j, a=0,n;
  printf("Enter the number of rows:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=i;j<n;j++)
    {
      printf (" ");
    }
    for(j=1;j<=i;j++)
    {
      ++a;
      printf ("%d",a);
    }
    a--;
    for(j=1;j<i;j++)
    {
      printf ("%d",a);
      a--;
    }
    printf ("\n");
    a++;
  }
}