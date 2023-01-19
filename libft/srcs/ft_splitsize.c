/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraivio <jraivio@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:55:12 by jraivio           #+#    #+#             */
/*   Updated: 2023/01/19 17:19:40 by jraivio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_splitsize(char **array)
{
	size_t	size;

	size = 0;
	if (!array)
		return (size);
	while (*array++)
		size++;
	return (size);
}
