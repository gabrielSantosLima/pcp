
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX INFINITY

int k, l, n, m, r, r1, r2, i, j;
char aux;

int main()
{
  scanf("%d %d", &n, &m);
  scanf("%d %d", &k, &l);
  int t[n][m];
  for (i = 0; i < n; i++)
  {
    scanf(" %c", &aux);
    if (aux == '.')
      t[i][0] = 0;
    else
      t[i][0] = 1;
    for (j = 1; j < m; j++)
    {
      scanf("%c", &aux);
      if (aux == '.')
        t[i][j] = 0;
      else
        t[i][j] = 1;
    }
  }
  r = 0;
  for (i = 0; i < n; i += k)
  {
    for (j = 0; j < m; j += l)
    {
      if (t[i][j] == 0)
    }
    printf("\n");
  }

  return 0;
}
