#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define MAX_MUSIC_NUM	100
#define MAX_TITLE		64
#define MAX_ARTIST		32
#define MAX_PATH		255

typedef enum
{
	SONG,
	POP,
	CLASSIC,
	MOVIE,
} GENRE;

struct music
{
	char ac_title[MAX_TITLE];
	char ac_artist[MAX_ARTIST];
	char ac_path[MAX_PATH];
	GENRE e_genre;
};

void PrintMenu()
{
	printf("====================\n");
	printf("1. 추가\n");
	printf("2. 출력\n");
	printf("3. 검색\n");
	printf("4. 종료\n");
	printf("====================\n");
}

int32_t AddMusic(struct music st_musicList[], int32_t* ps32_count, int32_t s32_maxCount)
{
	int32_t s32_ret = -1;

	do
	{
		int32_t s32_genre = 0;
		struct music st_music;
		memset(&st_music, 0, sizeof(st_music));

		if (st_musicList == NULL || ps32_count == NULL)
		{
			break;
		}

		if (*ps32_count >= s32_maxCount)
		{
			printf("[ERROR] DB에 더 이상 저장할 수 없습니다.\n");
			break;
		}
		
		printf("제목:");
		gets_s(st_music.ac_title, sizeof(st_music.ac_title));

		printf("가수:");
		gets_s(st_music.ac_artist, sizeof(st_music.ac_artist));

		printf("위치:");
		gets_s(st_music.ac_path, sizeof(st_music.ac_path));

		printf("장르(0: 가요, 1: 팝, 2: 클래식, 3: 영화음악)");
		scanf(" %d", &s32_genre);

		if (s32_genre < SONG || s32_genre > MOVIE)
		{
			printf("[ERROR] 지원하지 않는 장르입니다.\n");
			break;
		}

		st_music.e_genre = (GENRE)s32_genre;

		st_musicList[*ps32_count] = st_music;
		++(*ps32_count);
		s32_ret = 0;

	} while (0);
	
	return s32_ret;
}

void PrintMusic(const struct music st_musicList[], int32_t s32_count)
{
	char* ac_genre[] = { "가요", "팝", "클래식", "영화음악" };

	for (int32_t s32_i = 0; s32_i < s32_count; s32_i++)
	{
		printf("--------------------\n");
		printf("제목:%s\n", st_musicList[s32_i].ac_title);
		printf("가수:%s\n", st_musicList[s32_i].ac_artist);
		printf("위치:%s\n", st_musicList[s32_i].ac_path);
		printf("장르:%s\n", ac_genre[st_musicList[s32_i].e_genre]);
	}
}

int32_t SearchMusic(const struct music st_musicList[], int32_t s32_count)
{
	int32_t s32_ret = -1;

	do
	{
		char ac_inputTitle[MAX_TITLE] = { 0 };
		char* ac_genre[] = { "가요", "팝", "클래식", "영화음악" };

		if (st_musicList == NULL || s32_count <= 0)
		{
			printf("[ERROR] 검색할 데이터가 없습니다.\n");
			break;
		}

		printf("제목을 입력하시오: ");
		gets_s(ac_inputTitle, sizeof(ac_inputTitle));

		for (int32_t s32_i = 0; s32_i < s32_count; s32_i++)
		{
			if (0 == strcmp(st_musicList[s32_i].ac_title, ac_inputTitle))
			{
				printf("가수: %s\n", st_musicList[s32_i].ac_artist);
				printf("위치: %s\n", st_musicList[s32_i].ac_path);
				printf("장르:%s\n", ac_genre[st_musicList[s32_i].e_genre]);
				s32_ret = 0;
				break;
			}
		}

		if (-1 == s32_ret)
		{
			printf("[ERROR] 찾으려는 음악 %s 가 존재하지 않습니다.\n", ac_inputTitle);
			break;
		}

	} while (0);

	return s32_ret;
}

int main(void)
{
	int32_t s32_select = 0;
	static int32_t s32_musicCount = 0;

	static struct music st_musicList[MAX_MUSIC_NUM];
	memset(&st_musicList, 0, sizeof(st_musicList));

	while (1)
	{
		PrintMenu();

		printf("정수값을 입력하시오: ");
		scanf("%d", &s32_select);
		getchar();
		
		switch(s32_select)
		{
		case 1:
			if (-1 == AddMusic(st_musicList, &s32_musicCount, MAX_MUSIC_NUM))
			{
				printf("[ERROR] 음악 추가에 실패했습니다.\n");
			}
			break;
		
		case 2:
			PrintMusic(st_musicList, s32_musicCount);
			break;

		case 3:
			SearchMusic(st_musicList, s32_musicCount);
			break;
		
		case 4:
			printf("[INFO ] 프로그램을 종료합니다.\n");
			return 0;

		default:
			printf("[INFO ] 잘못된 메뉴를 입력했습니다. 1 ~ 4 사이의 메뉴를 선택하십시오.\n");
			break;
		}	
	}

	return 0;
}