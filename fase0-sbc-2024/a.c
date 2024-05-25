
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX INFINITY

int n[3], i;

int main()
{
  int w = 0, x = 0, y = 0;
  for (i = 0; i < 3; i++)
    scanf("%d", &n[i]);

  for (i = 0; i < 3; i++)
    scanf("%d", &n[i]);
  for (i = 0; i < 3; i++)
  {
    if (n[i] == 3)
      y = 1;
    else if (n[i] == 2)
      x = 1;
    else if (n[i] == 1)
      w = 1;
  }
  if (w == 0)
    printf("1\n");
  if (x == 0)
    printf("2\n");
  if (y == 0)
    printf("3\n");

  return 0;
}
