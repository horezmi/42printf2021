/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:33:20 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 14:38:39 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t						ft_hex_len(unsigned long long int nbr)
{
	int						hex_len;

	hex_len = 1;
	while (nbr /= 16)
		hex_len++;
	return (hex_len);
}

char						*ft_itoa_hex(unsigned long long int n,
								t_parser *ptr)
{
	char					*str;
	int						hex_len;
	unsigned long long int	res;

	hex_len = ft_hex_len(n);
	str = (char *)malloc(sizeof(char) * (hex_len + 1));
	if (!str)
		return (NULL);
	str[hex_len--] = '\0';
	while (hex_len >= 0)
	{
		res = n % 16;
		if (res > 9)
		{
			if (TYPE == 'x' || TYPE == 'p' || TYPE == '%')
				res = res - 9 + 96;
			else
				res = res - 9 + 64;
		}
		else
			res += 48;
		str[hex_len--] = res;
		n /= 16;
	}
	return (str);
}
