/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 23:18:07 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/25 22:46:28 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *
 *Split the string on delimeter c and return an arr_of_strings
 *
 * while(idx < size) --> this code to handle the repetness s=baab, set =a -->
 * The function must return 2 strings  not 3
 *
 * Skip delimiters
Mark word start
Count word length
Allocate word
Copy word
Repeat
NULL-terminate arr
 * */
#include "libft.h"

static int	num_of_strings(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**total_free(char **arr, int idx)
{
	while (idx > 0)
	{
		free(arr[idx]);
		idx -= 1;
	}
	free(arr);
	return (NULL);
}

static char	*ft_make_word(const char *s, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (finish - start + 1));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	pass_c_char(char const *s, char c, int *idx)
{
	while (s[*idx] == c)
		(*idx)++;
}

char	**ft_split(char const *s, char c)
{
	char	**arr_of_strings;
	int		idx;
	int		start_idx;
	int		strings_idx;

	if (!s)
		return (NULL);
	arr_of_strings = malloc(sizeof(char *) * (num_of_strings(s, c) + 1));
	if (!arr_of_strings)
		return (NULL);
	idx = 0;
	strings_idx = 0;
	while (s[idx])
	{
		pass_c_char(s, c, &idx);
		start_idx = idx;
		while (s[idx] && s[idx] != c)
			idx++;
		if (idx > start_idx)
			arr_of_strings[strings_idx++] = ft_make_word(s, start_idx, idx);
		if (strings_idx > 0 && !arr_of_strings[strings_idx - 1])
			return (total_free(arr_of_strings, strings_idx - 1));
	}
	arr_of_strings[strings_idx] = NULL;
	return (arr_of_strings);
}

// int main(void) {
//   char **arr;
//   int size;
//
//   arr = ft_split("---hello---world---42---", ' ');
//   size = 0;
//   while (arr[size]) {
//     size++;
//   }
//   for (int i = 0; i < size; ++i) {
//     printf("%s,", arr[i]);
//   }
// }
