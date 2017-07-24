#include<stdio.h>

long long int fib(int n)
{

  long long int f[n+1];
 int i;

  f[0] = 0;
  f[1] = 1;

  for (i = 2; i <= n; i++)
  {
      f[i] = (f[i-1] + f[i-2])% 1000000007;
  }

  return f[n];
}

int main ()
{
  int t,i;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
      int n;
      scanf("%d",&n);
      n=n+2;
  printf("%lld\n", fib(n));

  }
  return 0;
}
