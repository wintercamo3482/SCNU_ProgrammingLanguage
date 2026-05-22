#include "Calendar.h"

#include <time.h>

int32_t getDay(int32_t s32_date, int32_t s32_month, int32_t s32_year)
{
	int32_t as32_t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };

	s32_year -= s32_month < 3;

	return (s32_year + s32_year / 4 - s32_year / 100 + s32_year / 400 + as32_t[s32_month - 1] + s32_date) % 7;
}

int32_t getLastDay(int32_t s32_month, int32_t s32_year)
{
    switch (s32_month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
        
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
        
    case 2:
        if ((s32_year % 4 == 0 && s32_year % 100 != 0) ||
            (s32_year % 400))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    default:
        return 0;
    }
}

void printCalendar(int32_t s32_year, int32_t s32_month)
{
    int32_t s32_firstDay = getDay(1, s32_month, s32_year);
    int32_t s32_lastDay = getLastDay(s32_month, s32_year);

#ifdef LANG_KOR
    printf("일\t월\t화\t수\t목\t금\t토\n");
#else
    printf("SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
#endif

    for (int32_t s32_i = 0; s32_i < s32_firstDay; s32_i++)
    {
        printf("\t");
    }

    for (int32_t s32_i = 1; s32_i <= s32_lastDay; s32_i++)
    {
#ifdef LANG_KOR
        printf("%2d\t", s32_i);
#else
        printf("%3d\t", s32_i);
#endif
        if ((s32_firstDay + s32_i) % 7 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}