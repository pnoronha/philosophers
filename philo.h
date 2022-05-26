/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:07:43 by pnoronha          #+#    #+#             */
/*   Updated: 2022/05/26 01:05:56 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include <unistd.h>
# include <sys/time.h>

enum e_boolean
{
	false,
	true
};

typedef struct s_data
{
	int	philo_num;
	int	forks_num;
	int	meals_num;
	int	eat_time;
	int	slp_time;
	int	thk_time;
	int	die_time;
}	t_data;

int	input_parse(int argc, char **argv, t_data *data);

int	ft_atoi(const char *ptr);

#endif /* PHILO-H */
