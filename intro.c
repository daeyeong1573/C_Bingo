#include "Bingo.h"
int intro()
{
    int a;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (7, 13));
    printf("\t\t\t\t\t������������������������������ \n");
    printf("\t\t\t\t\t��  ! BINGO !  �� \n");
    printf("\t\t\t\t\t������������������������������ \n");
    printf("\t\t\t\t\t    1. ���� ����\n\n");
    printf("\t\t\t\t\t 2. GAME GUIDE\n\n");
    printf("\t\t\t\t\t  3. GAME END\n\n");
    printf("\t\t\t\t     �� PUSH THE NUMBER  : ");
    scanf("%d", &a);
    return a;
}