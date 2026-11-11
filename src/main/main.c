/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdexmun <thdexmun@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:43:46 by thdexmun          #+#    #+#             */
/*   Updated: 2026/11/11 20:03:44 by thdexmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse_config.h"
#include "print_error.h"
#include <pthread.h>
#include <stdio.h>

void	cleanup(pthread_t *threads);
pthread_t	*create_threads(unsigned int count);

int	main(int argc, char **argv)
{
	t_config	config;
	pthread_t	*threads;
	pthread_t	monitor;

	if (print_error(parse_config(argc, argv, &config)))
		return (0);
	threads = create_threads(config.coders_num);
	cleanup(threads);
	return (0);
}
