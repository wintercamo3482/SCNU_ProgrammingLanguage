#include <stdio.h>
#include <stdint.h>

#define SIZE 100

struct email
{
	char ac_title[SIZE];
	char ac_sender[SIZE];
	char ac_receiver[SIZE];
	char ac_content[SIZE];
	char ac_date[SIZE];
	uint32_t u32_pri;
};

int main(void)
{
	struct email st_email = { "안부 메일", "chulsoo@hankuk.ac.kr", "hsh@hankuk.ac.kr", "안녕하십니까? 새해 복 많이 받으세요.", "2023/1/1", 1 };

	printf("제목: %s\n", st_email.ac_title);
	printf("발신자: %s\n", st_email.ac_sender);
	printf("수신자: %s\n", st_email.ac_receiver);
	printf("내용: %s\n", st_email.ac_content);
	printf("날짜: %s\n", st_email.ac_date);
	printf("우선순위: %d\n", st_email.u32_pri);

	return 0;
}