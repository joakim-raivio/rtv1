/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rad_to_deg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:20:22 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/27 18:36:34 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

double	rad_to_deg(double radians)
{
	return (radians * 180 / M_PI);
}
