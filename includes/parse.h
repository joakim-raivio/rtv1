/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:59:44 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/19 19:28:24 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H
# include "object.h"

void			parse(char *file);
void			add_object(char **fields, void *object);
void			add_camera(char **fields);
void			add_light(char **fields);
void			add_shape(char **fields);
t_object_type	str_to_type(char *str);

#endif
