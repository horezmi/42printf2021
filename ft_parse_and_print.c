/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_and_print.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 18:03:07 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 13:52:15 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_parse_flag(t_parser *ptr)
{
	while (*STR == '-' || *STR == '0' || *STR == '.' || *STR == '*'
			|| (*STR >= '0' && *STR <= '9'))
	{
		if (*STR == '-' || *STR == '0')
			ft_flag_minus_or_zero(ptr);
		else if (*STR >= '0' && *STR <= '9')
		{
			while (*STR >= '0' && *STR <= '9')
			{
				WIDTH = (WIDTH * 10) + *STR - '0';
				STR++;
			}
			STR--;
		}
		else if (*STR == '*')
			ft_flag_star(ptr);
		else if (*STR == '.')
			ft_flag_dot(ptr);
		STR++;
	}
	return ;
}

void		ft_parse_type(t_parser *ptr)
{
	if (*STR == 'd' || *STR == 'i' || *STR == 'u')
		ft_type_diu(ptr);
	else if (*STR == 'c' || *STR == 's')
		ft_type_cs(ptr);
	else if (*STR == 'p' || *STR == '%')
		ft_type_pp(ptr);
	else if (*STR == 'x' || *STR == 'X')
		ft_type_x(ptr);
	return ;
}

void		ft_parse_and_print(t_parser *ptr)
{
	while (*STR)
	{
		if (*STR == '%')
		{
			if (*++STR != '%')
			{
				ft_parse_flag(ptr);
				ft_parse_type(ptr);
				if (TYPE)
					ft_print(ptr);
				else
					return ;
			}
			else
				ft_putchar_fd(*STR, 1, ptr);
		}
		else
			ft_putchar_fd(*STR, 1, ptr);
		ft_init_struct_end(ptr);
		STR++;
	}
	return ;
}
