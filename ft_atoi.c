/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:01:02 by ael-fagr          #+#    #+#             */
/*   Updated: 2023/12/06 01:57:06 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	tmp;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	tmp = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = 44 - str[i++];
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if (result < tmp && sign == 1)
			return (-1);
		else if (result < tmp && sign == -1)
			return (0);
		tmp = result;
		i++;
	}
	return ((result * sign));
}
