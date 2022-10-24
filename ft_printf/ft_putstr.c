/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangyeki <sangyeki@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:48:53 by sangyeki          #+#    #+#             */
/*   Updated: 2022/03/24 12:55:48 by sangyeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	result;

	result = 0;
	if (!s)
		result += ft_putstr("(null)");
	else
	{
		while (s[result])
		{
			ft_putchar(s[result]);
			result++;
		}
	}
	return (result);
}
