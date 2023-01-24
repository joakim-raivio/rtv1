/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:04:18 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/24 14:12:30 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "object.h"
#include "libft.h"

t_object_type	str_to_type(char *str)
{
	int			i;
	const char	*type_mapping[] = {
		"null",
		"camera",
		"light",
		"plane",
		"sphere",
		"cylinder",
		"cone"
	};

	if (!str)
		return (0);
	i = -1;
	while (++i < 7)
		if (!ft_strcmp(type_mapping[i], str))
			return ((t_object_type)i);
	return (0);
}
