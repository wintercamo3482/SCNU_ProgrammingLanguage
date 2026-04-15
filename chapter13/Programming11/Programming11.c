#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define MAX_PEOPLE		3
#define MAX_NAME		64
#define HOME_NUMBER		16
#define PHONE_NUMBER	16

typedef struct
{
	char ac_name[MAX_NAME];
	char ac_homeNum[HOME_NUMBER];
	char ac_phoneNum[PHONE_NUMBER];
} type_phoneBook;

int main(void)
{
	type_phoneBook st_phoneBooks[MAX_PEOPLE];
	char ac_targetName[MAX_NAME];

	memset(st_phoneBooks, 0, sizeof(st_phoneBooks));

	for (int32_t s32_i = 0; s32_i < MAX_PEOPLE; s32_i++)
	{
		printf("이름을 입력하시오: ");
		gets_s(st_phoneBooks[s32_i].ac_name, MAX_NAME);
			
		printf("집전화번호: ");
		gets_s(st_phoneBooks[s32_i].ac_homeNum, HOME_NUMBER);

		printf("휴대폰 번호: ");
		gets_s(st_phoneBooks[s32_i].ac_phoneNum, PHONE_NUMBER);
		
		printf("\n");
	}

	printf("검색할 이름: ");
	gets_s(ac_targetName, MAX_NAME);

	for (int32_t s32_i = 0; s32_i < MAX_PEOPLE; s32_i++)
	{
		if (0 == strcmp(ac_targetName, st_phoneBooks[s32_i].ac_name))
		{
			printf("집전화번호: %s\n", st_phoneBooks[s32_i].ac_homeNum);
			printf("휴대폰 번호: %s\n", st_phoneBooks[s32_i].ac_phoneNum);
		}
	}

	return 0;
}