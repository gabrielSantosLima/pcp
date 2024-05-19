
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 1000001

int n, i, m, r, k, v, aux;

typedef struct NODE
{
  int i;
  struct NODE *p;
} NODE;

NODE *a[MAX];
int main()
{
  while (scanf("%d %d", &n, &m) != EOF)
  {
    for (i = 0; i < n; i++)
    {
      scanf("%d", &aux);
      NODE *no = (NODE *)malloc(sizeof(NODE));
      no->i = i + 1;
      no->p = NULL;
      NODE *noaux = a[aux];
      if (noaux == NULL)
        a[aux] = no;
      else
      {
        while (noaux->p != NULL)
          noaux = noaux->p;
        noaux->p = no;
      }
    }
    r = 0;

    while (m != 0)
    {
      scanf("%d %d", &k, &v);
      NODE *no = a[v];
      r = 0;
      while (no != NULL && k != 0)
      {
        if (k - 1 == 0)
          r = no->i;
        k--;
        no = no->p;
      }
      printf("%d\n", r);
      m--;
    }

    for (i = 0; i < MAX; i++)
      a[i] = NULL;
  }
  return 0;
}