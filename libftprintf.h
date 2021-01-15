/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bscamand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:40:06 by bscamand          #+#    #+#             */
/*   Updated: 2021/01/11 13:43:43 by bscamand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# define ARGS ptr->args
# define STR ptr->str
# define MINUS ptr->minus
# define ZERO ptr->zero
# define DOT ptr->dot
# define STAR ptr->star
# define TYPE ptr->type
# define ACCURACY ptr->accuracy
# define WIDTH ptr->width
# define C ptr->c
# define S ptr->s
# define DI ptr->di
# define DI_STR ptr->di_str
# define U_STR ptr->u_str
# define P_STR ptr->p_str
# define X_STR ptr->x_str
# define U ptr->u
# define X ptr->x
# define P ptr->p
# define LEN ptr->len
# define LEN_DI ptr->len_di
# define LEN_U ptr->len_u
# define LEN_P ptr->len_p
# define LEN_X ptr->len_x
# define TAP ptr->tap

typedef struct				s_parser
{
	va_list					args;
	char					*str;
	int						minus;
	int						zero;
	int						dot;
	int						star;
	char					type;
	int						accuracy;
	int						width;
	char					c;
	char					*s;
	int						di;
	char					*di_str;
	char					*u_str;
	char					*p_str;
	char					*x_str;
	unsigned int			x;
	unsigned int			u;
	unsigned long long int	p;
	int						len;
	int						len_di;
	int						len_u;
	int						len_p;
	int						len_x;
	char					tap;
}							t_parser;

int							ft_printf(const char *str, ...);
void						ft_init_struct_start(t_parser *ptr);
void						ft_init_struct_end(t_parser *ptr);

void						ft_parse_and_print(t_parser *ptr);
void						ft_parse_flag(t_parser *ptr);
void						ft_parse_type(t_parser *ptr);

void						ft_flag_minus_or_zero(t_parser *ptr);
void						ft_flag_dot(t_parser *ptr);
void						ft_flag_star(t_parser *ptr);

void						ft_type_diu(t_parser *ptr);
void						ft_type_cs(t_parser *ptr);
void						ft_type_pp(t_parser *ptr);
void						ft_type_x(t_parser *ptr);

void						ft_print(t_parser *ptr);
void						ft_print_c(t_parser *ptr);
void						ft_print_s(t_parser *ptr);
void						ft_print_di(t_parser *ptr);
void						ft_print_u(t_parser *ptr);
void						ft_print_x(t_parser *ptr);
void						ft_print_p(t_parser *ptr);
void						ft_print_prcnt(t_parser *ptr);

void						ft_char_minus(int flag, t_parser *ptr);

void						ft_accuracy_len(int len, t_parser *ptr);
int							ft_accuracy_and_value_di(t_parser *ptr);
int							ft_accuracy_and_value_ux(char *str, t_parser *ptr);
int							ft_accuracy_and_value_p(char *str,
								char *ox, t_parser *ptr);

void						ft_process_s(int len_s, t_parser *ptr);
void						ft_process_u_minus(t_parser *ptr);
void						ft_process_u(t_parser *ptr);
void						ft_process_di_minus(t_parser *ptr);
void						ft_process_di(t_parser *ptr);
void						ft_process_x_minus(t_parser *ptr);
void						ft_process_x(t_parser *ptr);
void						ft_process_p_minus(char *ox, t_parser *ptr);
void						ft_process_p(char *ox, t_parser *ptr);

size_t						ft_strlen(const char *s);
char						*ft_itoa(long long n);
char						*ft_itoa_hex(unsigned long long int	n,
								t_parser *ptr);
void						ft_putstr_fd_len(char *s, int fd, int len,
								t_parser *ptr);
void						ft_putstr_fd(char *s, int fd, t_parser *ptr);
void						ft_putchar_fd(int c, int fd, t_parser *ptr);
void						ft_putchar_fd_tap(int c, int fd, t_parser *ptr,
								int count);

#endif
