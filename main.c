/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:11:00 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/02 00:36:34 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

t_thread	*v_th(void)
{
	static t_thread	vars;

	return (&vars);
}

t_data	*v_data(void)
{
	static t_data	vars;

	return (&vars);
}

void	*routine(void *v)
{
	// pthread_mutex_lock(&v_th()->mutex);
	printf("Philo: %d\n", (int)v);
	sleep(1);
	printf("Exiting Thread.\n");
	// pthread_mutex_unlock(&v_th()->mutex);
	return (0);
}

int	philo_table(void)
{
	pthread_t	*td;
	int			i;

	pthread_mutex_init(&v_th()->mutex, NULL);
	td = (pthread_t *)malloc(sizeof(pthread_t) * (v_data()->philo_nbr + 1));
	i = 0;
	while (++i <= v_data()->philo_nbr)
	{
		if (pthread_create(&td[i], NULL, routine, (void *)(long int)i) != 0)
		{
			write(2, "Error: failed to create thread.\0", 33);
			return (1);
		}
	}
	while (--i > 0)
	{
		if (pthread_join(td[i], NULL) != 0)
		{
			write(2, "Error: failed to join thread.\0", 31);
			return (1);
		}
	}
	pthread_mutex_destroy(&v_th()->mutex);
	free(td);
	return (0);
}

int	main(int argc, char **argv)
{
	if (!input_parse(argc, ++argv, v_data()))
	{
		write(2, "Philosophers exit.\0", 20);
		return (1);
	}
	if (!philo_table())
		return (1);
	return (0);
}
