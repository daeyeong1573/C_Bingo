#include "Bingo.h"
void game5x5() {
    int num, uw = 0, cw = 0;
    initialize();
    system("cls");
    do {
        printf("��������������������������  User �������������������������������� \n");
        print_bingo(ubingo);
        printf("������������������������������������������������������������������������\n");
        num = get(0);
        erase_bingo(ubingo, num);
        erase_bingo(cbingo, num);
        num = get(1);
        erase_bingo(ubingo, num);
        erase_bingo(cbingo, num);
        //���� �ϼ� Ȯ��
        uw = out(ubingo);
        cw = out(cbingo);
    } while ((cw == 0) && (uw == 0));
    printf("��������������������   User result ���������������������� \n"); print_bingo(ubingo);
    printf("������������������������������������������������������������������������\n");
    printf("����������������   Computer result ������������������ \n"); print_bingo(cbingo);
    printf("������������������������������������������������������������������������\n");

    winner(cw * 2 + uw);
}
