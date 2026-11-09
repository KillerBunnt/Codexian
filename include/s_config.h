/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_config.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdexmun <thdexmun@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 19:06:26 by thdexmun          #+#    #+#             */
/*   Updated: 2026/11/06 17:00:58 by thdexmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_CONFIG_H
# define S_CONFIG_H

# include "e_scheduler.h"
# include <unistd.h>

typedef struct s_config
{
	unsigned int	coders_num;
	size_t			burnout_time;
	size_t			compile_time;
	size_t			debug_time;
	size_t			refrac_time;
	unsigned int	compile_req;
	size_t			dongle_cd;
	t_scheduler		scheduler;
}	t_config;

#endif
