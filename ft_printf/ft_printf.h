/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:59:58 by sangyeki          #+#    #+#             */
/*   Updated: 2022/03/24 14:29:24 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
int					ft_putchar(char c);
int					ft_putnbr(int n);
int					ft_printf(const char *str, ...);
int					ft_putType(const char *str, va_list ap, int *i, int result);
int					ft_putstr(char *s);
unsigned int		ft_putnbr_u(int n);
int					ft_putnbr_cx(int n);
int					ft_putnbr_xc(int n);
unsigned long long	ft_putmem(unsigned long long *mem);

#endif
