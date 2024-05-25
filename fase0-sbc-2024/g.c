#include <stdio.h>
#include <stdlib.h>

int n, k, p = 0;

int main()
{
	scanf("%d %d", &n, &k);
	int a[n];
	int b[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &(a[i]));
	}

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &(b[i]));
	}

	int c = 0;	   // distância atual
	int parou = 0, // flag que identifica se o saci parou
		i = 0,	   // loja destino
		atual = 0; // posição atual
	int dist;

	while (i < n && p != -1)
	{
		dist = a[i] - c;
		if (k >= dist)
		{
			k -= dist;
			if (i == 0)
				c += a[i];
			else
				c += a[i] - a[i - 1];
			atual = i;
			i++;
			parou = 0;
		}
		else
		{
			if (parou)
				p = -1;
			else
			{

				p++;
				if (atual != 0)
					k = b[atual];
				parou = 1;
			}
		}
	}

	printf("%d\n", p);
	return 0;
}