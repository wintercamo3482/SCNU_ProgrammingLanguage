#include "CipherXOR.h"

#include <stdint.h>

void Cipher_XOR(char ac8_str[], char c8_key)
{
	int32_t s32_i = 0;

	while (ac8_str[s32_i] != '\0')
	{
		ac8_str[s32_i++] ^= c8_key;
	}
}