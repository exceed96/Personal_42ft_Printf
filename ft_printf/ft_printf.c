/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:53:17 by sangyeki          #+#    #+#             */
/*   Updated: 2022/03/24 14:24:02 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		*i;
	int		result;
	int		index;

	index = 0;
	i = &index;
	result = 0;
	va_start(ap, str);
	while (str[*i])
	{
		if (str[*i] == '%')
		{
			if (str[(*i) + 1])
				result += ft_putType(str, ap, i, 0);
		}
		else
			result += ft_putchar(str[(*i)]);
		(*i)++;
	}
	va_end(ap);
	return (result);
}
