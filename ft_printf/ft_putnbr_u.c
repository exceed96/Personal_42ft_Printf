/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:04:53 by sangyeki          #+#    #+#             */
/*   Updated: 2022/03/24 12:56:09 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbr_u(int n)
{
	int				result;
	unsigned int	number;

	result = 0;
	number = (unsigned int)n;
	if (number > 9)
		result += ft_putnbr_u(number / 10);
	result += ft_putchar(number % 10 + '0');
	return (result);
}
