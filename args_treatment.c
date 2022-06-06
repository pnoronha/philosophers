/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_treatment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:41:46 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/01 22:46:00 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	input_parse(int argc, char **argv, t_data *data)
{
	if (argc < 5 || argc > 6)
	{
		write(2, "Error: Wrong number of arguments passed.\n\0", 43);
		return (false);
	}
	data->philo_nbr = ft_atoi(*argv++);
	data->forks_nbr = data->philo_nbr;
	data->die_time = ft_atoi(*argv++);
	data->eat_time = ft_atoi(*argv++);
	data->slp_time = ft_atoi(*argv++);
	data->meals_nbr = 0;
	if (argc == 6)
		data->meals_nbr = ft_atoi(*argv);
	return (true);
}
