/*
Assignment name  : max
Expected files   : max.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/

#include <unistd.h>
#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	unsigned int i;
	int tmp;

	i = 1;
	if (!tab || !len)
		return (0);
	while (i < len - 1)
	{
		
		if (tab[i] < tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
	return (tab[0]);
}

int	main()
{
	int	array[] = {1,2,33,4,45,5};
	// int	array[1024] = {};

	printf("%d", max(array, 6));
	return (0);
}

// int		max(int* tab, unsigned int len)
// {
// 	unsigned int	i;
// 	int				big;

// 	i = 0;
// 	if (!tab)
// 		return (0);
// 	while (i < len)
// 	{
// 		if (big < tab[i])
// 			big = tab[i];
// 		i++;
// 	}
// 	return (big);
// }


