#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - generates random valid passwords for the
 *      program 103-keygen.c
 * @usrn: user's login
 * @len: length of the login
 * Return: pointer to the generated password
 */
int f4(char *usrn, int len)
{
	int ch;
	int vch;

	ch = *usrn;
	vch = 0;
	while (vch < len)
	{
		if (ch < usrn[vch])
			ch = usrn[vch];
		vch += 1;
	}
	srand(ch ^ 14);
	return (rand());
}

/**
 * f5 - generates random valid passwords for the
 *      program 103-keygen.c
 * @usrn: user's login
 * @len: length of the login
 * Return: pointer to the generated password
 */
int f5(char *usrn, int len)
{
	int ch;
	int vch;

	(void) usrn;
	ch = 0;
	vch = 0;
	while (vch < len)
	{
		ch += usrn[vch] * usrn[vch];
		vch += 1;
	}
	srand(ch ^ 239);
	return (rand());
}

/**
 * f6 - generates random valid passwords for the
 *      program 103-keygen.c
 * @usrn: user's login
 * @len: length of the login
 * Return: pointer to the generated password
 */
int f6(char *usrn, int len)
{
	int ch;
	int vch;

	ch = 0;
	vch = 0;
	while (vch < len)
	{
		ch = (ch + usrn[vch]) ^ 0x55;
		vch += 1;
	}
	srand(ch);
	return (rand());
}


/**
 * main - Entry point, generates passwords
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int login_len, ch, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (login_len = 0; argv[1][login_len]; login_len++)
		;

	keygen[0] = ((char *)alph)[(login_len ^ 59) & 63];

	ch = vch = 0;
	while (vch < login_len)
	{
		ch = ch + argv[1][vch];
		vch = vch + 1;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];

	ch = 1;
	vch = 0;
	while (vch < login_len)
	{
		ch = argv[1][vch] * ch;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];

	keygen[3] = ((char *)alph)[f4(argv[1], login_len)];

	keygen[4] = ((char *)alph)[f5(argv[1], login_len)];

	keygen[5] = ((char *)alph)[f6(argv[1], login_len)];
	keygen[6] = '\0';

	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);

	return (0);
}