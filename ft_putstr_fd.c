/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:08:09 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 15:03:32 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr_fd(char *s, int fd, t_parser *ptr)
{
	if (s)
	{
		while (*s)
			ft_putchar_fd(*s++, fd, ptr);
	}
}