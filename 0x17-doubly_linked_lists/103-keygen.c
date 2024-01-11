#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findLargestChar(char *username, int length);
int multiplyChars(char *username, int length);
int generateRandomChar(char *username);

/**
 * findLargestChar - Finds the largest character in the username.
 *
 * @username: User's username
 * @length: Length of the username
 * Return: The largest character
 */
int findLargestChar(char *username, int length)
{
	int currentChar;
	int largestChar;
	unsigned int randNum;

	currentChar = *username;
	largestChar = 0;

	while (largestChar < length)
	{
		if (currentChar < username[largestChar])
			currentChar = username[largestChar];
		largestChar += 1;
	}

	srand(currentChar ^ 14);
	randNum = rand();

	return (randNum & 63);
}

/**
 * multiplyChars - Multiplies each character in the username.
 *
 * @username: User's username
 * @length: Length of the username
 * Return: The multiplied character
 */
int multiplyChars(char *username, int length)
{
	int currentChar;
	int result;

	currentChar = result = 0;

	while (result < length)
	{
		currentChar = currentChar + username[result] * username[result];
		result += 1;
	}

	return (((unsigned int)currentChar ^ 239) & 63);
}

/**
 * generateRandomChar - Generates a random character.
 *
 * @username: User's username
 * Return: A random character
 */
int generateRandomChar(char *username)
{
	int currentChar;
	int result;

	currentChar = result = 0;

	while (result < *username)
	{
		currentChar = rand();
		result += 1;
	}

	return (((unsigned int)currentChar ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: Arguments count
 * @argv: Arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int length, currentChar, result;
	long alphabet[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850};
	(void)argc;

	for (length = 0; argv[1][length]; length++)
		;

	/* ----------- findFirstChar ----------- */
	keygen[0] = ((char *)alphabet)[(length ^ 59) & 63];

	/* ----------- findSumChars ----------- */
	currentChar = result = 0;
	while (result < length)
	{
		currentChar = currentChar + argv[1][result];
		result += 1;
	}
	keygen[1] = ((char *)alphabet)[(currentChar ^ 79) & 63];

	/* ----------- multiplyAllChars ----------- */
	currentChar = 1;
	result = 0;
	while (result < length)
	{
		currentChar = argv[1][result] * currentChar;
		result += 1;
	}
	keygen[2] = ((char *)alphabet)[(currentChar ^ 85) & 63];

	/* ----------- findLargestChar ----------- */
	keygen[3] = ((char *)alphabet)[findLargestChar(argv[1], length)];

	/* ----------- multiplyChars ----------- */
	keygen[4] = ((char *)alphabet)[multiplyChars(argv[1], length)];

	/* ----------- generateRandomChar ----------- */
	keygen[5] = ((char *)alphabet)[generateRandomChar(argv[1])];
	keygen[6] = '\0';

	for (currentChar = 0; keygen[currentChar]; currentChar++)
		printf("%c", keygen[currentChar]);

	return (0);
}
