/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdexmun <thdexmun@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:43:46 by thdexmun          #+#    #+#             */
/*   Updated: 2026/11/09 13:08:51 by thdexmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse_config.h"
#include "print_error.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_config	config;

	if (print_error(parse_config(argc, argv, &config)))
		return (0);
	printf("%u\n%zu\n%zu\n%zu\n%zu\n%u\n%zu\n%u", config.coders_num, config.burnout_time, config.compile_time, config.debug_time, config.refrac_time, config.compile_req, config.dongle_cd, config.scheduler);
	return (0);
}
