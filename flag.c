/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:56:53 by cmartin-          #+#    #+#             */
/*   Updated: 2022/05/18 15:56:55 by cmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_print_c(va_list args)
{
	char	c;
	
	c = (char)va_arg(args, int);
	ft_putchar(c);
	return (1);
}

int	ft_print_s(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	ft_putstr(str);
	return (ft_strlen(str));
}

int	ft_print_p(va_list args)
{
	void	*adress;

	adress = va_arg(args, void *);
	//affiche hexa
	return (//longueur adress);
}

int	ft_print_d(va_list args)
{
	int	decimal;

	decimal = va_arg(args, int);
	//affiche decimal b10
	return (//longueur decimal);
}
