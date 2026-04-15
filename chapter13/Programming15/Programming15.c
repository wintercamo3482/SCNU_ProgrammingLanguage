#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define MAX_TITLE	64
#define MAX_NAME	64
#define MAX_BOOK	100

struct book
{
	uint32_t u32_id;
	char ac_title[MAX_TITLE];
	char ac_authorName[MAX_NAME];
};

void PrintMenu()
{
	printf("====================\n");
	printf("1. 도서 번호로 책 찾기\n");
	printf("2. 저자 이름으로 책 찾기\n");
	printf("3. 제목으로 책 찾기\n");
	printf("4. 새로운 책 추가\n");
	printf("5. 도서관이 소장한 도서의 수 표시\n");
	printf("====================\n");
}

int32_t SearchBookWithNumber(const struct book ast_bookList[], uint32_t u32_count)
{
	int32_t s32_ret = -1;

	do
	{
		uint32_t us32_bookNumber = 0;

		if (ast_bookList == NULL || u32_count == 0)
		{
			printf("[ERROR] 검색할 책이 없습니다.\n");
			break;
		}

		printf("도서 번호를 입력하시오: ");
		scanf(" %u", &us32_bookNumber);

		for (uint32_t u32_i = 0; u32_i < u32_count; u32_i++)
		{
			if (ast_bookList[u32_i].u32_id == us32_bookNumber)
			{
				printf("도서 번호:%d\n", ast_bookList[u32_i].u32_id);
				printf("저자 이름:%s\n", ast_bookList[u32_i].ac_authorName);
				printf("제목:%s\n", ast_bookList[u32_i].ac_title);
				s32_ret = 0;
				break;
			}
		}

		if (-1 == s32_ret)
		{
			printf("[ERROR] 찾으려는 책 번호 %d 가 존재하지 않습니다.\n", us32_bookNumber);
			break;
		}

	} while (0);

	return s32_ret;
}

int32_t SearchBookWithAuthor(const struct book ast_bookList[], uint32_t u32_count)
{
	int32_t s32_ret = -1;

	do
	{
		char ac_inputName[MAX_NAME] = { 0 };

		if (ast_bookList == NULL || u32_count == 0)
		{
			printf("[ERROR] 검색할 책이 없습니다.\n");
			break;
		}

		printf("저자 이름을 입력하시오: ");
		gets_s(ac_inputName, sizeof(ac_inputName));

		for (uint32_t u32_i = 0; u32_i < u32_count; u32_i++)
		{
			if (0 == strcmp(ast_bookList[u32_i].ac_authorName, ac_inputName))
			{
				printf("도서 번호:%d\n", ast_bookList[u32_i].u32_id);
				printf("저자 이름:%s\n", ast_bookList[u32_i].ac_authorName);
				printf("제목:%s\n", ast_bookList[u32_i].ac_title);
				s32_ret = 0;
				break;
			}
		}

		if (-1 == s32_ret)
		{
			printf("[ERROR] 찾으려는 저자 %s 가 존재하지 않습니다.\n", ac_inputName);
			break;
		}

	} while (0);

	return s32_ret;

}

int32_t SearchBookWithTitle(const struct book ast_bookList[], uint32_t u32_count)
{
	int32_t s32_ret = -1;

	do
	{
		char ac_inputTitle[MAX_TITLE] = { 0 };

		if (ast_bookList == NULL || u32_count == 0)
		{
			printf("[ERROR] 검색할 책이 없습니다.\n");
			break;
		}

		printf("제목을 입력하시오: ");
		gets_s(ac_inputTitle, sizeof(ac_inputTitle));

		for (uint32_t u32_i = 0; u32_i < u32_count; u32_i++)
		{
			if (0 == strcmp(ast_bookList[u32_i].ac_title, ac_inputTitle))
			{
				printf("도서 번호:%d\n", ast_bookList[u32_i].u32_id);
				printf("저자 이름:%s\n", ast_bookList[u32_i].ac_authorName);
				printf("제목:%s\n", ast_bookList[u32_i].ac_title);
				s32_ret = 0;
				break;
			}
		}

		if (-1 == s32_ret)
		{
			printf("[ERROR] 찾으려는 책 %s 가 존재하지 않습니다.\n", ac_inputTitle);
			break;
		}

	} while (0);

	return s32_ret;
}

int32_t AddBook(struct book ast_bookList[], uint32_t* pu32_count, uint32_t u32_maxCount)
{
	int32_t s32_ret = -1;

	do
	{
		struct book st_book;
		memset(&st_book, 0, sizeof(st_book));

		if (ast_bookList == NULL || pu32_count == NULL)
		{
			break;
		}

		if (*pu32_count >= u32_maxCount)
		{
			printf("[ERROR] DB에 더 이상 저장할 수 없습니다.\n");
			break;
		}

		printf("도서 번호:");
		scanf(" %u", &st_book.u32_id);
		getchar();

		printf("저자 이름:");
		gets_s(st_book.ac_authorName, sizeof(st_book.ac_authorName));

		printf("제목:");
		gets_s(st_book.ac_title, sizeof(st_book.ac_title));

		ast_bookList[*pu32_count] = st_book;
		++(*pu32_count);
		s32_ret = 0;

	} while (0);

	return s32_ret;
}

void PrintBookNum(const uint32_t u32_bookCount)
{
	printf("[INFO ] 도서관이 소장한 도서의 수는 %d 권 입니다.\n", u32_bookCount);
}

int main(void)
{
	int32_t s32_select = 0;
	static uint32_t u32_bookCount = 0;

	static struct book ast_bookList[MAX_BOOK];
	memset(&ast_bookList, 0, sizeof(ast_bookList));

	while (1)
	{
		PrintMenu();

		printf("메뉴 중 하나를 선택하시오:");
		scanf(" %d", &s32_select);
		getchar();

		switch (s32_select)
		{
		case 1:
			SearchBookWithNumber(ast_bookList, u32_bookCount);
			break;

		case 2:
			SearchBookWithAuthor(ast_bookList, u32_bookCount);
			break;

		case 3:
			SearchBookWithTitle(ast_bookList, u32_bookCount);
			break;

		case 4:
			if (-1 == AddBook(ast_bookList, &u32_bookCount, MAX_BOOK))
			{
				printf("[ERROR] 책 추가에 실패했습니다.\n");
			}

			break;

		case 5:
			PrintBookNum(u32_bookCount);
			break;

		default:
			return 0;
		}
	}

	return 0;
}