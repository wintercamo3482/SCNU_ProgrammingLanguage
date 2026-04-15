#include <stdio.h>
#include <string.h>

typedef enum
{
	COMIC,
	SF,
	DOCU,
	DRAMA,
} GENRE;

const char* GenreToStr[] = { "COMIC", "SF", "DOCU", "DRAMA" };

struct book {
	char title[100];
	char author[100];
	GENRE type;
};

int equal_author(struct book b1, struct book b2)
{
	int s32_ret = 0;
	do
	{
		if (strcmp(b1.author, b2.author) == 0)
		{
			s32_ret = 1;
		}

	} while (0);
		
	return s32_ret;
}

int main(void)
{
	struct book st_book1 = { "노인과 바다", "헤밍웨이", DRAMA };
	struct book st_book2 = { "누구를 위하여 종을 울리나", "헤밍웨이", DRAMA };
	
	printf("b1 = { %s, %s, %s }\n", st_book1.title, st_book1.author, GenreToStr[st_book1.type]);
	printf("b1 = { %s, %s, %s }\n", st_book2.title, st_book2.author, GenreToStr[st_book2.type]);
	printf("equal_author()의 반환값: %d\n", equal_author(st_book1, st_book2));

	return 0;
}