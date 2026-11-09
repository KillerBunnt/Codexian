/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_config.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdexmun <thdexmun@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:46:03 by thdexmun          #+#    #+#             */
/*   Updated: 2026/11/09 13:00:12 by thdexmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "e_boolean.h"
#include "e_error.h"
#include "e_scheduler.h"
#include "s_config.h"
#include <string.h>

static t_boolean	ft_isdigit(char chr)
{
	if (chr >= '0' && chr <= '9')
		return (TRUE);
	return (FALSE);
}

static t_boolean	conv_uint(char *str, unsigned int *value)
{
	unsigned int	index;
	unsigned int	check;

	index = 0;
	*value = 0;
	while (str[index])
	{
		if (!ft_isdigit(str[index]))
			return (FALSE);
		check = (*value) * 10 + (str[index] - '0');
		if (check <= *value && *value != 0)
			return (FALSE);
		index++;
		*value = check;
	}
	return (TRUE);
}

static t_boolean	conv_sizet(char *str, size_t *value)
{
	unsigned int	index;
	size_t			check;

	index = 0;
	*value = 0;
	while (str[index])
	{
		if (!ft_isdigit(str[index]))
			return (FALSE);
		check = (*value) * 10 + (str[index] - '0');
		if (check <= *value && *value != 0)
			return (FALSE);
		index++;
		*value = check;
	}
	return (TRUE);
}

static t_boolean	conv_sched(char *str, t_scheduler *sched)
{
	if (!strcmp(str, "fifo"))
	{
		*sched = FIFO;
		return (TRUE);
	}
	else if (!strcmp(str, "edf"))
	{
		*sched = EDF;
		return (TRUE);
	}
	return (FALSE);
}

t_error	parse_config(int argc, char **argv, t_config *config)
{
	int	str_index;

	str_index = 1;
	if (argc != 9)
		return (P_ARG_COUNT);
	if (!conv_uint(argv[1], &(config->coders_num)))
		return (P_CODERS_NUM);
	if (!conv_sizet(argv[2], &(config->burnout_time)))
		return (P_BURNOUT_TIME);
	if (!conv_sizet(argv[3], &(config->compile_time)))
		return (P_COMPILE_TIME);
	if (!conv_sizet(argv[4], &(config->debug_time)))
		return (P_DEBUG_TIME);
	if (!conv_sizet(argv[5], &(config->refrac_time)))
		return (P_REFRAC_TIME);
	if (!conv_uint(argv[6], &(config->compile_req)))
		return (P_COMPILE_REQ);
	if (!conv_sizet(argv[7], &(config->dongle_cd)))
		return (P_DONGLE_CD);
	if (!conv_sched(argv[8], &(config->scheduler)))
		return (P_SCHEDULER);
	return (NONE);
}
