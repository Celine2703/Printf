/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:59:50 by cmartin-          #+#    #+#             */
/*   Updated: 2022/05/18 13:59:52 by cmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

truc	ft_flag(int i, const char *str, va_list arg)
{
	if (str[i] == 'c')
		return (ft_print_c(args));
	else if (str[i] == 's')
		return (ft_print_s(args));
	else if (str[i] == 'p')
		return (ft_print_p(args));
	else if (str[i] == 'd')
		return (ft_print_d(args));
	else if (str[i] == 'i')
		return (ft_print_i(args));
	else if (str[i] == 'u')
		return (ft_print_u(args));
	else if (str[i] == 'x')
		return (ft_print_x(args));
	else if (str[i] == 'X')
		return (ft_print_X(args));
	else if (str[i] == '%')
		return (ft_print_%(args));
}

int	ft_printf(const char *str, ...)
{
	va_list args;
	int		i;

	if (!str)
		return (0);
	va_start(args, str);
	//va_end(args);
	i = 0;
	while (str[i] != '%')
		i++;
	i++;
	return (ft_flag(i, str, args));
}

int main()
{
	int c;
	
	c = 0;
	c = ft_printf("q",3, 68);
	printf("%i", c);
}
