/*Autor....: Yohana Venério
* Data.....: 10/10/24
* Objetivo.: Programa que verifica e contabiliza quantas vezes a letra 'A' aparece na frase.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <windows.h>
#include <conio.h>
#include <locale.h>
//Função de posicionamento do cursor
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Função Contrução da Tela
void tela()
{
    system("Color 80"); 
    int lin;
    system("cls");
    for (lin = 1; lin < 25; lin++)
    {
        gotoxy(01, lin);
        printf("|");
        gotoxy(79, lin);
        printf("|");
    }
    gotoxy(01, 01);
    printf("+-----------------------------------------------------------------------------+");
    gotoxy(01, 04);
    printf("+-----------------------------------------------------------------------------+");
    gotoxy(01, 24);
    printf("+-----------------------------------------------------------------------------+");

    gotoxy(30, 03);
    printf("CALCULADORA DE LETRAS");
    gotoxy(64, 03);
    printf("Yohana Venerio");
}

int main() {
    tela();
    //Declaração das Variáveis
    char frase[100];  
    int x = 0;
    
    //Atribui valor VR string
    gotoxy(10,12);
    printf("Digite uma frase: ");
    fflush(stdin);
    fgets(frase,100,stdin);

    //Repetição para contabilizar a aparição da letra
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == 'a' || frase[i] == 'A') {
            x++;
        }
    }

    //Saída da resposta adequada
    if (x > 0) {
        gotoxy(10,16);
        printf("A letra 'A' aparece %d vezes na frase.\n", x);
    } else {
        gotoxy(10,16);
        printf("A letra 'A' nao aparece na frase.\n");
    }

    //Posiciona o cursor fora da tela(enfeite)
    gotoxy(1,25);
    printf(" ");

    return 0;
}