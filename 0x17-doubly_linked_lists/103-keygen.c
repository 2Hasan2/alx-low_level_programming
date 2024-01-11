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
	char password[7];
	int rand_num, sum, i, len;

	if (argc != 2)
		return (-1);
	for (len = 0; argv[1][len]; len++)
		;
	srand(f4(argv[1], len));
	sum = 0;
	i = 0;
	while (sum < 2772 - 122)
	{
		rand_num = rand() % 127;
		if (rand_num > 32)
		{
			password[i] = rand_num;
			sum += password[i];
			i++;
		}
	}
	rand_num = 2772 - sum;
	password[i] = rand_num;
	password[i + 1] = '\0';
	printf("%s", password);
	return (0);
}
