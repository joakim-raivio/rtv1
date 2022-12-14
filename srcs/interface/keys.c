/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:39:44 by jraivio           #+#    #+#             */
/*   Updated: 2022/12/14 16:53:29 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "interface.h"
#include "stdlib.h"

int	key_pressed(int key_code)
{
	if (key_code == KEY_ESC)
		exit(0);
	return(0);
}

int	key_released(int key_code)
{
	(void)key_code;
	return (0);
}
