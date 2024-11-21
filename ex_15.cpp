#define _CRT_SECURE_NO_WARNINGS

// 하노이의 탑 문제
#include <stdio.h>

void hanoi_tower(int n, char from, char tmp, char to);

int main(void)
{
    hanoi_tower(4, 'A', 'B', 'C');
    
    return 0;
}

void hanoi_tower(int n, char from, char tmp, char to)
{
    if (n == 1)
    {
        printf("원판 1을 %c에서 %c으로 옮긴다.\n", from, to);
    }
    else
    {
        hanoi_tower(n - 1, from, to, tmp);
        printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to);
        hanoi_tower(n - 1, tmp, from, to);
    }
}
