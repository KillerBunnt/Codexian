/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_error.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdexmun <thdexmun@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:07:28 by thdexmun          #+#    #+#             */
/*   Updated: 2026/11/09 12:41:34 by thdexmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef E_ERROR_H
# define E_ERROR_H

typedef enum e_error
{
	NONE = 0,
	P_ARG_COUNT,
	P_CODERS_NUM,
	P_BURNOUT_TIME,
	P_COMPILE_TIME,
	P_DEBUG_TIME,
	P_REFRAC_TIME,
	P_COMPILE_REQ,
	P_DONGLE_CD,
	P_SCHEDULER
}	t_error;

#endif