#include "Bingo.h"

int main()
{
	switch (intro()) {
	case 1:game5x5(); break;
	case 2:guide(); break;
	case 3:return 0; break;
	default:printf("제대로 입력해주세요");
	}
}
