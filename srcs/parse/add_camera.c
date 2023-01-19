/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_camera.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:37:05 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/19 17:54:47 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse_format.h"
#include "camera.h"
#include "libft.h"
#include "parse.h"

void	add_camera(char **fields)
{
	if (ft_splitsize(fields) < P_CAMERASIZE)
		return ;
	add_object(fields, get_camera());
}
