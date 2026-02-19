/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 20:37:28 by aqoraan           #+#    #+#             */
/*   Updated: 2026/02/19 01:09:02 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *
 *turn string into int
 important notes:
  1) stop at first non-digit except leading whitespaces ('\t','
 ','\n','\r','\f','\v')
 2) don't handle overflow (man atoi says:  no checks  for
 overflow  or underflow are done. )
 3) handle (postitive / negative) sign
 it's just handle an initial sign not a consuctive ones (according to the doc ->
 4) Make long long for number becauase if you have this number taken
search on google)
atoi("++42")   → 0
after a sign it must be digit
atoi("+-42")→ 0
atoi("  + 42") → 0
atoi("-42   23") -> -42
atoi("42   23") -> 42 --> make active = 1 when a number is hit [ whitespace ] [
+ | - ] [ digits ] --> valid rule

 *
 * */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	res;

	sign = 1;
	res = 0;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i += 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return ((int)(res * sign));
}

// int main() {
//   printf("%d\n", ft_atoi("---2"));
//   printf("%d\n", ft_atoi("-2147483648"));
//   printf("%d\n", ft_atoi("2147483648"));
//   printf("%d\n", ft_atoi("123-a"));
//   printf("%d\n", ft_atoi("123-a"));
//   printf("%d\n", ft_atoi("9-8"));
//   printf("%d\n", ft_atoi("12+3"));
//   printf("%d\n", ft_atoi("   +-42"));
//   printf("%d\n", ft_atoi("- +42"));
//   printf("%d\n", ft_atoi("12-3"));
//   printf("%d\n", ft_atoi("2-3"));
//   printf("%d\n", ft_atoi("+-24"));
//   printf("%d\n", ft_atoi("-24"));
//   printf("%d\n", ft_atoi("++123-a"));
//   printf("%d\n", ft_atoi("  + 42"));
//   printf("%d\n", ft_atoi("    +42"));
//   printf("%d\n", ft_atoi("42 23"));
//   printf("%d\n", ft_atoi("-42 23"));
//   printf("%d\n", ft_atoi("-0"));
//   printf("%d\n", ft_atoi("9-8"));
//   printf("%d\n", ft_atoi("12+3"));
//   printf("%d\n", ft_atoi("   +-42"));
//   printf("%d\n", ft_atoi("- +42"));
//   printf("%d\n", ft_atoi("12-3"));
//   printf("%d\n", ft_atoi("2-3"));
//   printf("%d\n", ft_atoi("+-24"));
//   printf("%d\n", ft_atoi("-24"));
//   printf("%d\n", ft_atoi("++123-a"));
//   printf("%d\n", ft_atoi("  + 42"));
//   printf("%d\n", ft_atoi("    +42"));
//   printf("%d\n", ft_atoi("42 23"));
//   printf("%d\n", ft_atoi("-42 23"));
//   printf("%d\n", ft_atoi("-0"));
// }
