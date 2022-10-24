/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:03:41 by sangyeki          #+#    #+#             */
/*   Updated: 2022/03/24 12:57:33 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_change_base(unsigned long long m, char *base, unsigned int size)
{
	int	result;

	result = 0;
	if (m > size - 1)
	{
		result += ft_change_base(m / size, base, size);
		m %= size;
	}
	ft_putchar(base[m]);
	result++;
	return (result);
}

unsigned long long	ft_putmem(unsigned long long *mem)
{
	char	*hexa_base;
	int		result;
	int		size;

	hexa_base = "0123456789abcdef";
	result = 0;
	size = 0;
	while (hexa_base[size])
		size++;
	result += ft_putstr("0x");
	result += ft_change_base(*mem, hexa_base, size);
	return (result);
}
