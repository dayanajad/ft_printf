/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:41:33 by dbinti-m          #+#    #+#             */
/*   Updated: 2025/07/06 16:55:00 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include "libft/libft.h"

void	ft_putnbr_unsigned(unsigned int n);
void	ft_puthex(unsigned int n, int is_upper);
void	ft_putptr(uintptr_t n);
void	print_hex(unsigned int n, int is_upper, int *count);
void	print_unsigned(unsigned int n, int *count);
void	print_int(int n, int *count);
void	print_pointer(void *ptr, int *count);
void	print_string(char *s, int *count);
void	print_char(char c, int *count);
void	handle_specifier(char specifier, va_list *args, int *count);
void	process_format(const char *format, va_list *args, int *count);
int		ft_printf(const char *format, ...);

#endif
