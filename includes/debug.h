/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:36:47 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/09 16:05:08 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
# define DEBUG_H
# include "vector.h"
# include "quaternion.h"
# include <stdio.h>

void	print_vector(t_vector vector);
void	print_rotation(t_rotation rotation);
void	print_quaternion(t_quaternion quaternion);
int		mouse_inspect(int x, int y);
void	init_debug(void);

#endif
