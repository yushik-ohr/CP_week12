#include <stdio.h>

int sum = 1; // 전역변수

int main(void)
{
    int sum = 0; // 지역변수
    printf("sum = %d\n", sum); 
    return 0;
}
