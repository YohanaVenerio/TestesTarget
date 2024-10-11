/*Autor....: Yohana Venério
* Data.....: 10/10/24
* Objetivo.: Programa que valida o número lido e retorna se o mesmo pertence
* ou não a sequência.*/
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
    printf("SEQUENCIA FIBONNACI");
    gotoxy(64, 03);
    printf("Yohana Venerio");
}

int main()
{
    tela();
    //Daclaração das Variáveis
    int x=0;
    int y=1;
    int j;
    int z=0;
    int num;

    //Atribui valor a VR
    gotoxy(20,12);
    printf("Digite o numero que deseja consultar : ");
    gotoxy(59,12);
    scanf("%d", &num);

    //Estrutura de repetição que calcula a seuquência
    for(int i=0;i<num;i++)
    {
        if(num == x || num == y){
            z=1;
        }
        j = x;
        x = y;
        y = j + y;
    }
    
    //Saída da resposta adequada
    switch (z)
    {
    case 0:
        gotoxy(20,16);
        printf("O numero %d nao pertence a Sequencia Fibonnaci.", num);
        break;
    case 1:
        gotoxy(20,16);
        printf("O numero %d pertence a Sequencia Fibonnaci.", num);
        break;
    }

    //Posiciona o cursor fora da tela(enfeite)
    gotoxy(1,25);
    printf(" ");

    return 0;
}