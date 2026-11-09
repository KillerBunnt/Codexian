/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdexmun <thdexmun@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:22:46 by thdexmun          #+#    #+#             */
/*   Updated: 2026/11/09 12:46:29 by thdexmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "e_error.h"
#include "e_boolean.h"

t_boolean	parse_error(t_error error);

t_boolean	print_error(t_error error)
{
	if (error >= P_ARG_COUNT && error <= P_SCHEDULER)
		return (parse_error(error));
	return (FALSE);
}
