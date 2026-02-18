/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:04:34 by aqoraan           #+#    #+#             */
/*   Updated: 2025/12/30 04:38:23 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *  This is a BSD system based function
 *We want to search for string little in string big within the first len char
 We can use KMP algorithm O(N+M) (prefix sum) instead of doing the naive sol
 O(N*M), but not needed for 42

 *
 *  For the last test case, printf can't print NULL value :)
 *
 * */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	fake_i;

	if (*little == 0)
		return ((char *)big);
	i = 0;
	fake_i = 0;
	while (i < len && big[i])
	{
		fake_i = i;
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] && little[j] == big[fake_i] && big[fake_i]
				&& fake_i++ < len)
			{
				j += 1;
			}
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i += 1;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	char	*str4;
//
// 	str1 = "ahmadlkfjalksjdd";
// 	str2 = "al";
// 	str3 = "healolloalo";
// 	str4 = "alo";
// 	printf("%s\n", ft_strnstr(str1, str2, 1000));
// 	printf("%s\n", ft_strnstr(str3, str4, 1000));
// 	printf("%s\n", ft_strnstr("No", "N", 0));
// }
