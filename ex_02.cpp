#include<stdio.h>

void inc(int counter);

int main(void)
{
    int i;
    i=10;
    printf("함수호출전i=%d\n",i);
    inc(i);
    printf("함수호출후i=%d\n",i);
    return 0;
}

void inc(int counter)
{ 
    counter++; 
} 