/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   on_expose.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:11:46 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 07:55:40 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt_mlx.h"

/*
 * Handle redraw of a re-exposed window with this hook.
*/

int	on_expose(void *params)
{
	(void)params;
	mlx_put_image_to_window(get_frame()->mlx, get_frame()->window,
		get_image()->image, 0, 0);
	return (0);
}
