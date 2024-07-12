#include "main.h"
#include <stdlib.h>
/**
  * argstostr - concatenates all arguments of the program.
  * @ac: argument count.
  * @av: pointer to array of size ac.
  * lciaeas is for loop counter as index access elements of
  * array string
  * lciaccs is for loop counter as index access characters current
  * string
  * lpktnsbbca is for loop counter keeper track new string being
  * built by concatenating the arguments
  * tkastncns is for track keeper and storage of total number characters
  * in new string
  *
  * Return: NULL if ac == 0 or av == null, Pointer to new string.
  * NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int lciaeas, lciaccs, lpktnsbbca, tkastncns;
	char *arg;

	tkastncns = 0;
	lpktnsbbca = 0;
	if (ac == 0 || av == NULL)
	return (NULL);
	lciaeas = 0;
	while (lciaeas < ac)
	{
		lciaccs = 0;
	while (av[lciaeas][lciaccs])
	{
		tkastncns++;
		lciaccs++;
	}
		tkastncns++;
		lciaeas++;
	}
	arg = malloc((sizeof(char) * tkastncns) + 1);
	if (arg == NULL)
	return (NULL);
	lciaeas = 0;
	while (lciaeas < ac)
	{
	lciaccs = 0;
	while (av[lciaeas][lciaccs])
	{
		arg[lpktnsbbca] = av[lciaeas][lciaccs];
		lciaccs++;
		lpktnsbbca++;
	}
	arg[lpktnsbbca] = '\n';
	lpktnsbbca++;
	lciaeas++;
	}
	arg[lpktnsbbca] = '\0';
	return (arg);
}
