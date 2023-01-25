/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   light.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:48:14 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/25 12:39:49 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIGHT_H
# define LIGHT_H
# include "tracing.h"

typedef struct s_light
{
	t_object	object;
	double		intensity;
}	t_light;

double	get_luminosity(t_hit hit);
double	calculate_diffusion(t_hit hit);

#endif
