#include <stdio.h>

int check(int i_inputPassword)
{
	int i_ret = 0;
	int i_password = 1234;

	if (i_inputPassword == i_password)
	{
		i_ret = 1;
	}
	
	return i_ret;

}

int main(void)
{
	int i_inputPassword = 0;
	static unsigned int ui_chance = 0;

	do
	{
		printf("비밀번호: ");
		scanf("%d", &i_inputPassword);

		if (check(i_inputPassword) == 1)
		{
			printf("로그인 성공\n");
			break;
		}
		else
		{
			if (++ui_chance == 3)
			{
				printf("로그인 시도 횟수 초과\n");
				break;
			}
		}

	} while (1);

	return 0;
}