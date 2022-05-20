/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:18:32 by pnoronha          #+#    #+#             */
/*   Updated: 2022/05/20 13:22:18 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	parsing(int argc, char **argv)
{
	(void)argc;
	data()->num_philo = ft_atoi(*argv++);
	data()->num_forks = data()->num_philo;
	data()->die_time = ft_atoi(*argv++);
	data()->eat_time = ft_atoi(*argv++);
	data()->slp_time = ft_atoi(*argv++);
	data()->num_meal = 0;
	if (*argv)
		data()->num_meal = ft_atoi(*argv);

	printf("philo:\t%d\nforks:\t%d\ndie:\t%d\neat:\t%d\nsleep:\t%d\nmeal:\t%d\n", \
		data()->num_philo, data()->num_forks, data()->die_time, data()->eat_time, \
		data()->slp_time, data()->num_meal);
}
