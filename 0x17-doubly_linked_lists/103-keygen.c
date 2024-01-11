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
	char password[84];
	int rand_num;
	int len;
	int i;

	if (argc != 2)
		return (-1);
	for (len = 0; argv[1][len]; len++)
		;
	srand(f4(argv[1], len));
	password[0] = f1(argv[1], len);
	srand(f2(argv[1], len));
	password[1] = f2(argv[1], len);
	srand(f3(argv[1]));
	password[2] = f3(argv[1]);
	rand_num = f4(argv[1], len);
	password[3] = rand_num & 0x3f;
	for (i = 0, rand_num = 0; i < len; i++)
		rand_num += argv[1][i];
	srand((unsigned int)(f5(argv[1], len) ^ f6(argv[1], len)));
	password[4] = f6(argv[1], len);
	password[5] = '\0';
	printf("%s", password);
	return (0);
}
