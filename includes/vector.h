/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:05:39 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/14 15:24:27 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct s_vector
{
	double	x;
	double	y;
	double	z;
}	t_vector;

t_vector	ft_vec_add(t_vector first, t_vector second);
t_vector	ft_vec_substract(t_vector first, t_vector second);
t_vector	ft_vec_multiply(t_vector vector, double multiplier);
t_vector	ft_vec_divide(t_vector vector, double divider);
t_vector	ft_vec_normalize(t_vector vector);
double		ft_vec_dot(t_vector first, t_vector second);
t_vector	ft_vec_cross(t_vector first, t_vector second);
t_vector	ft_vec_normalize(t_vector vector);
double		ft_vec_length(t_vector vector);

#endif
