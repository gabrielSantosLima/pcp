
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 1000
int n, i, r, j, k, e, d, tmp;
int a[MAX];

int main()
{
  scanf("%d", &n);
  while (n > 0)
  {
    r = -1;
    scanf("%d", &a[i]);
    tmp = a[i];
    d = a[i];
    int p[tmp];
    for (j = 0; j < tmp; j++)
      p[j] = j + 1;
    for (j = 1; j < tmp; j++)
    {
      for (k = j + 1; k < tmp && p[j] > 0; k++)
      {
        if (p[k] > 0 && p[k] % p[j] == 0)
        {
          --d;
          p[k] = -p[k];
        }
      }
    }
    int pp[d];
    e = 0;
    for (j = 0; j < tmp; j++)
    {
      if (p[j] > 1)
        p[j] = 0;
      else
      {
        if (p[j] == 1)
          pp[e] = 1;
        else
          pp[e] = -p[j];
        e++;
      }
    }
    d = d - 1;
    e = 0;
    int aux = 0, aux2 = 0;
    while (e < d)
    {
      if (pp[e] <= 0)
        e++;
      else if (pp[d] <= 0 || pp[d] == tmp)
        d--;
      else
      {
        if (pp[e] + pp[d] > tmp)
          d--;
        else if (pp[e] + pp[d] < tmp)
          e++;
        else
        {
          aux = e;
          aux2 = d;
          e++;
          d--;
        }
      }
    }

    if (pp[aux] + pp[aux2] == tmp)
      printf("%d %d\n", pp[aux], pp[aux2]);
    else
      printf("-1\n");
    n--;
  }
  return 0;
}
