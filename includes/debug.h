/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:36:47 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/28 20:38:00 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
# define DEBUG_H
# include "vector.h"
# include "quaternion.h"

void	print_vector(t_vector vector);
void	print_rotation(t_rotation rotation);
void	print_quaternion(t_quaternion quaternion);

#endif
