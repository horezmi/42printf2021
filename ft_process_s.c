/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:55:43 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 15:00:56 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_process_s(int len_s, t_parser *ptr)
{
	if (MINUS)
	{
		if (DOT)
		{
			ft_putstr_fd_len(S, 1, ACCURACY, ptr);
			ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - ACCURACY);
			return ;
		}
		ft_putstr_fd(S, 1, ptr);
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - len_s);
	}
	else
	{
		if (DOT)
		{
			ft_putchar_fd_tap(' ', 1, ptr, WIDTH - ACCURACY);
			ft_putstr_fd_len(S, 1, ACCURACY, ptr);
			return ;
		}
		ft_putchar_fd_tap(' ', 1, ptr, WIDTH - len_s);
		ft_putstr_fd(S, 1, ptr);
	}
}
