/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xp_prcnt.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:22:26 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 14:29:56 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_prcnt(t_parser *ptr)
{
	if (MINUS)
	{
		ft_putchar_fd('%', 1, ptr);
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - 1);
	}
	else
	{
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - 1);
		ft_putchar_fd('%', 1, ptr);
	}
}

void	ft_print_p(t_parser *ptr)
{
	char	*p_str;
	char	*ox;

	ox = "0x";
	p_str = ft_itoa_hex(P, ptr);
	P_STR = p_str;
	free(p_str);
	LEN_P = ft_strlen(P_STR);
	ft_accuracy_len(LEN_P, ptr);
	if (!ACCURACY && !P)
	{
		P_STR = "";
		if (!(ft_accuracy_and_value_p(P_STR, ox, ptr)))
			ft_accuracy_and_value_p(P_STR, ox, ptr);
		else
			return ;
	}
	else if (MINUS)
		ft_process_p_minus(ox, ptr);
	else
		ft_process_p(ox, ptr);
}

void	ft_print_x(t_parser *ptr)
{
	char	*x_str;

	x_str = ft_itoa_hex(X, ptr);
	X_STR = x_str;
	free(x_str);
	LEN_X = ft_strlen(X_STR);
	if (!ACCURACY && !X)
	{
		if (!(ft_accuracy_and_value_ux(X_STR, ptr)))
			ft_accuracy_and_value_ux(X_STR, ptr);
		else
			return ;
	}
	else if (MINUS)
		ft_process_x_minus(ptr);
	else
		ft_process_x(ptr);
}
