/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdexmun <thdexmun@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:29:28 by thdexmun          #+#    #+#             */
/*   Updated: 2026/11/11 19:35:06 by thdexmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>

void	stop_threads(pthread_t *threads);

void	cleanup(pthread_t *threads)
{
	stop_threads(threads);
}