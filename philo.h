/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:07:43 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/01 22:43:36 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>

enum e_boolean { false, true };

typedef unsigned char	t_bool;

typedef struct s_data
{
	int	philo_nbr;
	int	forks_nbr;
	int	meals_nbr;
	int	eat_time;
	int	slp_time;
	int	thk_time;
	int	die_time;
}	t_data;

typedef struct s_philo
{
	t_bool	l_fk_taken;
	t_bool	r_fk_taken;
	t_bool	is_sleping;
	t_bool	is_thinking;
	t_bool	is_eating;
}	t_philo;

typedef struct s_thread
{
	pthread_mutex_t	mutex;
}	t_thread;

t_thread	*v_th(void);
t_data		*v_data(void);

int			input_parse(int argc, char **argv, t_data *data);

int			ft_atoi(const char *ptr);

#endif /* PHILO-H */
