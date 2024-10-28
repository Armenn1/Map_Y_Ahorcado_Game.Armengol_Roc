#include <iostream>
#include <string.h>

int main()
{
    char map[10][10];
    int vidas = 3;
    int move;
    int continuar;

    int posX = 0;
    int posY = 0;

    int retoX = 4;
    int retoY = 4;

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
        int lposX;
        int lposY;
        lposX = posX;
        lposY = posY;

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
            break;

        default:
            printf("Movimiento invalido!\n");
            break;
        }
        
        map[posX][posY] = 'X';  
        map[lposX][lposY] = '_';    

        for (int i = 0; i < 10; i++)
        {
            printf("\n");
            for (int j = 0; j < 10; j++)
            {
                printf("%c ", map[i][j]);
            }
        }

        if (posX == retoX && posY == retoY)
        {
            printf("\nFelicidades, has llegado al reto!\n");
            
            char cadena[100];
            char cadena2[100];
            char letra;

            printf("Dame una palabra:\n");
            scanf_s("%d", &letra);//saltar el \n
            gets_s(cadena);

            int tam = strlen(cadena);

            for (int i = 0; i < tam; i++)
            {

                cadena2[i] = '_';
                printf("%c", cadena2[i]);
            }
            do
            {
                int letra_correcta = 0;
                printf("\n Dame una letra: \n");
                scanf_s("%c", &letra, 1);
                getchar();

                for (int i = 0; i < tam; i++)
                {
                    if (letra == cadena[i])
                    {
                        cadena2[i] = cadena[i];
                        letra_correcta = 1;


                    }
                    printf("%c", cadena2[i]);
                }      
                if (letra_correcta == 0)
                {
                    vidas--;
                    printf("Letra incorrecta, tienes %d vidas!\n", vidas);
                }
            
                printf("\n");

            } while (vidas > 0 && strncmp(cadena, cadena2, tam));

            if (vidas >= 0)
            {
                printf("\nFelicidades adivinaste la palabra: %s\n", cadena);
            }
            else
            {
                printf("\nHas perdido, la palabra correcta era: %s\n", cadena);
            }
            printf("\n");
           
            printf("Quieres seguir jugando?\n");
            printf(" 1. Si\n 2. No\n");
            scanf_s("%d", &continuar);

            if (continuar == 2)
            {
                vidas = 0;
                printf("\nHa terminado el juego!\n");
            }
            else if (continuar == 1)
            {

            }
       
        }

       



    }



    






}