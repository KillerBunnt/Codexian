/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stop_threads.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdexmun <thdexmun@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:27:43 by thdexmun          #+#    #+#             */
/*   Updated: 2026/11/11 19:42:36 by thdexmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <stdlib.h>

void	stop_threads(pthread_t *threads)
{
	unsigned int	index;

	index = 0;
	if (!threads)
		return;
	while (threads[index])
	{
		pthread_join(threads[index], NULL);
		index++;
	}
	free(threads);
}