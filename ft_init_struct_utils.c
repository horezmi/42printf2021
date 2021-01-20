/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 18:12:38 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 13:46:12 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_init_struct_start(t_parser *ptr)
{
	STR = 0;
	MINUS = 0;
	ZERO = 0;
	DOT = 0;
	STAR = 0;
	TYPE = 0;
	ACCURACY = 0;
	WIDTH = 0;
	C = 0;
	S = 0;
	DI = 0;
	DI_STR = 0;
	U_STR = 0;
	P_STR = 0;
	X_STR = 0;
	X = 0;
	U = 0;
	P = 0;
	LEN = 0;
	LEN_DI = 0;
	LEN_U = 0;
	LEN_P = 0;
	LEN_X = 0;
	TAP = ' ';
}

void	ft_init_struct_end(t_parser *ptr)
{
	MINUS = 0;
	ZERO = 0;
	DOT = 0;
	STAR = 0;
	TYPE = 0;
	ACCURACY = 0;
	WIDTH = 0;
	C = 0;
	S = 0;
	DI = 0;
	DI_STR = 0;
	U_STR = 0;
	P_STR = 0;
	X_STR = 0;
	X = 0;
	U = 0;
	P = 0;
	LEN_DI = 0;
	LEN_U = 0;
	LEN_P = 0;
	LEN_X = 0;
	TAP = ' ';
}
