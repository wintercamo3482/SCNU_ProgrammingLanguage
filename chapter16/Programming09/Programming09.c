#include "CipherXOR.h"

#include <stdio.h>
#include <string.h>

#define SAMPLE_STR	"I am a boy"

int main(void)
{
	char ac8_sample[] = SAMPLE_STR;
	char ac8_encoded[256];
	char ac8_decoded[256];

	char c8_key = 'B';

	strcpy(ac8_encoded, ac8_sample);

	Cipher_XOR(ac8_sample, c8_key);
	printf("%s가 %s로 엔코딩됨\n", ac8_encoded, ac8_sample);

	strcpy(ac8_decoded, ac8_encoded);

	Cipher_XOR(ac8_decoded, c8_key);
	printf("%s가 %s로 디코딩됨\n", ac8_decoded, ac8_encoded);

	return 0;
}