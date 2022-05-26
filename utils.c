/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:05:36 by pnoronha          #+#    #+#             */
/*   Updated: 2022/05/26 01:05:46 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_atoi(const char *ptr)
{
	int	i;
	int	sign;
	int	value;

	i = 0;
	while (ptr[i] == ' ' || ptr[i] == '\t')
		i++;
	sign = 1;
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ptr[i] == '-')
			sign = -1;
		i++;
	}
	value = 0;
	while (ptr[i] >= '0' && ptr[i] <= '9')
	{
		value = value * 10 + (ptr[i] - '0');
		i++;
	}
	return (value * sign);
}
