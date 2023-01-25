/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_luminosity.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 01:10:17 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/25 13:16:33 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "light.h"

double	get_luminosity(t_hit hit)
{
	double	luminosity;

	luminosity = calculate_diffusion(hit);
	return (luminosity);
}
