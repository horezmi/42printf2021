/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_types_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:56:23 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 15:04:35 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_type_diu(t_parser *ptr)
{
	if (*STR == 'd' || *STR == 'i')
	{
		if (*STR == 'd')
			TYPE = 'd';
		else
			TYPE = 'i';
		DI = va_arg(ARGS, int);
	}
	else
	{
		TYPE = 'u';
		U = va_arg(ARGS, unsigned int);
	}
}

void	ft_type_cs(t_parser *ptr)
{
	if (*STR == 'c')
	{
		TYPE = 'c';
		ZERO = 0;
		TAP = ' ';
		C = va_arg(ARGS, unsigned int);
	}
	else
	{
		TYPE = 's';
		S = va_arg(ARGS, char*);
		if (!S)
			S = "(null)";
	}
}

void	ft_type_pp(t_parser *ptr)
{
	if (*STR == 'p')
	{
		TYPE = 'p';
		P = va_arg(ARGS, unsigned long long int);
	}
	else
		TYPE = '%';
}

void	ft_type_x(t_parser *ptr)
{
	if (*STR == 'x')
		TYPE = 'x';
	else
		TYPE = 'X';
	X = va_arg(ARGS, unsigned int);
}
