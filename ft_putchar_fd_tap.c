/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_tap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 19:24:25 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 15:03:07 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar_fd_tap(int c, int fd, t_parser *ptr, int count)
{
	while (count-- > 0)
	{
		write(fd, &c, 1);
		LEN++;
	}
}
