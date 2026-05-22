#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100

typedef struct person {
	char name[SIZE];			// 연락처를 구조체 표현한다.
	char address[SIZE];			// 이름
	char mobilephone[SIZE];		// 주소
	char desc[SIZE];			// 특징
} PERSON;

void menu();
void add_record(FILE* fp);
PERSON get_record();
void update_record(FILE* fp);
void search_record(FILE* fp);

int main(void)
{
	FILE* fp;
	int select;
	// 이진 파일을 추가 모드로 오픈한다.
	if ((fp = fopen("address.dat", "ab+")) == NULL)
	{
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다");
		exit(1);
	}
	while(1) {
		menu();								// 메뉴를 표시한다
		printf("정수값을 입력하시오: ");	// 사용자로부터 정수를 받는다
		scanf("%d", &select);
		getchar();

		switch (select) {
		case 1: add_record(fp); break;		// 데이터를 추가한다
		case 2: update_record(fp); break;	// 데이터를 수정한다
		case 3: search_record(fp); break;	// 데이터를 탐색한다
		case 4: fclose(fp); return 0;
		}
	}
	fclose(fp);								// 이진 파일을 닫는다
	return 0;
}

// 데이터를 추가한다
void add_record(FILE* fp)
{
	PERSON data;
	data = get_record();		// 사용자로부터 데이터를 받아서 구조체에 저장
	fseek(fp, 0, SEEK_END);		// 파일의 끝으로 간다
	fwrite(&data, sizeof(data), 1, fp);		// 구조체 데이터를 파일에 쓴다
}

PERSON get_record()
{
	PERSON st_ret;

	printf("이름: ");
	fgets(st_ret.name, SIZE, stdin);
	st_ret.name[strcspn(st_ret.name, "\n")] = '\0';

	printf("주소: ");
	fgets(st_ret.address, SIZE, stdin);
	st_ret.address[strcspn(st_ret.address, "\n")] = '\0';

	printf("휴대폰: ");
	fgets(st_ret.mobilephone, SIZE, stdin);
	st_ret.mobilephone[strcspn(st_ret.mobilephone, "\n")] = '\0';

	printf("특징: ");
	fgets(st_ret.desc, SIZE, stdin);
	st_ret.desc[strcspn(st_ret.desc, "\n")] = '\0';

	return st_ret;
}

void search_record(FILE* fp)
{
	PERSON st_data;
	char ac8_name[SIZE];
	int s32_found = 0;

	printf("검색할 이름을 입력하시오: ");
	gets_s(ac8_name, sizeof(ac8_name));

	rewind(fp);
	
	while (fread(&st_data, sizeof(st_data), 1, fp) == 1)
	{
		if (strcmp(st_data.name, ac8_name) == 0)
		{
			printf("주소: %s\n", st_data.address);
			printf("휴대폰: %s\n", st_data.mobilephone);
			printf("특징: %s\n", st_data.desc);
			s32_found = 1;
		}
	}

	if (s32_found == 0)
	{
		printf("[ERROR] 해당 이름의 데이터를 찾을 수 없습니다.\n");
	}
}

void update_record(FILE* fp)
{
	PERSON st_data;
	PERSON st_dataNew;
	FILE* fp_tmp;
	
	char ac8_name[SIZE];
	int s32_found = 0;

	printf("수정할 이름을 입력하시오: ");
	gets_s(ac8_name, sizeof(ac8_name));
	
	fp_tmp = fopen("tmp.dat", "wb");
	
	if (fp_tmp == NULL)
	{
		fprintf(stderr, "[ERROR] 임시 파일 생성할 수 없습니다.\n");
		return;
	}
	rewind(fp);
	
	while (fread(&st_data, sizeof(st_data), 1, fp) == 1)
	{
		if (strcmp(st_data.name, ac8_name) == 0)
		{
			printf("이름: %s\n", st_data.name);
			printf("주소: %s\n", st_data.address);
			printf("휴대폰: %s\n", st_data.mobilephone);
			printf("특징: %s\n", st_data.desc);
			
			st_dataNew = get_record();
			
			fwrite(&st_dataNew, sizeof(st_dataNew), 1, fp_tmp);
			
			s32_found = 1;
		}
	
		else
		{
			fwrite(&st_data, sizeof(st_data), 1, fp_tmp);
		}
	}

	fclose(fp_tmp);
	fclose(fp);
	
	remove("address.dat");
	rename("tmp.dat", "address.dat");

	fp = fopen("address.dat", "ab+");

	if (!s32_found)
	{
		fprintf(stderr, "[ERROR] 해당 이름의 데이터를 찾을 수 없습니다.\n");
	}
}

void menu()
{
	printf("====================\n");
	printf(" 1. 추가\n");
	printf(" 2. 수정\n");
	printf(" 3. 검색\n");
	printf(" 4. 종료\n");
	printf("====================\n");
}