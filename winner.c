#include "Bingo.h"
void winner(int winner)
{
    switch (winner) {
    case 1:printf("�١� Player WIN �ڡ�\n"); break;
    case 2:printf("�� Computer WIN ��\n"); break;
    case 3:printf("�� DRAW ��\n"); break;
    default:printf("Error\n"); break;
    }
}