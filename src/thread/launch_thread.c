/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_thread.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdexmun <thdexmun@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:50:16 by thdexmun          #+#    #+#             */
/*   Updated: 2026/11/11 19:39:50 by thdexmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	stop_threads(pthread_t *threads);

static void	*routine(void *num)
{
	(void)num;
	return (NULL);
}

pthread_t	*create_threads(unsigned int count)
{
	unsigned int	index;
	pthread_t		*threads;

	index = 0;
	threads = (pthread_t *)malloc((count + 1) * sizeof(pthread_t));
	memset(threads, 0, ((count + 1) * sizeof(pthread_t)));
	while (index < count)
	{
		pthread_create(&(threads[index]), NULL, &routine, NULL);
		if (!threads[index])
			return (stop_threads(threads), NULL);
		index++;
	}
	return (threads);
}