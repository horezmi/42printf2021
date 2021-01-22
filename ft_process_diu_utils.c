/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_diu_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:50:18 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 14:53:43 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_process_di_minus(t_parser *ptr)
{
	if (DOT)
	{
		ft_accuracy_len(LEN_DI, ptr);
		ft_char_minus(1, ptr);
		ft_putchar_fd_tap('0', 1, ptr, ACCURACY - LEN_DI);
		ft_putstr_fd_len(DI_STR, 1, LEN_DI, ptr);
		ft_putchar_fd_tap(' ', 1, ptr, WIDTH - ACCURACY);
	}
	else
	{
		ft_char_minus(1, ptr);
		ft_putstr_fd(DI_STR, 1, ptr);
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - LEN_DI);
	}
}

void	ft_process_di(t_parser *ptr)
{
	if (DOT)
	{
		ft_accuracy_len(LEN_DI, ptr);
		ft_putchar_fd_tap(' ', 1, ptr, WIDTH - ACCURACY);
		ft_char_minus(1, ptr);
		ft_putchar_fd_tap('0', 1, ptr, ACCURACY - LEN_DI);
		ft_putstr_fd_len(DI_STR, 1, LEN_DI, ptr);
	}
	else
	{
		if (ZERO)
			ft_char_minus(1, ptr);
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - LEN_DI);
		if (!ZERO)
			ft_char_minus(1, ptr);
		ft_putstr_fd(DI_STR, 1, ptr);
	}
}

void	ft_process_u_minus(t_parser *ptr)
{
	if (DOT)
	{
		ft_accuracy_len(LEN_U, ptr);
		ft_putchar_fd_tap('0', 1, ptr, ACCURACY - LEN_U);
		ft_putstr_fd_len(U_STR, 1, LEN_U, ptr);
		ft_putchar_fd_tap(' ', 1, ptr, WIDTH - ACCURACY);
	}
	else
	{
		ft_putstr_fd(U_STR, 1, ptr);
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - LEN_U);
	}
}

void	ft_process_u(t_parser *ptr)
{
	if (DOT)
	{
		ft_accuracy_len(LEN_U, ptr);
		ft_putchar_fd_tap(' ', 1, ptr, WIDTH - ACCURACY);
		ft_putchar_fd_tap('0', 1, ptr, ACCURACY - LEN_U);
		ft_putstr_fd_len(U_STR, 1, LEN_U, ptr);
	}
	else
	{
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - LEN_U);
		ft_putstr_fd(U_STR, 1, ptr);
	}
}
