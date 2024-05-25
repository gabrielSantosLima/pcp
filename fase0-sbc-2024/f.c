
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX INFINITY

int k, l, n, m, r1, r2, i, j;
char aux;

int main()
{
  scanf("%d %d", &n, &m);
  scanf("%d %d", &r1, &r2);
  int t[n][m];
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%c", aux);
      if (aux == '.')
        t[i][j] = 0;
      else
        t[i][j] = 1;
    }
  }
  return 0;
}
