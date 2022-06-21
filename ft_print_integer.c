/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:48:11 by aaslan            #+#    #+#             */
/*   Updated: 2022/06/11 21:46:13 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Decimal sayının basamak sayısını bulur.
 * Eğer sayı negatif ise - işaretini de basamak olarak algılar.
 *
 * @param number Decimal sayı
 * @return int ==> Basamak sayısı
 */
static int	ft_integer_len(long number)
{
	int	len;

	len = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		len++;
		number = -number;
	}
	while (number != 0)
	{
		number = number / 10;
		len++;
	}
	return (len);
}

int	ft_print_integer(int number)
{
	long	temp;
	int		len;

	temp = number;
	len = ft_integer_len(temp);
	if (temp < 0)
	{
		ft_print_char('-');
		temp = -temp;
	}
	if (temp < 10)
		ft_print_char(temp + '0');
	else
	{
		ft_print_integer(temp / 10);
		ft_print_integer(temp % 10);
	}
	return (len);
}
