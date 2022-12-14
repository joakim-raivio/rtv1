/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:22:34 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/02 17:27:37 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

double	ft_vec_length(t_vec vector)
{
	return (sqrt(pow(vector.x, 2) + pow(vector.y, 2) + pow(vecor.z, 2)));
}
