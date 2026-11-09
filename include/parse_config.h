/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_config.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdexmun <thdexmun@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:59:24 by thdexmun          #+#    #+#             */
/*   Updated: 2026/11/09 12:44:16 by thdexmun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_CONFIG_H
# define PARSE_CONFIG_H

# include "s_config.h"
# include "e_error.h"

t_error	parse_config(int argc, char **argv, t_config *config);

#endif
