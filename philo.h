/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 22:20:49 by pnoronha          #+#    #+#             */
/*   Updated: 2022/05/20 12:37:16 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>

enum e_boolean
{
	false,
	true
};

typedef struct s_data
{
	int	num_philo;
	int	num_forks;
	int	die_time;
	int	eat_time;
	int	slp_time;
	int	num_meal;
}	t_data;

t_data	*data(void);

void	parsing(int argc, char **argv);
int		ft_atoi(const char *ptr);

#endif /* PHILO_H */
