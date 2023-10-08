#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int	count;
	int	index;
	int	temp;

	temp = 0;
	while (index < size - 1)
	{
		while (count < size - index - 1)
		{
			if (tab[count] > tab[count + 1])
			{
				temp = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = temp;
			}
			count++;
		}
		count = 0;
		index++;
	}
	
}

int	main()
{
	int	tab[] = {-5, 2, -4, 3, 10, 292, -1};

	sort_int_tab(tab, sizeof(tab) / 4);
	/* *
	 * I use debbuger to follow my code
	 * if you want to print it, just make a for or while loop
	 * */
	return (0);
}
