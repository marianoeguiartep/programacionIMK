#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define filas 10
#define columnas 10
#define minas 10

int campo[filas][columnas];
int campo2[filas][columnas];

void iniciarJuego()
{
	int x, y, i;
	for (x = 0; x < filas; x++)
	{
		for (y = 0; y < columnas; y++)
		{
			campo[x][y] = 0;
			campo2[x][y] = 0;
		}
	}
	

	srand(time(NULL));
	for (i = 0; i < minas; i++)
	{
		x = rand() % filas;
		y = rand() % columnas;

		if (campo[x][y] != -1)
		{
			campo[x][y] = -1;
			
			if (x > 0)
			{
				if (campo[x-1][y] != -1)
					campo[x-1][y]++;
				if (y > 0 && campo[x-1][y-1] != -1)
					campo[x-1][y-1]++;
				if (y < columnas-1 && campo[x-1][y+1] != -1)
					campo[x-1][y+1]++;
			}
			if (x < filas-1)
			{
				if (campo[x+1][y] != -1)
					campo[x+1][y]++;
				if (y > 0 && campo[x+1][y-1] != -1)
					campo[x+1][y-1]++;
				if (y < columnas-1 && campo[x+1][y+1] != -1)
					campo[x+1][y+1]++;
			}
			if (y > 0 && campo[x][y-1] != -1)
				campo[x][y-1]++;
			if (y < columnas-1 && campo[x][y+1] != -1)
				campo[x][y+1]++;
		}
		else
		{
			i--;
		}
	}
}

void Juego()
{
	int x, y;
	printf("  ");
	for (x = 0; x < columnas; x++)
		printf("%2d ", x);
	printf("\n");
	for (x = 0; x < filas; x++)
	{
		printf("%2d ", x);
		for (y = 0; y < columnas; y++)
		{
			if (campo2[x][y])
			{
				if (campo[x][y] == -1)
					printf("*  ");
				else
					printf("%d  ", campo[x][y]);
			}
			else
				printf(".  ");
		}
		printf("\n");
	}
}

int casillas(int x, int y)
{
	if (x < 0 || x >= filas || y < 0 || y >= columnas || campo2[x][y])
	{
		return 0;
	}
	campo2[x][y] = 1;
	if (campo[x][y] == 0)
	{
		casillas(x-1, y);
		casillas(x+1, y);
		casillas(x, y-1);
		casillas(x, y+1);
	}
	return campo[x][y];
}

int main(void)
{
	iniciarJuego();
	
	int x, y, result;
	while (1)
	{
		Juego();
		
		printf("Enter the coordinates y: ");
		scanf("%d", &x);
        printf("Enter the coordinates x: ");
		scanf("%d", &y);
		
		result = casillas(x, y);
		if (result == -1)
		{
			printf("Perdiste! :c \n");
			break;
		}
	}
	
	return 0;
}

// trabajo realizado por Mariano Eguiarte  y Leonardo Contreras //