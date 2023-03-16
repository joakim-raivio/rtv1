/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:19:42 by jraivio           #+#    #+#             */
/*   Updated: 2023/03/16 07:53:17 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"
#include "rt_mlx.h"
#include "parse.h"

int	main(int argc, char **argv)
{
	init();
	if (argc == 2)
		parse(*(argv + 1));
	render();
	mlx_loop(get_frame()->mlx);
	return (0);
}
