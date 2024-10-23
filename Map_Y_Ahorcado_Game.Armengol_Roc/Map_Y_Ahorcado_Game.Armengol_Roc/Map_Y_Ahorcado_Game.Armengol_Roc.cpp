#include <iostream>

int main()
{
    char map[10][10];
    int vidas = 3;
    int move;

    int posX = 0;
    int posY = 0;


    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            map[i][j] = '_';
        }
    }

    map[posX][posY] = 'X';
    map[4][4] = 'R';

    while (vidas > 0)
    {
        for (int i = 0; i < 10; i++)
        {
            printf("\n");
            for (int j = 0; j < 10; j++)
            {
                printf("%c ", map[i][j]);
            }
        }

        printf("\n");
        printf("\nTienes % d vidas!\n", vidas);
        printf("1. Moverse Arriba\n 2. Moverse Abajo\n 3. Moverse Izquierda\n 4. Moverse Derecha\n");
        scanf_s("%d", &move);

        switch (move)
        {
        case 1: 
            posX--;
            break;
        case 2: 
            posX++;
            break;
        case 3:
            posY--;
            break;
        case 4: 
            posY++;

        default:
            printf("Movimiento invalido!\n");
            break;
        }
        
        map[posX][posY] = 'X';

        for (int i = 0; i < 10; i++)
        {
            printf("\n");
            for (int j = 0; j < 10; j++)
            {
                printf("%c ", map[i][j]);
            }
        }

        printf("\n");



    }



    






}