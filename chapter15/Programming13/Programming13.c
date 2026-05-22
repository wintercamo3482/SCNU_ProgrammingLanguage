#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define MAX_BOOK	100
#define MAX_STR		256

typedef struct
{
	char ac8_title[MAX_STR];
	char ac8_author[MAX_STR];
	char ac8_publisher[MAX_STR];
} Book;

void PrintMenu()
{
	printf("====================\n");
	printf("1. 추가\n");
	printf("2. 검색\n");
	printf("3. 파일로 저장\n");
	printf("4. 파일에서 읽기\n");
	printf("5. 종료\n");
	printf("====================\n");
}

void AddBook(Book ast_books[], int32_t* s32_count)
{
	do
	{
		if (*s32_count >= MAX_BOOK)
		{
			printf("[WARN] 더 이상 책을 추가할 수 없습니다.\n");
			break;
		}

		printf("도서의 이름: ");
		gets_s(ast_books[*s32_count].ac8_title, MAX_STR);
		
		printf("저자: ");
		gets_s(ast_books[*s32_count].ac8_author, MAX_STR);

		printf("출판사: ");
		gets_s(ast_books[*s32_count].ac8_publisher, MAX_STR);

		(*s32_count)++;

	} while (0);
}

void SearchBook(Book ast_books[], int32_t* s32_count)
{
	char ac8_targetName[MAX_STR];
	
	int32_t s32_found = 0;

	printf("도서의 이름을 입력하시오: ");
	gets_s(ac8_targetName, MAX_STR);
	
	for (int32_t s32_i = 0; s32_i < *s32_count; s32_i++)
	{
		if (strstr(ast_books[s32_i].ac8_title, ac8_targetName) != NULL)
		{
			printf("도서의 이름: %s\n", ast_books[s32_i].ac8_title);
			printf("저자: %s\n", ast_books[s32_i].ac8_author);
			printf("출판사: %s\n", ast_books[s32_i].ac8_publisher);

			s32_found = 1;
		}
	}

	if (!s32_found)
	{
		printf("[WARN] %s 검색 결과가 없습니다.\n", ac8_targetName);
	}
}

void SaveBooks(Book ast_books[], int32_t* s32_count)
{
	FILE* fp;

	fp = fopen("books.txt", "w");

	if (fp == NULL)
	{
		fprintf(stderr, "[ERROR] 파일을 생성할 수 없습니다.\n");
		exit(1);
	}
	
	for (int32_t s32_i = 0; s32_i < *s32_count; s32_i++)
	{
		fprintf(fp, "%s\n", ast_books[s32_i].ac8_title);
		fprintf(fp, "%s\n", ast_books[s32_i].ac8_author);
		fprintf(fp, "%s\n", ast_books[s32_i].ac8_publisher);
	}
	
	fclose(fp);
}
void LoadBooks(Book ast_books[], int32_t* s32_count)
{
	FILE* fp;

	fp = fopen("books.txt", "r");

	if (fp == NULL)
	{
		fprintf(stderr, "[ERROR] 파일을 불러올 수 없습니다.\n");
		exit(1);
	}

	*s32_count = 0;

	while (*s32_count < MAX_BOOK
		   && fgets(ast_books[*s32_count].ac8_title, MAX_STR, fp) != NULL
		   && fgets(ast_books[*s32_count].ac8_author, MAX_STR, fp) != NULL
		   && fgets(ast_books[*s32_count].ac8_publisher, MAX_STR, fp) != NULL)
	{
		ast_books[*s32_count].ac8_title[strcspn(ast_books[*s32_count].ac8_title, "\n")] = '\0';
		ast_books[*s32_count].ac8_author[strcspn(ast_books[*s32_count].ac8_author, "\n")] = '\0';
		ast_books[*s32_count].ac8_publisher[strcspn(ast_books[*s32_count].ac8_publisher, "\n")] = '\0';
		(*s32_count)++;
	}
}

int main(void)
{
	Book ast_books[MAX_BOOK];

	int32_t s32_input = 0;
	int32_t s32_bookCount = 0;

	while (1)
	{
		PrintMenu();
	
		printf("정수값을 입력하시오 : ");
		scanf(" %d", &s32_input);
		getchar();

		switch (s32_input)
		{
		case 1:
			AddBook(ast_books, &s32_bookCount);
			break;

		case 2:
			SearchBook(ast_books, &s32_bookCount);
			break;

		case 3:
			SaveBooks(ast_books, &s32_bookCount);
			break;

		case 4:
			LoadBooks(ast_books, &s32_bookCount);
			break;

		case 5:
			return 0;
			
		default:
			printf("[WARN] 잘못된 메뉴입니다.\n");
		}
	}
}