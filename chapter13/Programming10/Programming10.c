#include <stdio.h>
#include <stdint.h>

#define MAX_NAME		64
#define MAX_PHONE		13
#define MAX_EMPLOYEE	10

typedef struct
{
	uint32_t u32_id;
	char ac_name[MAX_NAME];
	char ac_phone[MAX_PHONE];
	uint32_t u32_age;
} type_employee;

int main(void)
{
	type_employee st_employees[MAX_EMPLOYEE] = {
		{ 1, "È«±æµ¿1", "010-1111-1111", 20 },
		{ 2, "È«±æµ¿2", "010-2222-2222", 25 },
		{ 3, "È«±æµ¿3", "010-3333-3333", 31 },
		{ 4, "È«±æµ¿4", "010-4444-4444", 32 },
		{ 5, "È«±æµ¿5", "010-5555-5555", 33 },
		{ 6, "È«±æµ¿6", "010-6666-6666", 34 },
		{ 7, "È«±æµ¿7", "010-7777-7777", 35 },
		{ 8, "È«±æµ¿8", "010-8888-8888", 23 },
		{ 9, "È«±æµ¿9", "010-9999-9999", 29 },
		{ 10, "È«±æµ¿10", "010-1010-1010", 19 },
	};

	for (int32_t s32_i = 0; s32_i < MAX_EMPLOYEE; s32_i++)
	{
		if (st_employees[s32_i].u32_age >= 20 && st_employees[s32_i].u32_age <= 30)
		{
			printf("ÀÌ¸§: %s ³ªÀÌ =%d\n", st_employees[s32_i].ac_name, st_employees[s32_i].u32_age);
		}
	}

	return 0;
}