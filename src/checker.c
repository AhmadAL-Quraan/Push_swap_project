#include "../Libft-project/libft.h"
#include "../push_swap.h"

/*
 *
 *  This file check parsing + validation + normalization
 *
 * */

void	*parser_interface(char **string)
{
	while (string != NULL)
	{
	}
	parser_numbers();
	parser_flags(string);
}

int	*parser_numbers(char **string)
{
}

int	*parser_flags(char **string)
{
	int		*arr_flag[] = {0, 0, 0, 0, 0, 0};
	char	*arr[] = {"--bench", "--simple", "--adaptive", "--medium",
			"--complex"};

	int i, j;
	i = j = 0;
	while (string[i] != NULL)
	{
		if (ft_strncmp(string[i], arr[0], 7))
		{
			bench();
			return (1);
		}
		else if (ft_strncmp(string[i], arr[1], 8))
		{
			simple();
			return (1);
		}
		else if (ft_strncmp(string[i], arr[1], 8))
		{
			medium();
			return (1);
		}
		else if (ft_strncmp(string[i], arr[1], 10))
		{
			adaptive();
			return (1);
		}
		else if (ft_strncmp(string[i], arr[1], 9))
		{
			complex();
			return (1);
		}
		i += 1;
	}
	return (0);
}
