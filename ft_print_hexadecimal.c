/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:32:07 by aaslan            #+#    #+#             */
/*   Updated: 2022/06/11 21:48:27 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Decimal sayının hexadecimal sayı tabanında ki basamak sayısını bulur.
 *
 * @param number Decimal sayı tabanında ki sayı
 * @return int ==> Hexadecimal sayı tabanında basamak sayısı
 */
static int	ft_hexadecimal_len(unsigned int number)
{
	int	len;

	len = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number = number / 16;
		len++;
	}
	return (len);
}

int	ft_print_hexadecimal(unsigned int number, char token)
{
	int	len;

	len = ft_hexadecimal_len(number);
	if (number <= 9)
		ft_print_char(number + '0');
	else if (number < 16)
	{
		if (token == 'x')
			ft_print_char((number - 10) + 'a');
		else
			ft_print_char((number - 10) + 'A');
	}
	else
	{
		ft_print_hexadecimal(number / 16, token);
		ft_print_hexadecimal(number % 16, token);
	}
	return (len);
}
