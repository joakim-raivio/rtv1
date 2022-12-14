/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_normalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:48:43 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/14 15:20:03 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	ft_vec_normalize(t_vector vector)
{
	return (ft_vec_divide(vector, ft_vec_length(vector)));
}
