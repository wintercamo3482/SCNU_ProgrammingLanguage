#include "Calendar.h"

#include <stdio.h>

int main(void)
{
    int32_t s32_year = 0;
    int32_t s32_month = 0;

#ifdef LANG_KOR
    printf("연도를 입력하시오 : ");
#else
    printf("Enter year : ");
#endif
    scanf("%d", &s32_year);

    while (1)
    {

#ifdef LANG_KOR
        printf("월을 입력하시오 : ");
#else
        printf("Enter month : ");
#endif
        
        scanf("%d", &s32_month);

        if (s32_month < 1 || s32_month > 12)
        {
#ifdef LANG_KOR
            printf("[WARN] 잘못된 월을 입력했습니다\n");
#else
            printf("[WARN] entered an incorrect month\n");
#endif
        }
        else
        {
            break;
        }
    }
    
    printCalendar(s32_year, s32_month);

	return 0;
}