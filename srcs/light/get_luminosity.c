/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_luminosity.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 01:10:17 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 07:59:41 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "light.h"

/*
 * To be used for accumulating different lightning functionalities together.
*/

double	get_luminosity(t_hit hit)
{
	double	luminosity;

	luminosity = calculate_diffusion(hit);
	return (luminosity);
}
