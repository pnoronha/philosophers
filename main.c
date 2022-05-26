/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:11:00 by pnoronha          #+#    #+#             */
/*   Updated: 2022/05/26 00:52:55 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (!input_parse(argc, argv, &data))
	{
		write(2, "Philosophers: Error\0", 21);
		return (1);
	}
	
	return (0);
}
