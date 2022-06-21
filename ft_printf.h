/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:41:17 by aaslan            #+#    #+#             */
/*   Updated: 2022/06/11 21:22:06 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

/**
 * @brief Verilen karakteri basar.
 * Variadic Function'larda char için int tipi kullanılır.
 * Ayrıca performans için de char tipleri için int kullanmak faydalıdır.
 *
 * @param c Basılacak karakter
 * @return int ==> Basılan karakter sayısı
 */
int	ft_print_char(int c);

/**
 * @brief Verilen string'i basar.
 *
 * @param string Basılacak string
 * @return int ==> Basılan karakter sayısı
 */
int	ft_print_string(const char *string);

/**
 * @brief Verilen adresi hexadecimal (16) formatta basar.
 *
 * @param number Basılacak adres
 * @return int ==> Basılan karakter sayısı
 */
int	ft_print_pointer(unsigned long number);

/**
 * @brief Verilen integer değeri basar.
 *
 * @param number Basılacak sayı
 * @return int ==> Basılan karakter sayısı
 */
int	ft_print_integer(int number);

/**
 * @brief Verilen unsigned integer değeri basar.
 *
 * @param number Basılacak sayı
 * @return int ==> Basılan karakter sayısı
 */
int	ft_print_unsigned_integer(unsigned int number);

/**
 * @brief Verilen sayısal değeri hexadecimal (16) formatta basar.
 *
 * @param number Basılacak sayı
 * @param c Hexadecimal formatın küçük veya büyük olacağını belirler (x || X)
 * @return int ==> Basılan karakter sayısı
 */
int	ft_print_hexadecimal(unsigned int number, char c);

/**
 * @brief printf fonksiyonunu taklit eder.
 * Sadece cspdiuxX% formatları için değerleri yazdırır.
 * Herhangi bir flag kontrolü yoktur.
 *
 * @param format Ekrana basılacak yazı
 * @param ... Yazı içerisine gömülecek değerler
 * @return int ==> Basılan karakter sayısı
 */
int	ft_printf(const char *format, ...);

#endif
