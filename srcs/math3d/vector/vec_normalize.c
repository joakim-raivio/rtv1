/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_normalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:48:43 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/15 13:32:54 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math3d.h"

t_vector	vec_normalize(t_vector vector)
{
	return (vec_divide(vector, vec_length(vector)));
}
