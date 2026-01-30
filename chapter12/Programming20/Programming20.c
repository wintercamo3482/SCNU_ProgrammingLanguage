#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define SIZE 64

void CryptXOR(char ac_data[], char ac_key[], char ac_dest[], size_t sz_len)
{
	size_t sz_keyLen = strlen(ac_key);
	
	for (size_t sz_i = 0; sz_i < sz_len; sz_i++)
	{
		ac_dest[sz_i] = ac_data[sz_i] ^ ac_key[sz_i % sz_keyLen];
	}
}

int main(void)
{
	char ac_data[SIZE];
	char ac_key[SIZE];
	char ac_output[SIZE];

	size_t sz_dataLen = 0;

	printf("텍스트를 입력하시오: ");
	gets_s(ac_data, sizeof(ac_data));

	printf("키를 입력하시오: ");
	gets_s(ac_key, sizeof(ac_key));

	sz_dataLen = strlen(ac_data);

	CryptXOR(ac_data, ac_key, ac_output, sz_dataLen);

	printf("\n암호화된 문자열: %s\n", ac_output);

	for (size_t sz_i = 0; sz_i < sz_dataLen; sz_i++)
	{
		printf("%c", ac_output[sz_i]);
	}

	CryptXOR(ac_output, ac_key, ac_output, sz_dataLen);
	ac_output[sz_dataLen] = '\0';

	printf("\n복원된 문자열: %s\n", ac_output);

	return 0;
}