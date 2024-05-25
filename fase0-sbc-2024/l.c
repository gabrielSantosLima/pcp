
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 10
#define MAX_N 50001

int n, i, j, k;

typedef struct B
{
  int i;
  char buff[MAX];
} A;

A *a[MAX_N];
char buff[MAX];

int main()
{
  scanf("%d", &n);
  i = n;
  for (j = 0; j < MAX_N; j++)
    a[j] = NULL;
  while (i > 0)
  {
    for (j = 0; j < n; j++)
    {
      A *aux = (A *)malloc(sizeof(A));
      scanf("%s", aux->buff);
      a[j] = aux;
    }
    for (j = 0; j < n; j++)
    {
      scanf("%s", buff);
      for (k = 0; k < n; k++)
      {
        if (j != k && strcmp(a[k]->buff, buff) == 0)
        {
          a[k]->i = j;
          k = n + 1;
        }
      }
    }
    for (j = 0; j < n; j++)
      printf("%s", a[k]->buff);
    for (j = 0; j < n; j++)
    {
      int m = 0;
      A *aux;
      scanf("%s", buff);
      for (k = j + 1; k < n; k++)
      {
        if (a[k]->i < m)
        {
          m = a[k]->i;
          aux = a[k];
        }
      }
      printf("%s ", aux->buff);
    }

    i--;
  }
  return 0;
}
