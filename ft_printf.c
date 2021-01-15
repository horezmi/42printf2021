/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:39:57 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 13:45:05 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int				ft_printf(const char *str, ...)
{
	t_parser	parser;
	t_parser	*ptr;

	ptr = &parser;
	ft_init_struct_start(ptr);
	STR = (char *)str;
	va_start(ARGS, str);
	ft_parse_and_print(ptr);
	va_end(ARGS);
	return (LEN);
}
