/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:19:42 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/02 16:39:12 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "camera.h"
#include "scene.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_bzero(get_camera(), sizeof(t_object));
	printf("Camera:\nLocation - X:%f Y:%f Z:%f\n", get_camera()->location.x,
			get_camera()->location.y, get_camera()->location.z);
	get_camera()->location.x = 10.0;
	printf("Camera:\nLocation - X:%f Y:%f Z:%f\n", get_camera()->location.x,
			get_camera()->location.y, get_camera()->location.z);
	ft_bzero(get_scene(), sizeof(t_scene));
	printf("Scene:\n%d\n", get_scene()->lights[0].type);
	return (0);
}
