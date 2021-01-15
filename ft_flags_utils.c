/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 19:22:42 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 14:30:40 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_flag_minus_or_zero(t_parser *ptr)
{
	if (*STR == '-')
	{
		MINUS = 1;
		TAP = ' ';
	}
	else if (*STR == '0' && !MINUS)
	{
		ZERO = 1;
		TAP = '0';
	}
}

void	ft_flag_star(t_parser *ptr)
{
	STAR = 1;
	WIDTH = va_arg(ARGS, int);
	if (ZERO && WIDTH < 0)
	{
		ZERO = 0;
		TAP = ' ';
	}
	if (WIDTH < 0)
	{
		WIDTH *= (-1);
		MINUS = 1;
	}
}

void	ft_flag_dot(t_parser *ptr)
{
	DOT = 1;
	if (*++STR == '-')
		MINUS = 0;
	if (*STR++ == '*')
		ACCURACY = va_arg(ARGS, int);
	else
	{
		STR--;
		while (*STR >= '0' && *STR <= '9')
		{
			ACCURACY = (ACCURACY * 10) + *STR - '0';
			STR++;
		}
	}
	if (ACCURACY == 0)
	{
		ZERO = 0;
		TAP = ' ';
	}
	else if (ACCURACY < 0)
	{
		ACCURACY = 0;
		DOT = 0;
	}
	STR--;
}
