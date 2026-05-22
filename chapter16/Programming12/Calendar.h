#ifndef CALENDAR_H
#define CALENDAR_H

#include <stdint.h>

int32_t getDay(int32_t s32_date, int32_t s32_month, int32_t s32_year);
int32_t getLastDay(int32_t s32_month, int32_t s32_year);
void printCalendar(int32_t s32_year, int32_t s32_month);

#endif /* CALENDAR_H */