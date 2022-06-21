/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_integer.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:55:15 by aaslan            #+#    #+#             */
/*   Updated: 2022/06/11 21:45:18 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Decimal sayının basamak sayısını bulur.
 *
 * @param number Decimal sayı
 * @return int ==> Basamak sayısı
 */
static int	ft_unsigned_integer_len(unsigned int number)
{
	int	len;

	len = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number = number / 10;
		len++;
	}
	return (len);
}

int	ft_print_unsigned_integer(unsigned int number)
{
	int	len;

	len = ft_unsigned_integer_len(number);
	if (number < 10)
		ft_print_char(number + '0');
	else
	{
		ft_print_integer(number / 10);
		ft_print_integer(number % 10);
	}
	return (len);
}
