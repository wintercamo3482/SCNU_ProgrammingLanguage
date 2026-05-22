#include <stdio.h>

int main(void)
{
	char ac8_fileName[256];

	printf("파일 이름을 입력하시오: ");
	scanf(" %s", ac8_fileName);

	if (remove(ac8_fileName) == 0)
	{
		printf("%s가 성공적으로 삭제되었습니다.\n", ac8_fileName);
	}
	else
	{
		printf("%s가 존재하지 않습니다.\n", ac8_fileName);
	}

	return 0;
}