/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   on_expose.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:11:46 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/24 14:20:31 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt_mlx.h"

int	on_expose(void *params)
{
	(void)params;
	mlx_put_image_to_window(get_frame()->mlx, get_frame()->window,
		get_image()->image, 0, 0);
	return (0);
}
