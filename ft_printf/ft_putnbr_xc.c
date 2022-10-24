/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:59:12 by sangyeki          #+#    #+#             */
/*   Updated: 2022/03/24 12:56:55 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_change_base(unsigned int i, char *base, unsigned int size)
{
	int	result;

	result = 0;
	if (i > size - 1)
	{
		result += ft_change_base(i / size, base, size);
		i %= size;
	}
	ft_putchar(base[i]);
	result++;
	return (result);
}

int	ft_putnbr_xc(int n)
{
	char	*hexa_base;
	int		result;
	int		size;
	int		number;

	number = (unsigned int)n;
	hexa_base = "0123456789ABCDEF";
	result = 0;
	size = 0;
	while (hexa_base[size])
		size++;
	result += ft_change_base(number, hexa_base, size);
	return (result);
}
