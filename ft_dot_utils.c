/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:31:24 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 14:32:20 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_accuracy_len(int len, t_parser *ptr)
{
	if (DOT && TYPE == 's')
	{
		if (ACCURACY > len && ACCURACY)
			ACCURACY = len;
	}
	else if (DOT && TYPE == 'p')
	{
		ACCURACY = 0;
	}
	else
	{
		if (ACCURACY <= len)
			ACCURACY = len;
	}
}

int		ft_accuracy_and_value_di(t_parser *ptr)
{
	if (MINUS)
	{
		if (DOT)
		{
			if (!WIDTH)
				return (0);
			ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - ACCURACY);
			return (1);
		}
		ft_putchar_fd(*DI_STR++, 1, ptr);
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - ACCURACY - 1);
		return (1);
	}
	if (DOT)
	{
		if (!WIDTH)
			return (0);
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - ACCURACY);
		return (1);
	}
	ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - ACCURACY - 1);
	ft_putchar_fd(*DI_STR++, 1, ptr);
	return (1);
}

int		ft_accuracy_and_value_ux(char *str, t_parser *ptr)
{
	if (MINUS)
	{
		if (DOT)
		{
			if (!WIDTH)
				return (0);
			ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - ACCURACY);
			return (1);
		}
		ft_putchar_fd(*str++, 1, ptr);
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - ACCURACY - 1);
		return (1);
	}
	if (DOT)
	{
		if (!WIDTH)
			return (0);
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - ACCURACY);
		return (1);
	}
	ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - ACCURACY - 1);
	ft_putchar_fd(*str++, 1, ptr);
	return (1);
}

int		ft_accuracy_and_value_p(char *str, char *ox, t_parser *ptr)
{
	if (MINUS)
	{
		if (DOT)
		{
			if (!WIDTH)
				return (0);
			ft_putstr_fd(ox, 1, ptr);
			ft_putchar_fd_tap(' ', 1, ptr, WIDTH - ACCURACY - 2);
			return (1);
		}
		ft_putstr_fd(ox, 1, ptr);
		ft_putchar_fd(*str++, 1, ptr);
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - ACCURACY - 3);
		return (1);
	}
	if (DOT)
	{
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - ACCURACY - 2);
		ft_putstr_fd(ox, 1, ptr);
		return (1);
	}
	ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - ACCURACY - 3);
	ft_putstr_fd(ox, 1, ptr);
	ft_putchar_fd(*P_STR++, 1, ptr);
	return (1);
}
