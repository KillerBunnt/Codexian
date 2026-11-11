/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdexmun <thdexmun@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:21:49 by thdexmun          #+#    #+#             */
/*   Updated: 2026/11/11 19:02:04 by thdexmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "e_error.h"
#include "e_boolean.h"
#include <stdio.h>

static void	print_usage(void)
{
	printf("Usage: ./codexian <number_of_coders> <time_to_burnout> ");
	printf("<time_to_compile> <time_to_debug> <time_to_refactor> ");
	printf("<number_of_compiles_required> <dongle_cooldown> <scheduler>\n");
}

t_boolean	parse_error(t_error error)
{
	if (error == P_ARG_COUNT)
		printf("Must have 8 arguments\n");
	else if (error == P_CODERS_NUM)
		printf("Invalid number of coders\n");
	else if (error == P_BURNOUT_TIME)
		printf("Invalid Burnout time in miliseconds\n");
	else if (error == P_COMPILE_TIME)
		printf("Invalid compile time in miliseconds\n");
	else if (error == P_DEBUG_TIME)
		printf("Invalid debug time in miliseconds\n");
	else if (error == P_REFRAC_TIME)
		printf("Invalid refracor time in miliseconds\n");
	else if (error == P_COMPILE_REQ)
		printf("Invalid number of compiles required\n");
	else if (error == P_DONGLE_CD)
		printf("Invalid dongle cooldown in miliseconds\n");
	else if (error == P_SCHEDULER)
		printf("Invalid scheduler (fifo/edf)\n");
	print_usage();
	return (TRUE);
}
