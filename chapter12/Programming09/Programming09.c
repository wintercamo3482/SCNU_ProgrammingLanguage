#include <stdio.h>
#include <stdint.h>
#include <conio.h>

#define SIZE 20

int main(void)
{
    char ac_password[SIZE];
    
    int32_t s32_i = 0;
    int32_t s32_ch;

    printf("패스워드를 입력하시오: ");

    while (s32_i < sizeof(ac_password) - 1)
    {
        s32_ch = _getch();
        
        if (s32_ch == '\r')
        {
            break;
        }

        ac_password[s32_i] = s32_ch;
        printf("*");
        s32_i++;
    }

    ac_password[s32_i] = '\0';
    
    printf("\n입력된 패스워드는 %s입니다.", ac_password);
        
    return 0;
}