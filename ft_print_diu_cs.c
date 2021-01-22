/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_diu_cs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:21:36 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 14:22:11 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_char_minus(int flag, t_parser *ptr)
{
	if (DI < 0 && flag)
	{
		ft_putchar_fd('-', 1, ptr);
		DI_STR++;
	}
	if (DI < 0 && DOT && !flag)
	{
		LEN_DI--;
		WIDTH--;
	}
}

void	ft_print_di(t_parser *ptr)
{
	char *di_str;

	di_str = ft_itoa(DI);
	DI_STR = di_str;
	free(di_str);
	LEN_DI = ft_strlen(DI_STR);
	ft_char_minus(0, ptr);
	if (!ACCURACY && !DI)
	{
		if (!(ft_accuracy_and_value_di(ptr)))
			ft_accuracy_and_value_di(ptr);
		else
			return ;
	}
	else if (MINUS)
		ft_process_di_minus(ptr);
	else
		ft_process_di(ptr);
}

void	ft_print_u(t_parser *ptr)
{
	char	*u_str;

	u_str = ft_itoa(U);
	U_STR = u_str;
	free(u_str);
	LEN_U = ft_strlen(U_STR);
	if (!ACCURACY && !U)
	{
		if (!(ft_accuracy_and_value_ux(U_STR, ptr)))
			ft_accuracy_and_value_ux(U_STR, ptr);
		else
			return ;
	}
	else if (MINUS)
		ft_process_u_minus(ptr);
	else
		ft_process_u(ptr);
}

void	ft_print_c(t_parser *ptr)
{
	if (!WIDTH)
		ft_putchar_fd(C, 1, ptr);
	else if (MINUS)
	{
		ft_putchar_fd(C, 1, ptr);
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - 1);
	}
	else
	{
		ft_putchar_fd_tap(TAP, 1, ptr, WIDTH - 1);
		ft_putchar_fd(C, 1, ptr);
	}
}

void	ft_print_s(t_parser *ptr)
{
	int len_s;

	len_s = ft_strlen(S);
	ft_accuracy_len(len_s, ptr);
	ft_process_s(len_s, ptr);
}
