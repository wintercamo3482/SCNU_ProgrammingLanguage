#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define WIDTH		256
#define HEIGHT		256
#define OFFSET		1000
#define IMG_NAME	"lena(256x256).raw"

int main(void)
{
	HDC hdc = GetDC(NULL);

	FILE* fp = fopen(IMG_NAME, "rb");
	
	uint8_t u8_pixel = 0;

	if (fp == NULL)
	{
		fprintf(stderr, "[ERROR] 파일 %s을 열 수 없습니다.\n", IMG_NAME);
		exit(1);
	}

	if (hdc == NULL)
	{
		printf("[ERROR] 화면 DC를 얻을 수 없습니다.\n");
		exit(1);
	}

	for (int32_t s32_y = 0; s32_y < HEIGHT; s32_y++)
	{
		for (int32_t s32_x = 0; s32_x < WIDTH; s32_x++)
		{
			if (fread(&u8_pixel, sizeof(u8_pixel), 1, fp) != 1)
			{
				printf("[ERROR] 파일 %s 읽기 실패\n", IMG_NAME);
				ReleaseDC(NULL, hdc);
				fclose(fp);
				exit(1);
			}
			SetPixel(hdc, s32_x + OFFSET, s32_y + OFFSET, RGB(u8_pixel, u8_pixel, u8_pixel));
		}
	}

	ReleaseDC(NULL, hdc);
	fclose(fp);

	return 0;
}