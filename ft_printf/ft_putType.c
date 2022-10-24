/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putType.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:11:07 by sangyeki          #+#    #+#             */
/*   Updated: 2022/03/24 14:24:31 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putType(const char *str, va_list ap, int *i, int result)
{
	unsigned long long	memory;

	(*i)++;
	if (str[*i] == 'c')
		result += ft_putchar(va_arg(ap, int));
	else if (str[*i] == 'd' || str[*i] == 'i')
		result += ft_putnbr(va_arg(ap, int));
	else if (str[*i] == 's')
		result += ft_putstr(va_arg(ap, char *));
	else if (str[*i] == 'u')
		result += ft_putnbr_u(va_arg(ap, int));
	else if (str[*i] == 'x')
		result += ft_putnbr_cx(va_arg(ap, int));
	else if (str[*i] == 'X')
		result += ft_putnbr_xc(va_arg(ap, int));
	else if (str[*i] == '%')
		result += ft_putchar('%');
	else if (str[*i] == 'p')
	{
		memory = va_arg(ap, unsigned long long);
		result += ft_putmem(&memory);
	}
	return (result);
}
