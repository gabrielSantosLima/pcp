
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 100000

int n, i;

typedef struct TREE
{
  int k;
  char s[12];
  struct TREE *l;
  struct TREE *r;
} TREE;

TREE *create(char *str)
{
  TREE *tree = (TREE *)malloc(sizeof(TREE));
  tree->l = NULL;
  tree->r = NULL;
  tree->k = 1;
  strcpy(tree->s, str);
  return tree;
}

void add_update(TREE *tree, char *str, int m)
{
  if (tree == NULL)
    return;
  int c = strcmp(str, tree->s);
  if (c == 0)
  {
    if (m == 1)
    {
      tree->k = -1;
    }
    else if (tree->k != -1)
      tree->k++;
    return;
  }
  else if (c > 0)
  {
    if (tree->r == NULL)
    {
      tree->r = create(str);
      if (m == 1)
        tree->r->k = -1;
      return;
    }
    add_update(tree->r, str, m);
    return;
  }
  if (tree->l == NULL)
  {
    tree->l = create(str);
    if (m == 1)
      tree->l->k = -1;
    return;
  }
  add_update(tree->l, str, m);
}
void print_murder(TREE *tree)
{
  if (tree == NULL)
    return;
  print_murder(tree->l);
  if (tree->k > 0)
    printf("%s %d\n", tree->s, tree->k);
  print_murder(tree->r);
}

int main()
{
  char buff[12];
  char buff2[12];
  TREE *tree = NULL;
  while (scanf("%s %s", buff, buff2) != EOF)
  {
    if (tree == NULL)
    {
      tree = create(buff);
      add_update(tree, buff2, 1);
    }
    else
    {
      add_update(tree, buff, 0);
      add_update(tree, buff2, 1);
    }
  }
  printf("HALL OF MURDERERS\n");
  print_murder(tree);
  return 0;
}
