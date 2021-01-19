/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:09:07 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 14:14:21 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print(t_parser *ptr)
{
	if (TYPE == 'c')
		ft_print_c(ptr);
	else if (TYPE == 's')
		ft_print_s(ptr);
	else if (TYPE == 'd' || TYPE == 'i')
		ft_print_di(ptr);
	else if (TYPE == 'u')
		ft_print_u(ptr);
	else if (TYPE == 'x' || TYPE == 'X')
		ft_print_x(ptr);
	else if (TYPE == 'p')
		ft_print_p(ptr);
	else if (TYPE == '%')
		ft_print_prcnt(ptr);
	return ;
}
