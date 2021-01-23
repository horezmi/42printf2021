/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_xp_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:50:41 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 15:02:01 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_process_x_minus(t_parser *ptr)
{
	if (DOT)
	{
		ft_accuracy_len(LEN_X, ptr);
		ft_putchar_fd_tap('0', 1, ptr, ACCURACY - LEN_X);
		ft_putstr_fd_len(X_STR, 1, LEN_X, ptr);
		ft_putchar_fd_tap(' ', 1, ptr, WIDTH - ACCURACY);
	}
	else
	{
		ft_putstr_fd(X_STR, 1, ptr);
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - LEN_X);
	}
}

void	ft_process_x(t_parser *ptr)
{
	if (DOT)
	{
		ft_accuracy_len(LEN_X, ptr);
		ft_putchar_fd_tap(' ', 1, ptr, WIDTH - ACCURACY);
		ft_putchar_fd_tap('0', 1, ptr, ACCURACY - LEN_X);
		ft_putstr_fd_len(X_STR, 1, LEN_X, ptr);
	}
	else
	{
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - LEN_X);
		ft_putstr_fd(X_STR, 1, ptr);
	}
}

void	ft_process_p_minus(char *ox, t_parser *ptr)
{
	if (DOT)
	{
		ft_putstr_fd(ox, 1, ptr);
		ft_putstr_fd_len(P_STR, 1, LEN_P, ptr);
		ft_putchar_fd_tap(' ', 1, ptr, WIDTH - LEN_P - 2);
	}
	else
	{
		ft_putstr_fd(ox, 1, ptr);
		ft_putstr_fd(P_STR, 1, ptr);
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - LEN_P - 2);
	}
}

void	ft_process_p(char *ox, t_parser *ptr)
{
	if (DOT)
	{
		ft_putchar_fd_tap(' ', 1, ptr, WIDTH - LEN_P - 2);
		ft_putstr_fd(ox, 1, ptr);
		ft_putstr_fd_len(P_STR, 1, LEN_P, ptr);
	}
	else
	{
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - LEN_P - 2);
		ft_putstr_fd(ox, 1, ptr);
		ft_putstr_fd(P_STR, 1, ptr);
	}
}
