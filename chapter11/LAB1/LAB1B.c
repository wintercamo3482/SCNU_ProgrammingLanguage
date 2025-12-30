#include <stdint.h>

int main(void)
{
    int i;

    while(1) {
        *(volatile char*)0x30000000 |= 0x1;
        for (i = 0; i < 100000; i++);     // 시간 지연 루프
        *(volatile char*)0x30000000 &= ~(0x1);
        for (i = 0; i < 100000; i++);     // 시간 지연 루프
    }
    return 0;
}