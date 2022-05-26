/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_treatment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:41:46 by pnoronha          #+#    #+#             */
/*   Updated: 2022/05/26 01:05:32 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	input_parse(int argc, char **argv, t_data *data)
{
	if (argc < 5 || argc > 6)
	{
		write(2, "Error: Wrong number of arguments passed.\n\0", 43);
		return(false);
	}
	data->philo_num = ft_atoi(argv[1]);
	data->forks_num = data->philo_num;
	data->die_time = ft_atoi(argv[2]);
	data->eat_time = ft_atoi(argv[3]);
	data->slp_time = ft_atoi(argv[4]);
	data->meals_num = 0;
	if (argc == 6)
		data->meals_num = ft_atoi(argv[5]);
	return (true);
}
