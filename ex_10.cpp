#include <stdio.h>

#define SEED 17

int MULT = 25173;
int INC = 13849;
int MOD = 65536;
static unsigned int seed = SEED; // 난수 생성 시드값

// 정수 난수 생성 함수
unsigned random_i(void)
{
    seed = (MULT * seed + INC) % MOD; // 난수의 시드값 설정
    return seed;
}

// 실수 난수 생성 함수
double random_f(void)
{
    seed = (MULT * seed + INC) % MOD; // 난수의 시드값 설정
    return seed / (double)MOD; // 0.0에서 1.0 사이로 제한
}

int main(void)
{
    int i;
    MOD = 32767;
    
    for (i = 0; i < 10; i++)
    {
        printf("%d ", random_i());
    }
    
    return 0;
}
